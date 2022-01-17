#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


//MEM TEST 1

struct LIST
{
	unsigned char* before;
	unsigned char* after;
};
//kek
struct CyclesVariables
{
	char ConStart[100];//������
	char ConMid[100];//�������
	char ConEnd[100];//�����
	char VarAction[100];//��������
	char VarValue[100];//�������� ����������
	char VarName[100];//��� ��������������� ����������
	char FunName[100];//��� �������
};

void DeleteSpaces(FILE* First, FILE* Second)
{
	int i = 0;
	int c, prev = '\0';
	while ((c = fgetc(First)) != EOF && !feof(First))
	{
		if (c != '\n' && c != '\t' && c != ' ') 
			fputc(c, Second);
		else 
			prev = c;

		if (c == '#')
		{
			while ((c = fgetc(First)) != '\n') 
				fputc(c, Second);
			fputc(c, Second);
		}

		else if (c == '\'')
			do
			{
				prev = c;
				c = fgetc(First);
				fputc(c, Second);
				if (prev == '\\')
				{
					prev = c;
					c = fgetc(First);
					fputc(c, Second);
				}
			} while (c != '\'');

		else if (c == '"')
			do
			{
				prev = c;
				c = fgetc(First);
				fputc(c, Second);
				if (prev == '\\')
				{
					prev = c;
					c = fgetc(First);
					fputc(c, Second);
				}
			} while (c != '"');

		else if (c == '(')
		{
			int j = 1;//�������� ���������
			while (j != 0)
			{
				c = fgetc(First);
				fputc(c, Second);
				if (c == '\'')
					do
					{
						prev = c;
						c = fgetc(First);
						fputc(c, Second);
						if (prev == '\\')
						{
							prev = c;
							c = fgetc(First);
							fputc(c, Second);
						}
					} while (c != '\'');
				else if (c == '"')
					do
					{
						prev = c;
						c = fgetc(First);
						fputc(c, Second);
						if (prev == '\\')
						{
							prev = c;
							c = fgetc(First);
							fputc(c, Second);
						}
					} while (c != '"');
				else if (c == '(') j++;
				else if (c == ')') j--;
			}
		}

		else if (c == '\t' || c == ' ' || c == '\n')
		{
			int i = 0;
			//isgraph ���������, ����� �� ����������� ������������� ������
			while (!isgraph(c) && !feof(First)) //�� ����� �������� �������
			{
				c = fgetc(First);
				i++;
			}
			if (i == 1 || (prev == '\n' && i >= 2)) 
				fputc(prev, Second);//������� �� ����� ������
			if (!feof(First)) 
				fseek(First, -1, SEEK_CUR);
		}
	}
	fclose(First);
	fclose(Second);
}

int GenerateFunctionFiles(FILE* First, FILE* Second)
{
	char c;
	int i = 0;//��������� � �������
	int fun = 0;//���-�� �������

	while ((c = fgetc(First)) != EOF && !feof(First))
	{
		if (c == '#') //����������
		{
			do
			{
				fputc(c, Second);
			} while ((c = fgetc(First)) != '\n');
			fputc(c, Second);
		}

		else if (c == '{') 
			i++;
		else if (c == '}') 
			i--;

		else if (i == 0 && c == 'i')//������������ int
		{
			char Check[5];
			for (int i = 0; i < 5; i++) 
				Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("int ", Check) && j < 4; j++) 
				Check[j] = fgetc(First);
			if (strcmp("int ", Check) == 0 || strcmp("int*", Check) == 0)//���� int
			{
				int k = -1;
				char g;
				int l = 0;
				char* TakeCare;
				TakeCare = (char*)malloc(sizeof(char) * 2);
				for (int j = 0; j < 2; j++) 
					TakeCare[j] = '\0';
				while ((g = fgetc(First)) != '=' && g != '(' && g != ')' && g != ';') //�������
				{
					TakeCare[l] = g;
					l++;
					TakeCare = (char*)realloc(TakeCare, sizeof(char) * (l + 2));
					TakeCare[l] = '\0';
					if (g == '\n') 
						k--;
					k--;
				}

				if (g == '=' || g == ';')
				{
					fseek(First, k, SEEK_CUR);
					fprintf(Second, "%s", Check);
					while ((g = fgetc(First)) != ';') 
						fputc(g, Second);
					fputc(g, Second);
				}

				else if (g == '(')
				{
					FILE* massiv_fail;
					char FunNum[8] = "Fun";
					char Number[3];
					for (int j = 0; j < 3; j++) 
						Number[j] = '\0';
					_itoa(fun, Number, 10);
					fun++;
					strncat(FunNum, Number, strlen(Number));
					strncat(FunNum, ".c", strlen(".c"));
					fopen_s(&massiv_fail, FunNum, "w");
					fprintf(massiv_fail, "%s%s%c", Check, TakeCare, g);
					while ((g = fgetc(First)) != '{') 
						fputc(g, massiv_fail);
					fputc(g, massiv_fail);
					i++;
					while (i > 0 && !feof(First))//���� ������ �������
					{
						g = fgetc(First);
						if (g != EOF) 
							fputc(g, massiv_fail);
						if (g == '\'')
						{
							while ((g = fgetc(First)) != '\'')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}
						else if (g == '\"')
						{
							while ((g = fgetc(First)) != '\"')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}

						else if (g == '{') i++;
						else if (g == '}') i--;
					}
					fclose(massiv_fail);
				}
				free(TakeCare);
				TakeCare = NULL;
			}
		}

		else if (i == 0 && c == 's')//������������ ���������
		{
			char Check[8];
			for (int i = 0; i < 8; i++) Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("struct ", Check) && j < 7; j++) 
				Check[j] = fgetc(First);
			if (strcmp("struct ", Check) == 0)
			{
				int k = -1;
				char g;
				while ((g = fgetc(First)) != '{' && g != ')')
				{
					if (g == '\n') k--;
					k--;
				}
				if (g == '{')
				{
					fseek(First, k, SEEK_CUR);
					fprintf(Second, "\n%s", Check);
					while ((g = fgetc(First)) != ';' || i > 0)
					{
						fputc(g, Second);
						if (g == '{') i++;
						if (g == '}') i--;
					}
					fputc(g, Second);
				}
			}
		}

		else if (i == 0 && c == 'f')//������������ float
		{
			char Check[7];
			for (int i = 0; i < 7; i++) Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("float ", Check) && j < 6; j++) 
				Check[j] = fgetc(First);
			if (strcmp("float ", Check) == 0 || strcmp("float*", Check) == 0)
			{
				int k = -1;
				char g;
				int l = 0;
				char* TakeCare;
				TakeCare = (char*)malloc(sizeof(char) * 2);
				for (int j = 0; j < 2; j++) TakeCare[j] = '\0';
				while ((g = fgetc(First)) != '=' && g != '(' && g != ')' && g != ';')
				{
					TakeCare[l] = g;
					l++;
					TakeCare = (char*)realloc(TakeCare, sizeof(char) * (l + 2));
					TakeCare[l] = '\0';
					if (g == '\n') k--;
					k--;
				}

				if (g == '=' || g == ';')
				{
					fseek(First, k, SEEK_CUR);
					fprintf(Second, "%s", Check);
					while ((g = fgetc(First)) != ';') fputc(g, Second);
					fputc(g, Second);
				}

				else if (g == '(')
				{
					FILE* massiv_fail;
					char FunNum[8] = "Fun";
					char Number[3];
					for (int j = 0; j < 3; j++) Number[j] = '\0';
					_itoa(fun, Number, 10);
					fun++;
					strncat(FunNum, Number, strlen(Number));
					strncat(FunNum, ".c", strlen(".c"));
					fopen_s(&massiv_fail, FunNum, "w");
					fprintf(massiv_fail, "%s%s%c", Check, TakeCare, g);
					while ((g = fgetc(First)) != '{') fputc(g, massiv_fail);
					fputc(g, massiv_fail);
					i++;
					while (i > 0 && !feof(First))//���� ������ �������
					{
						g = fgetc(First);
						if (g != EOF) fputc(g, massiv_fail);
						if (g == '\'')
						{
							while ((g = fgetc(First)) != '\'')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}
						else if (g == '\"')
						{
							while ((g = fgetc(First)) != '\"')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}

						else if (g == '{') i++;
						else if (g == '}') i--;
					}
					fclose(massiv_fail);
				}
				free(TakeCare);
				TakeCare = NULL;
			}
		}

		else if (i == 0 && c == 'd')//������������ double
		{
			char Check[7];
			for (int i = 0; i < 7; i++) 
				Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("double ", Check) && j < 6; j++) Check[j] = fgetc(First);
			if (strcmp("double ", Check) == 0 || strcmp("double*", Check) == 0)
			{
				int k = -1;
				char g;
				int l = 0;
				char* TakeCare;
				TakeCare = (char*)malloc(sizeof(char) * 2);
				for (int j = 0; j < 2; j++) TakeCare[j] = '\0';
				while ((g = fgetc(First)) != '=' && g != '(' && g != ')' && g != ';')
				{
					TakeCare[l] = g;
					l++;
					TakeCare = (char*)realloc(TakeCare, sizeof(char) * (l + 2));
					TakeCare[l] = '\0';
					if (g == '\n') k--;
					k--;
				}

				if (g == '=' || g == ';')
				{
					fseek(First, k, SEEK_CUR);
					fprintf(Second, "%s", Check);
					while ((g = fgetc(First)) != ';') fputc(g, Second);
					fputc(g, Second);
				}

				else if (g == '(')
				{
					FILE* massiv_fail;
					char FunNum[8] = "Fun";
					char Number[3];
					for (int j = 0; j < 3; j++) Number[j] = '\0';
					_itoa(fun, Number, 10);
					fun++;
					strncat(FunNum, Number, strlen(Number));
					strncat(FunNum, ".c", strlen(".c"));
					fopen_s(&massiv_fail, FunNum, "w");
					fprintf(massiv_fail, "%s%s%c", Check, TakeCare, g);
					while ((g = fgetc(First)) != '{') fputc(g, massiv_fail);
					fputc(g, massiv_fail);
					i++;
					while (i > 0 && !feof(First))//���� ������ �������
					{
						g = fgetc(First);
						if (g != EOF) fputc(g, massiv_fail);
						if (g == '\'')
						{
							while ((g = fgetc(First)) != '\'')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}
						else if (g == '\"')
						{
							while ((g = fgetc(First)) != '\"')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}

						else if (g == '{') i++;
						else if (g == '}') i--;
					}
					fclose(massiv_fail);
				}
				free(TakeCare);
				TakeCare = NULL;
			}
		}
		
		else if (i == 0 && c == 'l') //������������ long
		{
			char Check[6];
			for (int i = 0; i < 6; i++) Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("long ", Check) && j < 5; j++) Check[j] = fgetc(First);
			if (strcmp("long ", Check) == 0 || strcmp("long*", Check) == 0)
			{
				int k = -1;
				char g;
				int l = 0;
				char* TakeCare;
				TakeCare = (char*)malloc(sizeof(char) * 2);
				for (int j = 0; j < 2; j++) TakeCare[j] = '\0';
				while ((g = fgetc(First)) != '=' && g != '(' && g != ')' && g != ';')
				{
					TakeCare[l] = g;
					l++;
					TakeCare = (char*)realloc(TakeCare, sizeof(char) * (l + 2));
					TakeCare[l] = '\0';
					if (g == '\n') k--;
					k--;
				}

				if (g == '=' || g == ';')
				{
					fseek(First, k, SEEK_CUR);
					fprintf(Second, "%s", Check);
					while ((g = fgetc(First)) != ';') fputc(g, Second);
					fputc(g, Second);
				}

				else if (g == '(')
				{
					FILE* massiv_fail;
					char FunNum[8] = "Fun";
					char Number[3];
					for (int j = 0; j < 3; j++) Number[j] = '\0';
					_itoa(fun, Number, 10);
					fun++;
					strncat(FunNum, Number, strlen(Number));
					strncat(FunNum, ".c", strlen(".c"));
					fopen_s(&massiv_fail, FunNum, "w");
					fprintf(massiv_fail, "%s%s%c", Check, TakeCare, g);
					while ((g = fgetc(First)) != '{') fputc(g, massiv_fail);
					fputc(g, massiv_fail);
					i++;
					while (i > 0 && !feof(First))//���� ������ �������
					{
						g = fgetc(First);
						if (g != EOF) fputc(g, massiv_fail);
						if (g == '\'')
						{
							while ((g = fgetc(First)) != '\'')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}
						else if (g == '\"')
						{
							while ((g = fgetc(First)) != '\"')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}

						else if (g == '{') i++;
						else if (g == '}') i--;
					}
					fclose(massiv_fail);
				}
				free(TakeCare);
				TakeCare = NULL;
			}
		}

		else if (i == 0 && c == 'c')//������������ char
		{
			char Check[6];
			for (int i = 0; i < 6; i++) 
				Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("char ", Check) && j < 5; j++) Check[j] = fgetc(First);
			if (strcmp("char ", Check) == 0 || strcmp("char*", Check) == 0)
			{
				int k = -1;
				char g;
				int l = 0;
				char* TakeCare;
				TakeCare = (char*)malloc(sizeof(char) * 2);
				for (int j = 0; j < 2; j++) TakeCare[j] = '\0';
				while ((g = fgetc(First)) != '=' && g != '(' && g != ')' && g != ';')
				{
					TakeCare[l] = g;
					l++;
					TakeCare = (char*)realloc(TakeCare, sizeof(char) * (l + 2));
					TakeCare[l] = '\0';
					if (g == '\n') k--;
					k--;
				}

				if (g == '=' || g == ';')
				{
					fseek(First, k, SEEK_CUR);
					fprintf(Second, "%s", Check);
					while ((g = fgetc(First)) != ';') fputc(g, Second);
					fputc(g, Second);
				}

				else if (g == '(')
				{
					FILE* massiv_fail;
					char FunNum[8] = "Fun";
					char Number[3];
					for (int j = 0; j < 3; j++) Number[j] = '\0';
					_itoa(fun, Number, 10);
					fun++;
					strncat(FunNum, Number, strlen(Number));
					strncat(FunNum, ".c", strlen(".c"));
					fopen_s(&massiv_fail, FunNum, "w");
					fprintf(massiv_fail, "%s%s%c", Check, TakeCare, g);
					while ((g = fgetc(First)) != '{') fputc(g, massiv_fail);
					fputc(g, massiv_fail);
					i++;
					while (i > 0 && !feof(First))//���� ������ �������
					{
						g = fgetc(First);
						if (g != EOF) fputc(g, massiv_fail);
						if (g == '\'')
						{
							while ((g = fgetc(First)) != '\'')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}
						else if (g == '\"')
						{
							while ((g = fgetc(First)) != '\"')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}

						else if (g == '{') i++;
						else if (g == '}') i--;
					}
					fclose(massiv_fail);
				}
				free(TakeCare);
				TakeCare = NULL;
			}
		}

		else if (i == 0 && c == 'v')//������������ void
		{
			char Check[6];
			for (int i = 0; i < 6; i++) 
				Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("void ", Check) && j < 5; j++) Check[j] = fgetc(First);
			if (strcmp("void ", Check) == 0)
			{
				int k = -1;
				char g;
				int l = 0;
				char* TakeCare;
				TakeCare = (char*)malloc(sizeof(char) * 2);
				for (int j = 0; j < 2; j++) TakeCare[j] = '\0';
				while ((g = fgetc(First)) != '=' && g != '(' && g != ')' && g != ';')
				{
					TakeCare[l] = g;
					l++;
					TakeCare = (char*)realloc(TakeCare, sizeof(char) * (l + 2));
					TakeCare[l] = '\0';
					if (g == '\n') k--;
					k--;
				}

				if (g == '=' || g == ';')
				{
					fseek(First, k, SEEK_CUR);
					fprintf(Second, "%s", Check);
					while ((g = fgetc(First)) != ';') fputc(g, Second);
					fputc(g, Second);
				}

				else if (g == '(')
				{
					FILE* massiv_fail;
					char FunNum[8] = "Fun";
					char Number[3];
					for (int j = 0; j < 3; j++) Number[j] = '\0';
					_itoa(fun, Number, 10);
					fun++;
					strncat(FunNum, Number, strlen(Number));
					strncat(FunNum, ".c", strlen(".c"));
					fopen_s(&massiv_fail, FunNum, "w");
					fprintf(massiv_fail, "%s%s%c", Check, TakeCare, g);
					while ((g = fgetc(First)) != '{') fputc(g, massiv_fail);
					fputc(g, massiv_fail);
					i++;
					while (i > 0 && !feof(First))//���� ������ �������
					{
						g = fgetc(First);
						if (g != EOF) fputc(g, massiv_fail);
						if (g == '\'')
						{
							while ((g = fgetc(First)) != '\'')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}
						else if (g == '\"')
						{
							while ((g = fgetc(First)) != '\"')
							{
								if (g == '\\')
								{
									fputc(g, massiv_fail);
									g = fgetc(First);
								}
								fputc(g, massiv_fail);
							}
							fputc(g, massiv_fail);
						}

						else if (g == '{') i++;
						else if (g == '}') i--;
					}
					fclose(massiv_fail);
				}
				free(TakeCare);
				TakeCare = NULL;
			}
		}
	}
	fclose(First);
	fclose(Second);
	return fun;
}

void WriteCycles(FILE* First, FILE* Second, struct CyclesVariables* Generate, int Limit)
{
	int count = 0;
	char Temp[140] = {'\0'};
	
	do
	{
		fprintf(Second, "%s", Temp);
		
		char c;
		fscanf(First, "%c", &c);
		fprintf(Second, "%c", c);
		fscanf(First, "%s", Temp);
	} while (!strstr(Temp, "int") && !strstr(Temp, "void") && !strstr(Temp, "char") && !strstr(Temp, "float") && !strstr(Temp, "struct"));

	fprintf(Second, "int ", Temp);
	for (int i = 0; i < Limit; i+=2)//�������� ����������
	{
		
		fprintf(Second, "%s = %s,", Generate[i].VarName, Generate[i].VarValue);
		if (i + 1 < Limit)fprintf(Second, "%s = %s,", Generate[i + 1].VarName, Generate[i + 1].VarValue);
		else break;

	}
	fseek(Second, -1, SEEK_CUR);
	fprintf(Second, ";\n%s", Temp);

	if (strcmp("struct", Temp) == 0)
	{
		char c;
		int j = 0;
		int bool = 0;
		while (j != 0 || bool == 0)//���� ������ {}
		{
			c = fgetc(First);
			fputc(c, Second);
			if (c == '{')
			{
				j++;
				bool = 1;
			}
			else if (c == '}') 
				j--;
		}
	}

	int i = 0;//�������� �� ��������� � {}
	int bool = 0;
	int reason = 1;//����� � main
	int CallFunctions = 0;
	char c;

	while ((c = fgetc(First)) != EOF && !feof(First))
	{
	Breakout:;
		char prev;
		fputc(c, Second);

		if (c == ';' && i != 0) // ; ������ �������
	{
		while (isspace(c = fgetc(First)) && !feof(First))
			fputc(c, Second);
		char Check[5];
		for (int i = 0; i < 5; i++)
			Check[i] = '\0';
		Check[0] = c;

		for (int j = 1; strstr("else", Check) != NULL && j < 4 && !feof(First); j++) //�������� �� ������� else
		{
			//printf("%s\n", Check);
			c = fgetc(First);
			Check[j] = c;
		}

		if (strcmp("else", Check) != 0)//���� ����� ; �� else, �� ����� �����
		{
			int VariableSet = rand() % (Limit - 1);
			fprintf(Second, "%s%s%s%s", Generate[VariableSet].ConStart, Generate[VariableSet].ConMid, Generate[VariableSet].ConEnd, Generate[VariableSet].VarAction);
			if (CallFunctions && count >= 0)
			{
				fprintf(Second, "%s();", Generate[count].FunName);
				count--;
			}
		}
		if (strchr(Check, '{') != NULL)
			i++;
		if (strchr(Check, '}') != NULL)
		{
			i--;
			if (i == 0 && count < Limit)
				bool = 1;
		}
		if (strchr(Check, '/') != NULL)
			for (int k = 0; k < 5; k++)
				if (Check[k] != '/')
					fputc(Check[k], Second);
				else
				{
					c = '/';
					goto Breakout;
				}
		fprintf(Second, "%s", Check);
		if (bool&& reason)
		{
			bool = 0;
			fprintf(Second, "void %s(){%s%s%s%s;}", Generate[count].FunName, Generate[count].ConStart, Generate[count].ConMid, Generate[count].ConEnd, Generate[count].VarAction);
			count++;
		}
	}

		else if (c == '(')
		{
			int j = 1;
			while (j != 0)//���� �� ����� �� ������
			{
				c = fgetc(First);
				fputc(c, Second);
				if (c == '\'')
					do
					{
						prev = c;
						c = fgetc(First);
						fputc(c, Second);
						if (prev == '\\')
						{
							prev = c;
							c = fgetc(First);
							fputc(c, Second);
						}
					} while (c != '\'');
				else if (c == '"')
					do
					{
						prev = c;
						c = fgetc(First);
						fputc(c, Second);
						if (prev == '\\')
						{
							prev = c;
							c = fgetc(First);
							fputc(c, Second);
						}
					} while (c != '"');
				else if (c == '(')
					j++;
				else if (c == ')')
					j--;
			}
		}
		
		else if (c == '{')
			i++;

		else if (c == '}')
		{
			i--;
			if (i == 0 && count < Limit && reason)//�������� ������� (�� � �����)
			{
				fprintf(Second, "\nvoid %s(){\n%s%s%s%s\n}", Generate[count].FunName, Generate[count].ConStart, Generate[count].ConMid, Generate[count].ConEnd, Generate[count].VarAction);
				count++;
			}
		}

		else if (c == '"')
		do
		{
			prev = c;
			c = fgetc(First);
			fputc(c, Second);
			if (prev == '\\')
			{
				prev = c;
				c = fgetc(First);
				fputc(c, Second);
			}
		} while (c != '"');
		
		else if (c == 's' && i == 0) //������������ ���������
		{
			char Check[7];
			for (int i = 0; i < 7; i++) 
				Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("struct", Check) != NULL && j < 6 && !feof(First); j++)
			{
				Check[j] = fgetc(First);
				fputc(Check[j], Second);
			}

			if (strcmp("struct", Check) == 0)
			{
				int j = 0;
				int bool = 0;
				while (j != 0 || bool == 0)
				{
					c = fgetc(First);
					fputc(c, Second);
					if (c == '{')
					{
						j++;
						bool = 1;
					}
					else if (c == '}') 
						j--;
				}
			}
		}

		else if (c == 'm' && i == 0)//������������ main
		{
			char Check[5];
			for (int i = 0; i < 5; i++)
				Check[i] = '\0';
			Check[0] = c;
			for (int j = 1; strstr("main", Check) != NULL && j < 4 && !feof(First); j++)
			{
				Check[j] = fgetc(First);
				fputc(Check[j], Second);
			}
			if (strcmp("main", Check) == 0)
			{
				count--;
				CallFunctions = 1;
				reason = 0;
			}
		}

		else if (c == '\'')
			do
			{
				prev = c;
				c = fgetc(First);
				fputc(c, Second);
				if (prev == '\\')
				{
					prev = c;
					c = fgetc(First);
					fputc(c, Second);
				}
			} while (c != '\'');

	}
	fclose(First);
	fclose(Second);
}

void GenerateCycles(int j, struct CyclesVariables* Generate)
{
	int Length;
	int l;
	for (int i = 0; i < j; i++)
	{
		int Rand = rand() % 50 + 25;
		for (int j = 0; j < 100; j++)
		{
			Generate[i].ConStart[j] = '\0';
			Generate[i].ConMid[j] = '\0';
			Generate[i].ConEnd[j] = '\0';
			Generate[i].VarAction[j] = '\0';
			Generate[i].VarValue[j] = '\0';
			Generate[i].VarName[j] = '\0';
			Generate[i].FunName[j] = '\0';
		}


		//���������� ���� 
		if (Rand % 3 == 0)
		{
			strcat(Generate[i].ConStart, "if("); //������������ � Generate[i].ConStart "if("
			strcat(Generate[i].ConEnd, ")");
		}
		else if (Rand % 3 == 1)
		{
			strcat(Generate[i].ConStart, "while(");
			strcat(Generate[i].ConEnd, ")");
		}
		else if (Rand % 3 == 2)
		{
			strcat(Generate[i].ConStart, "for(;");
			strcat(Generate[i].ConEnd, ";)");
		}

		Length = rand() % 10 + 5;//����� �����
		l = 0;

		//���������� ��� ����������
		for (int k = 0; k < Length; k++, l++)
		{
			char c;
			int p = rand() % 532 + 67;
			if (p % 3 == 0)
				c = rand() % 25 + 65;
			else if (p % 3 == 1) 
				c = rand() % 25 + 97;
			else if (l != 0) 
				c = rand() % 9 + 48;
			else 
				c = '_';
			Generate[i].VarName[l] = c;
		}

		Length = rand() % 10 + 5;
		l = 0;
		//��� ��� �������
		for (int k = 0; k < Length; k++, l++)
		{
			char c;
			int p = rand() % 532 + 67;
			if (p % 3 == 0) c = rand() % 25 + 65;
			else if (p % 3 == 1) c = rand() % 25 + 97;
			else if (l != 0) c = rand() % 9 + 48;
			else c = '_';
			Generate[i].FunName[l] = c;
		}

		Rand = rand() % 9000 + 1000;
		_itoa(Rand, Generate[i].VarValue, 10);//��������� �������� ���������� � ������
		Length = rand() % 9000 + 1000;

		if (Length >= Rand)
		{

			strcat(Generate[i].ConMid, Generate[i].VarName);
			strcat(Generate[i].ConMid, "<=");
			char Temp[6];
			for (int j = 0; j < 6; j++) 
				Temp[j] = '\0';
			_itoa(Length, Temp, 10);
			strcat(Generate[i].ConMid, Temp);
			strcat(Generate[i].VarAction, Generate[i].VarName);
			Rand = rand() % 2;
			if (Rand == 0) 
				strcat(Generate[i].VarAction, "++;");
			else 
				strcat(Generate[i].VarAction, "*=10;");
		}
		else
		{
			strcat(Generate[i].ConMid, Generate[i].VarName);
			strcat(Generate[i].ConMid, ">");
			char Temp[6];
			for (int j = 0; j < 6; j++) Temp[j] = '\0';
			_itoa(Length, Temp, 10);
			strcat(Generate[i].ConMid, Temp);
			strcat(Generate[i].VarAction, Generate[i].VarName);
			Rand = rand() % 2 + 0;
			if (Rand == 0) 
				strcat(Generate[i].VarAction, "--;");
			else 
				strcat(Generate[i].VarAction, "/=10;");
		}
	}
}

int FunctionGetMax(int* ar, int lines)//������������ ������ ����������
{
	int max = ar[0];
	for (int i = 1; i < lines; i++)
		if (ar[i] > max) max = ar[i];
	return max;
}

int FunctionGetMin(int* ar, int lines)//����������� ����� ����������
{
	int min = ar[0];
	for (int i = 1; i < lines; i++)
		if (ar[i] < min) min = ar[i];
	return min;
}

void CountLetters(FILE* File, int* a)//������� ���-�� �������� � ������
{
	int i = 0;
	rewind(File);
	unsigned char c = fgetc(File);
	while (!feof(File))
	{
		while (c != '\n' && !feof(File))
		{
			c = fgetc(File);
			a[i]++;
		}
		c = fgetc(File);
		a[i]++;
		i++;
	}
}

int CountLines(FILE* File)//������� ������
{
	int lines = 1;
	rewind(File); //��������� ��������� ����� � ��������� ���������
	unsigned char c = fgetc(File);
	if (File == NULL) 
		return 0;
	while (!feof(File))
		if (c = fgetc(File) == '\n') 
			lines++;
	if (ferror(File))
	{
		printf("File error\n");
		return 0;
	}
	return lines;
}


void RenameVariables()
{
	int lines;
	FILE** Alphabet;
	FILE** Modify;
	int* A;//������� ���-�� ��������
	int* B;
	int max;
	int min;

	Alphabet = (FILE**)malloc(sizeof(FILE*) * 2);
	fopen_s(&Alphabet[0], "Before.txt", "r"); //������� �������� �������
	fopen_s(&Alphabet[1], "After.txt", "r"); //����� �������� �������


	int* CheckLines;
	CheckLines = (int*)malloc(sizeof(int) * 2); //�������� �� ��� �� ��� �����
	CheckLines[0] = CountLines(Alphabet[0]);
	CheckLines[1] = CountLines(Alphabet[1]);

	if (CheckLines[0] != CheckLines[1] || CheckLines[0] == 0 || CheckLines[1] == 0)
	{
		printf("Lines don't match.\n");
		return;
	}

	lines = CheckLines[0]; //���������� �����
	free(CheckLines);
	CheckLines = NULL;

	A = (int*)calloc(lines, sizeof(int));
	B = (int*)calloc(lines, sizeof(int));
	CountLetters(Alphabet[0], A); //����������
	CountLetters(Alphabet[1], B);

	while (A[lines - 1] == 0 && B[lines - 1] == 0)
		lines--;
	if (A[lines - 1] == 0 || B[lines - 1] == 0)
	{
		printf("Lines don't match.\n");
		return;
	}

	struct LIST* Words;
	Words = (struct LIST*)malloc(sizeof(struct LIST) * lines);
	rewind(Alphabet[0]);
	rewind(Alphabet[1]);

	for (int i = 0; i < lines; i++)//��������� ��������
	{
		Words[i].before = (unsigned char*)malloc(A[i] * sizeof(unsigned char));
		Words[i].after = (unsigned char*)malloc(B[i] * sizeof(unsigned char));
		for (int j = 0; j < A[i]; j++)
		{
			Words[i].before[j] = '\0';
		}
		for (int j = 0; j < B[i]; j++)
		{
			Words[i].after[j] = '\0';
		}
		fread(Words[i].before, sizeof(unsigned char), A[i], Alphabet[0]);
		fread(Words[i].after, sizeof(unsigned char), B[i], Alphabet[1]);
		Words[i].before[A[i] - 1] = '\0';
		Words[i].after[B[i] - 1] = '\0';
	}

	fclose(Alphabet[0]);
	fclose(Alphabet[1]);
	free(Alphabet);
	Alphabet = NULL;
//	remove("Before.txt");
	//remove("After.txt");

	max = FunctionGetMax(A, lines);
	min = FunctionGetMin(A, lines);
	free(A);
	free(B);
	A = NULL;
	B = NULL;

	Modify = (FILE**)malloc(sizeof(FILE*) * 2);
	fopen_s(&Modify[0], "Final.c", "r");
	fopen_s(&Modify[1], "Draft.c", "w");

	unsigned char* buf;
	buf = (unsigned  char*)malloc(2 * sizeof(unsigned  char));
	memset(buf, NULL, 2);

	while (!feof(Modify[0]))
	{
		unsigned char c;
		int n = 0;

		while (!isalpha(c = fgetc(Modify[0])) && c != '_' && !feof(Modify[0]))//���������� ���
		{
			char prev;
			fprintf(Modify[1], "%c", c);

			if (c == '"')
				do
				{
					prev = c;
					c = fgetc(Modify[0]);
					fprintf(Modify[1], "%c", c);
					if (prev == '\\')
					{
						prev = c;
						c = fgetc(Modify[0]);
						fprintf(Modify[1], "%c", c);
					}
				} while (c != '"');
			else if (c == '\'')
				do
				{
					prev = c;
					c = fgetc(Modify[0]);
					fprintf(Modify[1], "%c", c);
					if (prev == '\\')
					{
						prev = c;
						c = fgetc(Modify[0]);
						fprintf(Modify[1], "%c", c);
					}
				} while (c != '\'');
		}

		while ((c == '_' || isalpha(c) || isdigit(c)) && !feof(Modify[0]))
		{
			buf[n] = c;
			n++;
			buf = (unsigned char*)realloc(buf, n + 2);
			c = fgetc(Modify[0]);
		}
		buf[n] = '\0';


		if (strlen(buf) > (max - 1) || strlen(buf) < (min - 1))
		{
			fprintf(Modify[1], "%s", buf);
			memset(buf, NULL, strlen(buf) + 1);
		}
		else
			for (int k = 0; k < lines; k++)
				if (strcmp(buf, Words[k].before) == 0 && strcmp(buf, "main") != 0 && strcmp(buf, "char") != 0 && strcmp(buf, "int") && strcmp(buf, "float") != 0 != 0 && strcmp(buf, "void") != 0 && strcmp(buf, "struct") != 0 && strcmp(buf, "FILE") != 0)
				{
					fprintf(Modify[1], "%s", Words[k].after);
					memset(buf, NULL, strlen(buf) + 1);
					break;
				}

		if (buf != NULL)
		{
			fprintf(Modify[1], "%s", buf);
			memset(buf, NULL, strlen(buf) + 1);
		}
		if (!feof(Modify[0])) fprintf(Modify[1], "%c", c);
	}

	fclose(Modify[0]);
	fclose(Modify[1]);
	free(Modify);
	Modify = NULL;
}
void CreateVariables(FILE* Read)
{
	FILE* Before;
	FILE* After;
	FILE* Lines;
	int Strings = 0;
	fopen_s(&Before, "Before.txt", "w");
	fopen_s(&After, "After.txt", "w");
	int FlagFunction = 0; //������ ��� ��� ���������� ����������
	int length = 0; 
	int c ,i; //� - ������ ����, i - ��������� ���� ������ ��� * ����� ���� �������
	char* massiv_fail = (char*)malloc(1*sizeof(char));
	
	for (length; (c = fgetc(Read)) != EOF; length++) //���������� ���� � ������ � ������� ����� 
	{
		massiv_fail = (char*)realloc(massiv_fail, length + 1);
		massiv_fail[length] = c;
	}
	fclose(Read);

	int bool = 0; //�������� �� ���������� �����
	for (unsigned long long index = 0; index < length; index++)
	
	{
	DeadOutside:
		if (massiv_fail[index] == 'i' && massiv_fail[index + 1] == 'n' && massiv_fail[index + 2] == 't')
		{
			bool++;
			index += 3;
		}
		else if ((massiv_fail[index] == 'c' && massiv_fail[index + 1] == 'h' && massiv_fail[index + 2] == 'a' && massiv_fail[index + 3] == 'r') || (massiv_fail[index] == 'v' && massiv_fail[index + 1] == 'o' && massiv_fail[index + 2] == 'i' && massiv_fail[index + 3] == 'd') || (massiv_fail[index] == 'F' && massiv_fail[index + 1] == 'I' && massiv_fail[index + 2] == 'L' && massiv_fail[index + 3] == 'E'))
		{
			bool++;
			index += 4;
		}
		else if (massiv_fail[index] == 'f' && massiv_fail[index + 1] == 'l' && massiv_fail[index + 2] == 'o' && massiv_fail[index + 3] == 'a' && massiv_fail[index + 4] == 't')
		{
			bool++;
			index += 5;
		}

		if (bool) //���� ��� ������ �����-�� ���
		{
		DeadInside:
			bool = 0;
			i = 0;
			while (isspace(massiv_fail[index]) || massiv_fail[index] == '*') //���������� ������ � ���������, ����� ����� �� ������� �����
			{
				index++;
				i++;
			}
			if ((isalpha(massiv_fail[index]) || massiv_fail[index] == '_') && (i != 0))
			{
				while (isalpha(massiv_fail[index]) || isdigit(massiv_fail[index]) || massiv_fail[index] == '_')
				{
					fputc(massiv_fail[index], Before); //������ �������� ������� � ����
					index++;
				}
				fputc('\n', Before);
				Strings++;
				while (strchr("(),;{}", massiv_fail[index]) == NULL) 
					index++;

				if (massiv_fail[index] == '(') FlagFunction = 1; //������ ���������� ����������
				else if (massiv_fail[index] == ')') FlagFunction = 0; //��� ���������� ����������
				else if (massiv_fail[index] == ',' && FlagFunction == 1)
				{
					index++;
					goto DeadOutside;
				}
				else if (massiv_fail[index] == ',' && FlagFunction == 0)
				{
					index++;
					goto DeadInside;
				}
				else if (massiv_fail[index] == '{')
				{
					while (massiv_fail[index] != '}')
						index++;
					index++;
				}
			}

		}
	}

	free(massiv_fail);
	massiv_fail = NULL;
	fclose(Before);
	//strings - ���������� �����
	for (int i = 0; i < Strings; i++) //���������� �������� ���������� � �������
	{
		int Length = rand() % 20 + 5; //����� ������
		for (int j = 0; j < Length; j++)
		{
			unsigned char c;
			if (j % 3 == 0) //��������� ����� 
				c = rand() % 25 + 65;
			else if (j % 3 == 1) //�������� �����
				c = rand() % 25 + 97; 
			else //����� 
				c = rand() % 9 + 48;
			fputc(c, After);
		}
		fputc('\n', After);
	}
	fclose(After);
	return Strings; //���������� �����

}

void Rewrite(FILE* First, FILE* Second)
{
	//������������ �������� � ���������
	int c = fgetc(First);
	int prev = c;
	while (c != EOF || !feof(First))
	{
		fprintf(Second, "%c", c);
		c = fgetc(First);
		prev = c;
	}
	fclose(First);
	fclose(Second);
}

void DeleteCom(FILE* input, FILE* output)
{
	int symbol, future, t = 0, k = 0;
	symbol = fgetc(input);
	if (symbol != EOF) 
	{
		while ((future = fgetc(input)) != EOF) 
		{
			//����������� ���� - //
			if ((symbol == '/') && (future == '/')) //���� ������� //
			{
				t = 1;
				while (future != '\n') //�������� �� ����� �����������
				{
					symbol = future;
					future = fgetc(input);
					if (future == EOF) 
						break;
					if (future == '\n' && symbol == '\\') //���� ������� �����������
					{
						symbol = future;
						future = fgetc(input);
					}
				}
				if (future == EOF) 
					break;
				fputc(future, output);
				future = fgetc(input);
				if (future == EOF) break;
				symbol = future;
				t = 0;
			}

			//�����
			else if (((symbol == '=') && (future == '"')) || ((symbol == '(') && (future == '"')) || ((symbol == ' ') && (future == '"')) || (symbol == '"' && future == '"'))
			{
				fputc(symbol, output);
				symbol = future;
				future = fgetc(input);
				if (future == '\\') 
				{ 
					while (future == '\\') 
					{
						k++;
						fputc(symbol, output);
						symbol = future;
						future = fgetc(input);
					}
					if (k % 2 == 1) 
					{
						fputc(symbol, output);
						symbol = future;
						future = fgetc(input);
						k = 0;
					}
				}
				while (future != '"') 
				{
					if (future != '\\')
					{	
						fputc(symbol, output);
						symbol = future;
						future = fgetc(input);
					}
					else 
					{
						while (future == '\\')
						{
							k++;
							fputc(symbol, output);
							symbol = future;
							future = fgetc(input);
						}
						if (k % 2 == 1) 
						{
							fputc(symbol, output);
							symbol = future;
							future = fgetc(input);
						}
						k = 0;
					}
				}
				fputc(symbol, output);
				symbol = future;
			}

			//����������� ���� - /**/
			else if ((symbol == '/') && (future == '*')) 
			{
				t = 1;
				symbol = future;
				future = fgetc(input);
				symbol = future;
				future = fgetc(input);
				while (symbol != '*' || future != '/') 
				{
					symbol = future;
					future = fgetc(input);
					if (future == EOF) 
						break;
				}
				symbol = future;
				future = fgetc(input);
				if (future == EOF) 
					break;
				symbol = future;
				t = 0;
			}

			else 
			{
				fputc(symbol, output);
				symbol = future;
			}

		}
		if (t == 0)
			fputc(symbol, output);
	}
	fclose(input);
	fclose(output);
}

int main() 
{
	FILE* First;
	FILE* Second;
	FILE* ConfigFile;
	int ConfigData[5];

	srand(time(NULL)); //���������� rand() ��� ������ ������� ���������

	fopen_s(&ConfigFile, "Config.txt", "r");
	for (int i = 0; i < 5; i++) 
		fscanf(ConfigFile, "%d", &ConfigData[i]);//������ ���������
	fclose(ConfigFile);

	if (ConfigData[0] == 1) // �������� ������������
	{
		fopen_s(&First, "Ishodnik.c", "r");
		fopen_s(&Second, "Final.c", "w");
		DeleteCom(First, Second);
	}
	else
	{
		fopen_s(&First, "Ishodnik.c", "r");
		fopen_s(&Second, "Final.c", "w");
		Rewrite(First, Second);
	}

	if (ConfigData[1] == 1) // ������ ���� ���������� � �������
	{
		fopen_s(&First, "Final.c", "r");
		CreateVariables(First);
		fclose(First);
		RenameVariables();
	}
	else
	{
		fopen_s(&First, "Final.c", "r");
		fopen_s(&Second, "Draft.c", "w");
		Rewrite(First, Second);
	}

	if (ConfigData[2] == 1) //��������
	{
		fopen_s(&First, "Draft.c", "r");
		fopen_s(&Second, "Final.c", "w");
		int j = rand() % 10 + 20; //���������� ������
		struct CyclesVariables* Generate;
		Generate = (struct CyclesVariables*)malloc(sizeof(struct CyclesVariables) * j);
		GenerateCycles(j, Generate);
		WriteCycles(First, Second, Generate, j);
		free(Generate);
		Generate = NULL;
	}
	else
	{
		fopen_s(&First, "Draft.c", "r");
		fopen_s(&Second, "Final.c", "w");
		Rewrite(First, Second);
	}

	if (ConfigData[3] == 1) //������������� �������
	{
		int Count;//���-�� �������
		int* Random;

		fopen_s(&First, "Final.c", "r");
		fopen_s(&Second, "Draft.c", "w");
		Count = GenerateFunctionFiles(First, Second);
		Random = (int*)malloc(sizeof(int) * Count);
		memset(Random, -1, sizeof(int) * Count); //��������� random ����� ��������� 

		for (int i = 0; i < Count; i++)//���������� �������� ���� ������� � ����������� ���������� (��� ��� ��������)
		{
			char FunNum[8] = "Fun";
			char Number[3];
			char c;
			for (int j = 0; j < 3; j++)
				Number[j] = '\0';
			_itoa(i, Number, 10);
			strncat(FunNum, Number, strlen(Number));
			strncat(FunNum, ".c", strlen(".c"));
			fopen_s(&First, "Draft.c", "a"); //draft - ����, �������� � ���������� �������
			fopen_s(&Second, FunNum, "r");
			while ((c = fgetc(Second)) != ')')
			{
				fputc(c, First);
			}
			fprintf(First, "%c;\n", c);
			fclose(First);
			fclose(Second);
		}

	/*	for (int i = 0; i < Count; i++)//������� ���������� ������� 
		{
			Random[i] = rand() % Count;
			for (int j = 0; j < Count; j++) //���������� �� ��������� �� ���������� �����
				if (Random[i] == Random[j] && j != i)
				{
					j = -1;
					Random[i] = rand() % Count;
				}
		}
		*/

		srand(time(NULL));

		for (int i = 0; i < Count; i++)
			Random[i] = i;

		for (int i = Count - 1; i > 0; i--)
		{
			int index = rand() % (i + 1); //��������� ������ �� 0 �� i
			int temp = Random[i];
			Random[i] = Random[index];
			Random[index] = temp;
		}


		for (int i = 0; i < Count; i++)//������������ ���� �������
		{
			//�������� �������� ���� � �������� � ���������� ������� � draft
			char FunNum[8] = "Fun";
			char Number[3];
			for (int j = 0; j < 3; j++) 
				Number[j] = '\0';
			_itoa(Random[i], Number, 10);
			strncat(FunNum, Number, strlen(Number));
			strncat(FunNum, ".c", strlen(".c"));
			fopen_s(&First, "Draft.c", "a");
			fopen_s(&Second, FunNum, "r");
			Rewrite(Second, First);
			remove(FunNum);
		}
		free(Random);
		Random = NULL;
	}
	else
	{
		fopen_s(&First, "Final.c", "r");
		fopen_s(&Second, "Draft.c", "w");
		Rewrite(First, Second);
	}

	if (ConfigData[4] == 1) // �������� ������ ��������
	{
		fopen_s(&First, "Draft.c", "r");
		fopen_s(&Second, "Final.c", "w");
		DeleteSpaces(First, Second);
	}
	else
	{
		fopen_s(&First, "Draft.c", "r");
		fopen_s(&Second, "Final.c", "w");
		Rewrite(First, Second);
	}
	remove("Draft.c");
}
