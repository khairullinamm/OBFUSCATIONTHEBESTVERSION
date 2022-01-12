#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int yD06B = 2365,m6L5020a6 = 3576,_1H741Tmx7S = 5088,V50SH = 5900,vH7s58wMk1gN = 1763,_Y6tXi1Pek106 = 4698,mhucXeyvWKfOkT = 1890,oyL3s40 = 4927,AxTx1 = 4089,UK6728Qh1y1D4Y = 3897,_3576b514Jb8 = 6441,UkgTE = 6047,_7UKGdHQ = 5846,iq3602X3H = 5014,JMl4Ua = 7760,q7H5MIOvNGTDb = 5510,uVP38v3o2a = 6263,b2yJG7 = 8629,gAMfL50dUwM0Jb = 8772,_TdMM1071 = 3740,LGU76bsRvGYMFC = 7137,N0y1R41s = 7089,u7wbI8wu = 6266;
struct LIST
{
unsigned char* before;
unsigned char* after;
};
struct CyclesVariables
{
char ConStart[100];
char ConMid[100];
char ConEnd[100];
char VarAction[100];
char VarValue[100];
char VarName[100];
char FunName[100];
};void DeleteSpaces(FILE* Jl0Qy2Ni1Wt8Ri2Ac1We, FILE* Ef7Cc2Pt4Tx0Fy7Ha);
void _e02W();
int GenerateFunctionFiles(FILE* Jl0Qy2Ni1Wt8Ri2Ac1We, FILE* Ef7Cc2Pt4Tx0Fy7Ha);
void K804NMj71bRo2();
void Wf3Jt0(FILE* Jl0Qy2Ni1Wt8Ri2Ac1We, FILE* Ef7Cc2Pt4Tx0Fy7Ha, struct CyclesVariables* Generate, int Limit);
void _MI0MTCCV0Yhjv();
void GenerateCycles(int Ba4Ex5Io8Yx0B, struct CyclesVariables* Generate);
int FunctionGetMax(int* ar, int Tx7Nm1Ra1Nb6Yj3Mu3Ke2K);
void _0u8o5();
int FunctionGetMin(int* ar, int Tx7Nm1Ra1Nb6Yj3Mu3Ke2K);
void _sClNe();
void CountLetters(FILE* Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl, int* a);
void cHtke4P25();
int CountLines(FILE* Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl);
void Bc5aq30();
void Vt5Id0Af1Hm7();
void _QK4GmHWMB7EJ();
void CreateVariables(FILE* Cb5Cc0Tl5Bm5Mt);
void _5dgiO7();
void Rewrite(FILE* Jl0Qy2Ni1Wt8Ri2Ac1We, FILE* Ef7Cc2Pt4Tx0Fy7Ha);
void h4qvr0u2G88rq();
void DeleteCom(FILE* input, FILE* Ua7Ru);
void _34akRY2Mqs5();
int main();
void cHtke4P25(){
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;
}void h4qvr0u2G88rq(){while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;;}int CountLines(FILE* Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl)
{
int Tx7Nm1Ra1Nb6Yj3Mu3Ke2K = 1;
while(oyL3s40<=5676)oyL3s40++;rewind(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl);
if(_3576b514Jb8>4363)_3576b514Jb8--;unsigned char c = fgetc(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;if (Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl == NULL) return 0;
for(;iq3602X3H<=9668;)iq3602X3H*=10;while (!feof(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl))
if (c = fgetc(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl) == '\n') Tx7Nm1Ra1Nb6Yj3Mu3Ke2K++;
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;if (ferror(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl))
{
printf("File error\n");
while(_7UKGdHQ>1289)_7UKGdHQ--;return 0;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
return Tx7Nm1Ra1Nb6Yj3Mu3Ke2K;
if(_3576b514Jb8>4363)_3576b514Jb8--;}int FunctionGetMin(int* ar, int Tx7Nm1Ra1Nb6Yj3Mu3Ke2K)
{
int Am7Ce5Bm7Xj4Ld7Dn2 = ar[0];
for(;uVP38v3o2a>2177;)uVP38v3o2a--;for (int Sg7Xh6Sp3Tm5V = 1; Sg7Xh6Sp3Tm5V < Tx7Nm1Ra1Nb6Yj3Mu3Ke2K; Sg7Xh6Sp3Tm5V++)
if (ar[Sg7Xh6Sp3Tm5V] < Am7Ce5Bm7Xj4Ld7Dn2) Am7Ce5Bm7Xj4Ld7Dn2 = ar[Sg7Xh6Sp3Tm5V];
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;return Am7Ce5Bm7Xj4Ld7Dn2;
if(b2yJG7>1069)b2yJG7/=10;}void DeleteSpaces(FILE* Jl0Qy2Ni1Wt8Ri2Ac1We, FILE* Ef7Cc2Pt4Tx0Fy7Ha)
{
int Sg7Xh6Sp3Tm5V = 0;
while(V50SH>2912)V50SH--;int c, Po8Dk3Kw2Bu1G = '\0';
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;while ((c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != EOF && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
if (c != '\n' && c != '\t' && c != ' ') fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
else Po8Dk3Kw2Bu1G = c;
if(_TdMM1071<=4141)_TdMM1071++;if (c == '#')
{
while ((c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\n') fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
else if (c == '\'')
do
{
Po8Dk3Kw2Bu1G = c;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_TdMM1071<=4141)_TdMM1071++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
for(;yD06B<=9570;)yD06B*=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;N0y1R41s>4956;)N0y1R41s/=10;}
} while (c != '\'');
else if (c == '"')
do
{
Po8Dk3Kw2Bu1G = c;
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;yD06B<=9570;)yD06B*=10;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
for(;iq3602X3H<=9668;)iq3602X3H*=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
while(_7UKGdHQ>1289)_7UKGdHQ--;}
} while (c != '"');
else if (c == '(')
{
int Ba4Ex5Io8Yx0B = 1;
if(b2yJG7>1069)b2yJG7/=10;while (Ba4Ex5Io8Yx0B != 0)
{
c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;yD06B<=9570;)yD06B*=10;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(AxTx1>1365)AxTx1--;if (c == '\'')
do
{
Po8Dk3Kw2Bu1G = c;
if(JMl4Ua<=9374)JMl4Ua++;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;iq3602X3H<=9668;)iq3602X3H*=10;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(b2yJG7>1069)b2yJG7/=10;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
if(b2yJG7>1069)b2yJG7/=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;yD06B<=9570;)yD06B*=10;}
} while (c != '\'');
else if (c == '"')
do
{
Po8Dk3Kw2Bu1G = c;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;UkgTE>3982;)UkgTE--;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;}
} while (c != '"');
else if (c == '(') Ba4Ex5Io8Yx0B++;
else if (c == ')') Ba4Ex5Io8Yx0B--;
if(_TdMM1071<=4141)_TdMM1071++;}
}
else if (c == '\t' || c == ' ' || c == '\n')
{
int Sg7Xh6Sp3Tm5V = 0;
if(_3576b514Jb8>4363)_3576b514Jb8--;while (!isgraph(c) && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We)){
c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;Sg7Xh6Sp3Tm5V++;
for(;N0y1R41s>4956;)N0y1R41s/=10;}
if (Sg7Xh6Sp3Tm5V == 1 || (Po8Dk3Kw2Bu1G == '\n' && Sg7Xh6Sp3Tm5V >= 2)) fputc(Po8Dk3Kw2Bu1G, Ef7Cc2Pt4Tx0Fy7Ha);
if(_TdMM1071<=4141)_TdMM1071++;if (!feof(Jl0Qy2Ni1Wt8Ri2Ac1We)) fseek(Jl0Qy2Ni1Wt8Ri2Ac1We, -1, SEEK_CUR);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;}
}
fclose(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;fclose(Ef7Cc2Pt4Tx0Fy7Ha);
while(m6L5020a6>3437)m6L5020a6/=10;}void Bc5aq30(){for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;;}int main() {
FILE* Jl0Qy2Ni1Wt8Ri2Ac1We;
if(b2yJG7>1069)b2yJG7/=10;_34akRY2Mqs5();FILE* Ef7Cc2Pt4Tx0Fy7Ha;
if(AxTx1>1365)AxTx1--;h4qvr0u2G88rq();FILE* ConfigFile;
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;_5dgiO7();int ConfigData[5];
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;_QK4GmHWMB7EJ();srand(time(NULL));if(_3576b514Jb8>4363)_3576b514Jb8--;Bc5aq30();fopen_s(&ConfigFile, "Config.txt", "r");
for(;yD06B<=9570;)yD06B*=10;cHtke4P25();for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 5; Sg7Xh6Sp3Tm5V++) fscanf(ConfigFile, "%d", &ConfigData[Sg7Xh6Sp3Tm5V]);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;_sClNe();fclose(ConfigFile);
if(AxTx1>1365)AxTx1--;_0u8o5();if (ConfigData[0] == 1){
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Ishodnik.c", "r");
for(;N0y1R41s>4956;)N0y1R41s/=10;_MI0MTCCV0Yhjv();fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Final.c", "w");
for(;UkgTE>3982;)UkgTE--;K804NMj71bRo2();DeleteCom(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha);
for(;UkgTE>3982;)UkgTE--;_e02W();}
else
{
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Ishodnik.c", "r");
if(b2yJG7>1069)b2yJG7/=10;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Final.c", "w");
for(;UkgTE>3982;)UkgTE--;Rewrite(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;}
if (ConfigData[1] == 1){
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Final.c", "r");
while(oyL3s40<=5676)oyL3s40++;CreateVariables(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_3576b514Jb8>4363)_3576b514Jb8--;fclose(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(_7UKGdHQ>1289)_7UKGdHQ--;Vt5Id0Af1Hm7();
for(;N0y1R41s>4956;)N0y1R41s/=10;}
else
{
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Final.c", "r");
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Draft.c", "w");
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;Rewrite(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha);
if(_TdMM1071<=4141)_TdMM1071++;}
if (ConfigData[2] == 1){
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Draft.c", "r");
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Final.c", "w");
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;int Ba4Ex5Io8Yx0B = rand() % 10 + 20;for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;struct CyclesVariables* Generate;
for(;UkgTE>3982;)UkgTE--;Generate = (struct CyclesVariables*)malloc(sizeof(struct CyclesVariables) * Ba4Ex5Io8Yx0B);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;GenerateCycles(Ba4Ex5Io8Yx0B, Generate);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;Wf3Jt0(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha, Generate, Ba4Ex5Io8Yx0B);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;free(Generate);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;Generate = NULL;
if(JMl4Ua<=9374)JMl4Ua++;}
else
{
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Draft.c", "r");
for(;iq3602X3H<=9668;)iq3602X3H*=10;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Final.c", "w");
if(_3576b514Jb8>4363)_3576b514Jb8--;Rewrite(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;}
if (ConfigData[3] == 1){
int Count;
while(oyL3s40<=5676)oyL3s40++;int* Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Final.c", "r");
for(;UkgTE>3982;)UkgTE--;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Draft.c", "w");
while(m6L5020a6>3437)m6L5020a6/=10;Count = GenerateFunctionFiles(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3 = (int*)malloc(sizeof(int) * Count);
if(AxTx1>1365)AxTx1--;memset(Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3, -1, sizeof(int) * Count);
for(;yD06B<=9570;)yD06B*=10;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < Count; Sg7Xh6Sp3Tm5V++)
{
char FunNum[8] = "Fun";
if(JMl4Ua<=9374)JMl4Ua++;char Pg7Fg3[3];
if(AxTx1>1365)AxTx1--;char c;
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 3; Ba4Ex5Io8Yx0B++) Pg7Fg3[Ba4Ex5Io8Yx0B] = '\0';
if(b2yJG7>1069)b2yJG7/=10;_itoa(Sg7Xh6Sp3Tm5V, Pg7Fg3, 10);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;strncat(FunNum, Pg7Fg3, strlen(Pg7Fg3));
for(;UkgTE>3982;)UkgTE--;strncat(FunNum, ".c", strlen(".c"));
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Draft.c", "a");
while(m6L5020a6>3437)m6L5020a6/=10;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, FunNum, "r");
for(;yD06B<=9570;)yD06B*=10;while ((c = fgetc(Ef7Cc2Pt4Tx0Fy7Ha)) != ')') fputc(c, Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fprintf(Jl0Qy2Ni1Wt8Ri2Ac1We, "%c;\n", c);
if(b2yJG7>1069)b2yJG7/=10;fclose(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;fclose(Ef7Cc2Pt4Tx0Fy7Ha);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;}
for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < Count; Sg7Xh6Sp3Tm5V++)
{
Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3[Sg7Xh6Sp3Tm5V] = rand() % Count;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < Count; Ba4Ex5Io8Yx0B++)
if (Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3[Sg7Xh6Sp3Tm5V] == Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3[Ba4Ex5Io8Yx0B] && Ba4Ex5Io8Yx0B != Sg7Xh6Sp3Tm5V)
{
Ba4Ex5Io8Yx0B = -1;
if(JMl4Ua<=9374)JMl4Ua++;Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3[Sg7Xh6Sp3Tm5V] = rand() % Count;
if(_3576b514Jb8>4363)_3576b514Jb8--;}
}
for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < Count; Sg7Xh6Sp3Tm5V++)
{
char FunNum[8] = "Fun";
if(_3576b514Jb8>4363)_3576b514Jb8--;char Pg7Fg3[3];
if(_3576b514Jb8>4363)_3576b514Jb8--;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 3; Ba4Ex5Io8Yx0B++) Pg7Fg3[Ba4Ex5Io8Yx0B] = '\0';
for(;yD06B<=9570;)yD06B*=10;_itoa(Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3[Sg7Xh6Sp3Tm5V], Pg7Fg3, 10);
while(oyL3s40<=5676)oyL3s40++;strncat(FunNum, Pg7Fg3, strlen(Pg7Fg3));
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;strncat(FunNum, ".c", strlen(".c"));
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Draft.c", "a");
if(AxTx1>1365)AxTx1--;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, FunNum, "r");
for(;UkgTE>3982;)UkgTE--;Rewrite(Ef7Cc2Pt4Tx0Fy7Ha, Jl0Qy2Ni1Wt8Ri2Ac1We);
if(AxTx1>1365)AxTx1--;remove(FunNum);
while(V50SH>2912)V50SH--;}
free(Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3);
if(AxTx1>1365)AxTx1--;Qu3Uy5Vu7Rj4Xi5Pd0Ee4Ex3 = NULL;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
else
{
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Final.c", "r");
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Draft.c", "w");
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;Rewrite(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha);
for(;N0y1R41s>4956;)N0y1R41s/=10;}
if (ConfigData[4] == 1){
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Draft.c", "r");
if(JMl4Ua<=9374)JMl4Ua++;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Final.c", "w");
if(b2yJG7>1069)b2yJG7/=10;DeleteSpaces(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha);
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
else
{
fopen_s(&Jl0Qy2Ni1Wt8Ri2Ac1We, "Draft.c", "r");
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;fopen_s(&Ef7Cc2Pt4Tx0Fy7Ha, "Final.c", "w");
for(;UkgTE>3982;)UkgTE--;Rewrite(Jl0Qy2Ni1Wt8Ri2Ac1We, Ef7Cc2Pt4Tx0Fy7Ha);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;}
remove("Draft.c");
if(_3576b514Jb8>4363)_3576b514Jb8--;}void K804NMj71bRo2(){while(m6L5020a6>3437)m6L5020a6/=10;;}void CountLetters(FILE* Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl, int* a)
{
int Sg7Xh6Sp3Tm5V = 0;
if(_TdMM1071<=4141)_TdMM1071++;rewind(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl);
if(b2yJG7>1069)b2yJG7/=10;unsigned char c = fgetc(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl);
for(;UkgTE>3982;)UkgTE--;while (!feof(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl))
{
while (c != '\n' && !feof(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl))
{
c = fgetc(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;a[Sg7Xh6Sp3Tm5V]++;
for(;UkgTE>3982;)UkgTE--;}
c = fgetc(Id6Cr4Fe4Gh8Ac7Nv1Sh7Nl);
if(AxTx1>1365)AxTx1--;a[Sg7Xh6Sp3Tm5V]++;
if(_3576b514Jb8>4363)_3576b514Jb8--;Sg7Xh6Sp3Tm5V++;
while(_7UKGdHQ>1289)_7UKGdHQ--;}
}void DeleteCom(FILE* input, FILE* Ua7Ru)
{
int symbol, future, t = 0, Jx2Hy7Jt3Pc3Lr3Df3Bh4M = 0;
while(m6L5020a6>3437)m6L5020a6/=10;symbol = fgetc(input);
while(m6L5020a6>3437)m6L5020a6/=10;if (symbol != EOF) {
while ((future = fgetc(input)) != EOF) {
if ((symbol == '/') && (future == '/')) {
t = 1;
while(m6L5020a6>3437)m6L5020a6/=10;while (future != '\n') {
symbol = future;
for(;yD06B<=9570;)yD06B*=10;future = fgetc(input);
for(;UkgTE>3982;)UkgTE--;if (future == EOF) break;
for(;iq3602X3H<=9668;)iq3602X3H*=10;if (future == '\n' && symbol == '\\') {
symbol = future;
while(_7UKGdHQ>1289)_7UKGdHQ--;future = fgetc(input);
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
}
if (future == EOF) break;
if(JMl4Ua<=9374)JMl4Ua++;fputc(future, Ua7Ru);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;future = fgetc(input);
if(_TdMM1071<=4141)_TdMM1071++;if (future == EOF) break;
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;symbol = future;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;t = 0;
if(AxTx1>1365)AxTx1--;}
else if (((symbol == '=') && (future == '"')) || ((symbol == '(') && (future == '"')) || ((symbol == ' ') && (future == '"')) || (symbol == '"' && future == '"')) {
fputc(symbol, Ua7Ru);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;symbol = future;
if(AxTx1>1365)AxTx1--;future = fgetc(input);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;if (future == '\\') {
while (future == '\\') {
Jx2Hy7Jt3Pc3Lr3Df3Bh4M++;
for(;yD06B<=9570;)yD06B*=10;fputc(symbol, Ua7Ru);
for(;N0y1R41s>4956;)N0y1R41s/=10;symbol = future;
if(b2yJG7>1069)b2yJG7/=10;future = fgetc(input);
for(;N0y1R41s>4956;)N0y1R41s/=10;}
if (Jx2Hy7Jt3Pc3Lr3Df3Bh4M % 2 == 1) {
fputc(symbol, Ua7Ru);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;symbol = future;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;future = fgetc(input);
if(_TdMM1071<=4141)_TdMM1071++;Jx2Hy7Jt3Pc3Lr3Df3Bh4M = 0;
if(AxTx1>1365)AxTx1--;}
}
while (future != '"') {
if (future != '\\') {
fputc(symbol, Ua7Ru);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;symbol = future;
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;future = fgetc(input);
if(b2yJG7>1069)b2yJG7/=10;}
else {
while (future == '\\') {
Jx2Hy7Jt3Pc3Lr3Df3Bh4M++;
if(_TdMM1071<=4141)_TdMM1071++;fputc(symbol, Ua7Ru);
while(oyL3s40<=5676)oyL3s40++;symbol = future;
while(m6L5020a6>3437)m6L5020a6/=10;future = fgetc(input);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;}
if (Jx2Hy7Jt3Pc3Lr3Df3Bh4M % 2 == 1) {
fputc(symbol, Ua7Ru);
if(JMl4Ua<=9374)JMl4Ua++;symbol = future;
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;future = fgetc(input);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;}
Jx2Hy7Jt3Pc3Lr3Df3Bh4M = 0;
while(_7UKGdHQ>1289)_7UKGdHQ--;}
}
fputc(symbol, Ua7Ru);
if(_TdMM1071<=4141)_TdMM1071++;symbol = future;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;}
else if ((symbol == '/') && (future == '*')) {
t = 1;
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;symbol = future;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;future = fgetc(input);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;symbol = future;
if(_3576b514Jb8>4363)_3576b514Jb8--;future = fgetc(input);
while(oyL3s40<=5676)oyL3s40++;while (symbol != '*' || future != '/') {
symbol = future;
if(b2yJG7>1069)b2yJG7/=10;future = fgetc(input);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;if (future == EOF) break;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;}
symbol = future;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;future = fgetc(input);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;if (future == EOF) break;
for(;yD06B<=9570;)yD06B*=10;symbol = future;
while(V50SH>2912)V50SH--;t = 0;
for(;UkgTE>3982;)UkgTE--;}
else {
fputc(symbol, Ua7Ru);
if(_TdMM1071<=4141)_TdMM1071++;symbol = future;
for(;N0y1R41s>4956;)N0y1R41s/=10;}
}
if (t == 0)fputc(symbol, Ua7Ru);
for(;UkgTE>3982;)UkgTE--;}
fclose(input);
if(AxTx1>1365)AxTx1--;fclose(Ua7Ru);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;}int GenerateFunctionFiles(FILE* Jl0Qy2Ni1Wt8Ri2Ac1We, FILE* Ef7Cc2Pt4Tx0Fy7Ha)
{
char c;
if(_3576b514Jb8>4363)_3576b514Jb8--;int Sg7Xh6Sp3Tm5V = 0;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;int fun = 0;
for(;yD06B<=9570;)yD06B*=10;while ((c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != EOF && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
if (c == '#')
{
do
{
fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(b2yJG7>1069)b2yJG7/=10;} while ((c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\n');
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
while(_7UKGdHQ>1289)_7UKGdHQ--;}
else if (c == '{') Sg7Xh6Sp3Tm5V++;
else if (c == '}') Sg7Xh6Sp3Tm5V--;
else if (Sg7Xh6Sp3Tm5V == 0 && c == 'i')
{
char Check[5];
if(AxTx1>1365)AxTx1--;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 5; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;Check[0] = c;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;for (int Ba4Ex5Io8Yx0B = 1; strstr("int ", Check) && Ba4Ex5Io8Yx0B < 4; Ba4Ex5Io8Yx0B++) Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(_7UKGdHQ>1289)_7UKGdHQ--;if (strcmp("int ", Check) == 0 || strcmp("int*", Check) == 0)
{
int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = -1;
while(oyL3s40<=5676)oyL3s40++;char Rf1Rp2Lt0Ua1Vy3Au7Nw7;
while(_7UKGdHQ>1289)_7UKGdHQ--;int l = 0;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;char* St7Yt8Tt5Bf6Id;
for(;UkgTE>3982;)UkgTE--;St7Yt8Tt5Bf6Id = (char*)malloc(sizeof(char) * 2);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 2; Ba4Ex5Io8Yx0B++) St7Yt8Tt5Bf6Id[Ba4Ex5Io8Yx0B] = '\0';
if(JMl4Ua<=9374)JMl4Ua++;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '=' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != '(' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ')' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ';')
{
St7Yt8Tt5Bf6Id[l] = Rf1Rp2Lt0Ua1Vy3Au7Nw7;
if(_3576b514Jb8>4363)_3576b514Jb8--;l++;
if(_3576b514Jb8>4363)_3576b514Jb8--;St7Yt8Tt5Bf6Id = (char*)realloc(St7Yt8Tt5Bf6Id, sizeof(char) * (l + 2));
if(_3576b514Jb8>4363)_3576b514Jb8--;St7Yt8Tt5Bf6Id[l] = '\0';
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\n') Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
while(V50SH>2912)V50SH--;}
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '=' || Rf1Rp2Lt0Ua1Vy3Au7Nw7 == ';')
{
fseek(Jl0Qy2Ni1Wt8Ri2Ac1We, Jx2Hy7Jt3Pc3Lr3Df3Bh4M, SEEK_CUR);
for(;yD06B<=9570;)yD06B*=10;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s", Check);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != ';') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '(')
{
FILE* Buffer;
while(V50SH>2912)V50SH--;char FunNum[8] = "Fun";
while(oyL3s40<=5676)oyL3s40++;char Pg7Fg3[3];
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 3; Ba4Ex5Io8Yx0B++) Pg7Fg3[Ba4Ex5Io8Yx0B] = '\0';
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;_itoa(fun, Pg7Fg3, 10);
for(;yD06B<=9570;)yD06B*=10;fun++;
for(;N0y1R41s>4956;)N0y1R41s/=10;strncat(FunNum, Pg7Fg3, strlen(Pg7Fg3));
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;strncat(FunNum, ".c", strlen(".c"));
while(oyL3s40<=5676)oyL3s40++;fopen_s(&Buffer, FunNum, "w");
if(_3576b514Jb8>4363)_3576b514Jb8--;fprintf(Buffer, "%s%s%c", Check, St7Yt8Tt5Bf6Id, Rf1Rp2Lt0Ua1Vy3Au7Nw7);
for(;yD06B<=9570;)yD06B*=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '{') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(_7UKGdHQ>1289)_7UKGdHQ--;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;iq3602X3H<=9668;)iq3602X3H*=10;Sg7Xh6Sp3Tm5V++;
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;while (Sg7Xh6Sp3Tm5V > 0 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 != EOF) fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(JMl4Ua<=9374)JMl4Ua++;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\'')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\'')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(b2yJG7>1069)b2yJG7/=10;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(oyL3s40<=5676)oyL3s40++;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\"')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\"')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(oyL3s40<=5676)oyL3s40++;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '{') Sg7Xh6Sp3Tm5V++;
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '}') Sg7Xh6Sp3Tm5V--;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;}
fclose(Buffer);
for(;yD06B<=9570;)yD06B*=10;}
free(St7Yt8Tt5Bf6Id);
if(_3576b514Jb8>4363)_3576b514Jb8--;St7Yt8Tt5Bf6Id = NULL;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;}
}
else if (Sg7Xh6Sp3Tm5V == 0 && c == 's')
{
char Check[8];
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 8; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;Check[0] = c;
while(m6L5020a6>3437)m6L5020a6/=10;for (int Ba4Ex5Io8Yx0B = 1; strstr("struct ", Check) && Ba4Ex5Io8Yx0B < 7; Ba4Ex5Io8Yx0B++) Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;UkgTE>3982;)UkgTE--;if (strcmp("struct ", Check) == 0)
{
int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = -1;
if(JMl4Ua<=9374)JMl4Ua++;char Rf1Rp2Lt0Ua1Vy3Au7Nw7;
while(m6L5020a6>3437)m6L5020a6/=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '{' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ')')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\n') Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
for(;iq3602X3H<=9668;)iq3602X3H*=10;Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;}
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '{')
{
fseek(Jl0Qy2Ni1Wt8Ri2Ac1We, Jx2Hy7Jt3Pc3Lr3Df3Bh4M, SEEK_CUR);
if(JMl4Ua<=9374)JMl4Ua++;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "\n%s", Check);
if(_3576b514Jb8>4363)_3576b514Jb8--;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != ';' || Sg7Xh6Sp3Tm5V > 0)
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
while(V50SH>2912)V50SH--;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '{') Sg7Xh6Sp3Tm5V++;
if(AxTx1>1365)AxTx1--;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '}') Sg7Xh6Sp3Tm5V--;
while(oyL3s40<=5676)oyL3s40++;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
if(JMl4Ua<=9374)JMl4Ua++;}
}
}
else if (Sg7Xh6Sp3Tm5V == 0 && c == 'f')
{
char Check[7];
if(_TdMM1071<=4141)_TdMM1071++;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 7; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
for(;uVP38v3o2a>2177;)uVP38v3o2a--;Check[0] = c;
for(;UkgTE>3982;)UkgTE--;for (int Ba4Ex5Io8Yx0B = 1; strstr("float ", Check) && Ba4Ex5Io8Yx0B < 6; Ba4Ex5Io8Yx0B++) Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;yD06B<=9570;)yD06B*=10;if (strcmp("float ", Check) == 0 || strcmp("float*", Check) == 0)
{
int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = -1;
if(b2yJG7>1069)b2yJG7/=10;char Rf1Rp2Lt0Ua1Vy3Au7Nw7;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;int l = 0;
if(b2yJG7>1069)b2yJG7/=10;char* St7Yt8Tt5Bf6Id;
if(_3576b514Jb8>4363)_3576b514Jb8--;St7Yt8Tt5Bf6Id = (char*)malloc(sizeof(char) * 2);
for(;UkgTE>3982;)UkgTE--;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 2; Ba4Ex5Io8Yx0B++) St7Yt8Tt5Bf6Id[Ba4Ex5Io8Yx0B] = '\0';
while(_7UKGdHQ>1289)_7UKGdHQ--;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '=' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != '(' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ')' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ';')
{
St7Yt8Tt5Bf6Id[l] = Rf1Rp2Lt0Ua1Vy3Au7Nw7;
while(V50SH>2912)V50SH--;l++;
if(b2yJG7>1069)b2yJG7/=10;St7Yt8Tt5Bf6Id = (char*)realloc(St7Yt8Tt5Bf6Id, sizeof(char) * (l + 2));
for(;yD06B<=9570;)yD06B*=10;St7Yt8Tt5Bf6Id[l] = '\0';
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\n') Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
if(_3576b514Jb8>4363)_3576b514Jb8--;Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
for(;UkgTE>3982;)UkgTE--;}
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '=' || Rf1Rp2Lt0Ua1Vy3Au7Nw7 == ';')
{
fseek(Jl0Qy2Ni1Wt8Ri2Ac1We, Jx2Hy7Jt3Pc3Lr3Df3Bh4M, SEEK_CUR);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s", Check);
if(_3576b514Jb8>4363)_3576b514Jb8--;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != ';') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
while(m6L5020a6>3437)m6L5020a6/=10;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '(')
{
FILE* Buffer;
if(JMl4Ua<=9374)JMl4Ua++;char FunNum[8] = "Fun";
for(;yD06B<=9570;)yD06B*=10;char Pg7Fg3[3];
for(;uVP38v3o2a>2177;)uVP38v3o2a--;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 3; Ba4Ex5Io8Yx0B++) Pg7Fg3[Ba4Ex5Io8Yx0B] = '\0';
if(JMl4Ua<=9374)JMl4Ua++;_itoa(fun, Pg7Fg3, 10);
while(V50SH>2912)V50SH--;fun++;
if(AxTx1>1365)AxTx1--;strncat(FunNum, Pg7Fg3, strlen(Pg7Fg3));
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;strncat(FunNum, ".c", strlen(".c"));
while(m6L5020a6>3437)m6L5020a6/=10;fopen_s(&Buffer, FunNum, "w");
if(JMl4Ua<=9374)JMl4Ua++;fprintf(Buffer, "%s%s%c", Check, St7Yt8Tt5Bf6Id, Rf1Rp2Lt0Ua1Vy3Au7Nw7);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '{') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;yD06B<=9570;)yD06B*=10;Sg7Xh6Sp3Tm5V++;
for(;iq3602X3H<=9668;)iq3602X3H*=10;while (Sg7Xh6Sp3Tm5V > 0 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 != EOF) fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(b2yJG7>1069)b2yJG7/=10;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\'')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\'')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(JMl4Ua<=9374)JMl4Ua++;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(JMl4Ua<=9374)JMl4Ua++;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\"')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\"')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;yD06B<=9570;)yD06B*=10;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_3576b514Jb8>4363)_3576b514Jb8--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(_TdMM1071<=4141)_TdMM1071++;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '{') Sg7Xh6Sp3Tm5V++;
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '}') Sg7Xh6Sp3Tm5V--;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;}
fclose(Buffer);
while(m6L5020a6>3437)m6L5020a6/=10;}
free(St7Yt8Tt5Bf6Id);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;St7Yt8Tt5Bf6Id = NULL;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;}
}
else if (Sg7Xh6Sp3Tm5V == 0 && c == 'd')
{
char Check[7];
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 7; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
while(V50SH>2912)V50SH--;Check[0] = c;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;for (int Ba4Ex5Io8Yx0B = 1; strstr("double ", Check) && Ba4Ex5Io8Yx0B < 6; Ba4Ex5Io8Yx0B++) Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;if (strcmp("double ", Check) == 0 || strcmp("double*", Check) == 0)
{
int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = -1;
while(oyL3s40<=5676)oyL3s40++;char Rf1Rp2Lt0Ua1Vy3Au7Nw7;
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;int l = 0;
if(b2yJG7>1069)b2yJG7/=10;char* St7Yt8Tt5Bf6Id;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;St7Yt8Tt5Bf6Id = (char*)malloc(sizeof(char) * 2);
if(JMl4Ua<=9374)JMl4Ua++;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 2; Ba4Ex5Io8Yx0B++) St7Yt8Tt5Bf6Id[Ba4Ex5Io8Yx0B] = '\0';
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '=' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != '(' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ')' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ';')
{
St7Yt8Tt5Bf6Id[l] = Rf1Rp2Lt0Ua1Vy3Au7Nw7;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;l++;
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;St7Yt8Tt5Bf6Id = (char*)realloc(St7Yt8Tt5Bf6Id, sizeof(char) * (l + 2));
for(;UkgTE>3982;)UkgTE--;St7Yt8Tt5Bf6Id[l] = '\0';
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\n') Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
while(m6L5020a6>3437)m6L5020a6/=10;Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '=' || Rf1Rp2Lt0Ua1Vy3Au7Nw7 == ';')
{
fseek(Jl0Qy2Ni1Wt8Ri2Ac1We, Jx2Hy7Jt3Pc3Lr3Df3Bh4M, SEEK_CUR);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s", Check);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != ';') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
if(_TdMM1071<=4141)_TdMM1071++;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '(')
{
FILE* Buffer;
for(;yD06B<=9570;)yD06B*=10;char FunNum[8] = "Fun";
for(;iq3602X3H<=9668;)iq3602X3H*=10;char Pg7Fg3[3];
while(m6L5020a6>3437)m6L5020a6/=10;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 3; Ba4Ex5Io8Yx0B++) Pg7Fg3[Ba4Ex5Io8Yx0B] = '\0';
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;_itoa(fun, Pg7Fg3, 10);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;fun++;
for(;N0y1R41s>4956;)N0y1R41s/=10;strncat(FunNum, Pg7Fg3, strlen(Pg7Fg3));
if(AxTx1>1365)AxTx1--;strncat(FunNum, ".c", strlen(".c"));
while(oyL3s40<=5676)oyL3s40++;fopen_s(&Buffer, FunNum, "w");
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;fprintf(Buffer, "%s%s%c", Check, St7Yt8Tt5Bf6Id, Rf1Rp2Lt0Ua1Vy3Au7Nw7);
while(V50SH>2912)V50SH--;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '{') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(_7UKGdHQ>1289)_7UKGdHQ--;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(m6L5020a6>3437)m6L5020a6/=10;Sg7Xh6Sp3Tm5V++;
if(_TdMM1071<=4141)_TdMM1071++;while (Sg7Xh6Sp3Tm5V > 0 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 != EOF) fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\'')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\'')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(AxTx1>1365)AxTx1--;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;UkgTE>3982;)UkgTE--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(AxTx1>1365)AxTx1--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\"')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\"')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(_3576b514Jb8>4363)_3576b514Jb8--;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;N0y1R41s>4956;)N0y1R41s/=10;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(V50SH>2912)V50SH--;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '{') Sg7Xh6Sp3Tm5V++;
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '}') Sg7Xh6Sp3Tm5V--;
for(;yD06B<=9570;)yD06B*=10;}
fclose(Buffer);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;}
free(St7Yt8Tt5Bf6Id);
while(m6L5020a6>3437)m6L5020a6/=10;St7Yt8Tt5Bf6Id = NULL;
if(JMl4Ua<=9374)JMl4Ua++;}
}
else if (Sg7Xh6Sp3Tm5V == 0 && c == 'l')
{
char Check[6];
while(oyL3s40<=5676)oyL3s40++;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 6; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
if(b2yJG7>1069)b2yJG7/=10;Check[0] = c;
if(JMl4Ua<=9374)JMl4Ua++;for (int Ba4Ex5Io8Yx0B = 1; strstr("long ", Check) && Ba4Ex5Io8Yx0B < 5; Ba4Ex5Io8Yx0B++) Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;N0y1R41s>4956;)N0y1R41s/=10;if (strcmp("long ", Check) == 0 || strcmp("long*", Check) == 0)
{
int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = -1;
while(_7UKGdHQ>1289)_7UKGdHQ--;char Rf1Rp2Lt0Ua1Vy3Au7Nw7;
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;int l = 0;
if(b2yJG7>1069)b2yJG7/=10;char* St7Yt8Tt5Bf6Id;
if(_3576b514Jb8>4363)_3576b514Jb8--;St7Yt8Tt5Bf6Id = (char*)malloc(sizeof(char) * 2);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 2; Ba4Ex5Io8Yx0B++) St7Yt8Tt5Bf6Id[Ba4Ex5Io8Yx0B] = '\0';
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '=' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != '(' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ')' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ';')
{
St7Yt8Tt5Bf6Id[l] = Rf1Rp2Lt0Ua1Vy3Au7Nw7;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;l++;
for(;iq3602X3H<=9668;)iq3602X3H*=10;St7Yt8Tt5Bf6Id = (char*)realloc(St7Yt8Tt5Bf6Id, sizeof(char) * (l + 2));
if(_TdMM1071<=4141)_TdMM1071++;St7Yt8Tt5Bf6Id[l] = '\0';
for(;yD06B<=9570;)yD06B*=10;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\n') Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;}
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '=' || Rf1Rp2Lt0Ua1Vy3Au7Nw7 == ';')
{
fseek(Jl0Qy2Ni1Wt8Ri2Ac1We, Jx2Hy7Jt3Pc3Lr3Df3Bh4M, SEEK_CUR);
while(_7UKGdHQ>1289)_7UKGdHQ--;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s", Check);
if(_TdMM1071<=4141)_TdMM1071++;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != ';') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '(')
{
FILE* Buffer;
for(;iq3602X3H<=9668;)iq3602X3H*=10;char FunNum[8] = "Fun";
if(_TdMM1071<=4141)_TdMM1071++;char Pg7Fg3[3];
while(m6L5020a6>3437)m6L5020a6/=10;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 3; Ba4Ex5Io8Yx0B++) Pg7Fg3[Ba4Ex5Io8Yx0B] = '\0';
while(_7UKGdHQ>1289)_7UKGdHQ--;_itoa(fun, Pg7Fg3, 10);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;fun++;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;strncat(FunNum, Pg7Fg3, strlen(Pg7Fg3));
if(b2yJG7>1069)b2yJG7/=10;strncat(FunNum, ".c", strlen(".c"));
for(;uVP38v3o2a>2177;)uVP38v3o2a--;fopen_s(&Buffer, FunNum, "w");
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;fprintf(Buffer, "%s%s%c", Check, St7Yt8Tt5Bf6Id, Rf1Rp2Lt0Ua1Vy3Au7Nw7);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '{') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(m6L5020a6>3437)m6L5020a6/=10;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;Sg7Xh6Sp3Tm5V++;
while(V50SH>2912)V50SH--;while (Sg7Xh6Sp3Tm5V > 0 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(b2yJG7>1069)b2yJG7/=10;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 != EOF) fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(_TdMM1071<=4141)_TdMM1071++;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\'')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\'')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(_TdMM1071<=4141)_TdMM1071++;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\"')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\"')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(AxTx1>1365)AxTx1--;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(_7UKGdHQ>1289)_7UKGdHQ--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '{') Sg7Xh6Sp3Tm5V++;
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '}') Sg7Xh6Sp3Tm5V--;
while(oyL3s40<=5676)oyL3s40++;}
fclose(Buffer);
while(V50SH>2912)V50SH--;}
free(St7Yt8Tt5Bf6Id);
if(_3576b514Jb8>4363)_3576b514Jb8--;St7Yt8Tt5Bf6Id = NULL;
for(;N0y1R41s>4956;)N0y1R41s/=10;}
}
else if (Sg7Xh6Sp3Tm5V == 0 && c == 'c')
{
char Check[6];
while(_7UKGdHQ>1289)_7UKGdHQ--;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 6; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
for(;N0y1R41s>4956;)N0y1R41s/=10;Check[0] = c;
while(m6L5020a6>3437)m6L5020a6/=10;for (int Ba4Ex5Io8Yx0B = 1; strstr("char ", Check) && Ba4Ex5Io8Yx0B < 5; Ba4Ex5Io8Yx0B++) Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(JMl4Ua<=9374)JMl4Ua++;if (strcmp("char ", Check) == 0 || strcmp("char*", Check) == 0)
{
int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = -1;
for(;N0y1R41s>4956;)N0y1R41s/=10;char Rf1Rp2Lt0Ua1Vy3Au7Nw7;
if(AxTx1>1365)AxTx1--;int l = 0;
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;char* St7Yt8Tt5Bf6Id;
for(;iq3602X3H<=9668;)iq3602X3H*=10;St7Yt8Tt5Bf6Id = (char*)malloc(sizeof(char) * 2);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 2; Ba4Ex5Io8Yx0B++) St7Yt8Tt5Bf6Id[Ba4Ex5Io8Yx0B] = '\0';
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '=' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != '(' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ')' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ';')
{
St7Yt8Tt5Bf6Id[l] = Rf1Rp2Lt0Ua1Vy3Au7Nw7;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;l++;
while(m6L5020a6>3437)m6L5020a6/=10;St7Yt8Tt5Bf6Id = (char*)realloc(St7Yt8Tt5Bf6Id, sizeof(char) * (l + 2));
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;St7Yt8Tt5Bf6Id[l] = '\0';
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\n') Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
if(JMl4Ua<=9374)JMl4Ua++;Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
if(_3576b514Jb8>4363)_3576b514Jb8--;}
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '=' || Rf1Rp2Lt0Ua1Vy3Au7Nw7 == ';')
{
fseek(Jl0Qy2Ni1Wt8Ri2Ac1We, Jx2Hy7Jt3Pc3Lr3Df3Bh4M, SEEK_CUR);
if(_TdMM1071<=4141)_TdMM1071++;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s", Check);
for(;iq3602X3H<=9668;)iq3602X3H*=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != ';') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
for(;iq3602X3H<=9668;)iq3602X3H*=10;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
for(;yD06B<=9570;)yD06B*=10;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '(')
{
FILE* Buffer;
if(_3576b514Jb8>4363)_3576b514Jb8--;char FunNum[8] = "Fun";
if(JMl4Ua<=9374)JMl4Ua++;char Pg7Fg3[3];
while(_7UKGdHQ>1289)_7UKGdHQ--;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 3; Ba4Ex5Io8Yx0B++) Pg7Fg3[Ba4Ex5Io8Yx0B] = '\0';
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;_itoa(fun, Pg7Fg3, 10);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;fun++;
if(_3576b514Jb8>4363)_3576b514Jb8--;strncat(FunNum, Pg7Fg3, strlen(Pg7Fg3));
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;strncat(FunNum, ".c", strlen(".c"));
if(_TdMM1071<=4141)_TdMM1071++;fopen_s(&Buffer, FunNum, "w");
for(;uVP38v3o2a>2177;)uVP38v3o2a--;fprintf(Buffer, "%s%s%c", Check, St7Yt8Tt5Bf6Id, Rf1Rp2Lt0Ua1Vy3Au7Nw7);
if(b2yJG7>1069)b2yJG7/=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '{') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(JMl4Ua<=9374)JMl4Ua++;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;Sg7Xh6Sp3Tm5V++;
while(m6L5020a6>3437)m6L5020a6/=10;while (Sg7Xh6Sp3Tm5V > 0 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(oyL3s40<=5676)oyL3s40++;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 != EOF) fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\'')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\'')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(b2yJG7>1069)b2yJG7/=10;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(oyL3s40<=5676)oyL3s40++;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(V50SH>2912)V50SH--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(JMl4Ua<=9374)JMl4Ua++;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\"')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\"')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;N0y1R41s>4956;)N0y1R41s/=10;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(m6L5020a6>3437)m6L5020a6/=10;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '{') Sg7Xh6Sp3Tm5V++;
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '}') Sg7Xh6Sp3Tm5V--;
if(_TdMM1071<=4141)_TdMM1071++;}
fclose(Buffer);
for(;N0y1R41s>4956;)N0y1R41s/=10;}
free(St7Yt8Tt5Bf6Id);
while(oyL3s40<=5676)oyL3s40++;St7Yt8Tt5Bf6Id = NULL;
if(_TdMM1071<=4141)_TdMM1071++;}
}
else if (Sg7Xh6Sp3Tm5V == 0 && c == 'v')
{
char Check[6];
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 6; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
for(;iq3602X3H<=9668;)iq3602X3H*=10;Check[0] = c;
if(_TdMM1071<=4141)_TdMM1071++;for (int Ba4Ex5Io8Yx0B = 1; strstr("void ", Check) && Ba4Ex5Io8Yx0B < 5; Ba4Ex5Io8Yx0B++) Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;UkgTE>3982;)UkgTE--;if (strcmp("void ", Check) == 0)
{
int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = -1;
while(_7UKGdHQ>1289)_7UKGdHQ--;char Rf1Rp2Lt0Ua1Vy3Au7Nw7;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;int l = 0;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;char* St7Yt8Tt5Bf6Id;
for(;UkgTE>3982;)UkgTE--;St7Yt8Tt5Bf6Id = (char*)malloc(sizeof(char) * 2);
if(b2yJG7>1069)b2yJG7/=10;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 2; Ba4Ex5Io8Yx0B++) St7Yt8Tt5Bf6Id[Ba4Ex5Io8Yx0B] = '\0';
for(;yD06B<=9570;)yD06B*=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '=' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != '(' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ')' && Rf1Rp2Lt0Ua1Vy3Au7Nw7 != ';')
{
St7Yt8Tt5Bf6Id[l] = Rf1Rp2Lt0Ua1Vy3Au7Nw7;
while(m6L5020a6>3437)m6L5020a6/=10;l++;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;St7Yt8Tt5Bf6Id = (char*)realloc(St7Yt8Tt5Bf6Id, sizeof(char) * (l + 2));
while(V50SH>2912)V50SH--;St7Yt8Tt5Bf6Id[l] = '\0';
while(m6L5020a6>3437)m6L5020a6/=10;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\n') Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
while(oyL3s40<=5676)oyL3s40++;Jx2Hy7Jt3Pc3Lr3Df3Bh4M--;
if(AxTx1>1365)AxTx1--;}
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '=' || Rf1Rp2Lt0Ua1Vy3Au7Nw7 == ';')
{
fseek(Jl0Qy2Ni1Wt8Ri2Ac1We, Jx2Hy7Jt3Pc3Lr3Df3Bh4M, SEEK_CUR);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s", Check);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != ';') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
if(AxTx1>1365)AxTx1--;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Ef7Cc2Pt4Tx0Fy7Ha);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '(')
{
FILE* Buffer;
while(_7UKGdHQ>1289)_7UKGdHQ--;char FunNum[8] = "Fun";
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;char Pg7Fg3[3];
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 3; Ba4Ex5Io8Yx0B++) Pg7Fg3[Ba4Ex5Io8Yx0B] = '\0';
for(;iq3602X3H<=9668;)iq3602X3H*=10;_itoa(fun, Pg7Fg3, 10);
for(;UkgTE>3982;)UkgTE--;fun++;
for(;yD06B<=9570;)yD06B*=10;strncat(FunNum, Pg7Fg3, strlen(Pg7Fg3));
if(b2yJG7>1069)b2yJG7/=10;strncat(FunNum, ".c", strlen(".c"));
for(;UkgTE>3982;)UkgTE--;fopen_s(&Buffer, FunNum, "w");
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;fprintf(Buffer, "%s%s%c", Check, St7Yt8Tt5Bf6Id, Rf1Rp2Lt0Ua1Vy3Au7Nw7);
if(b2yJG7>1069)b2yJG7/=10;while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '{') fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;UkgTE>3982;)UkgTE--;fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(_TdMM1071<=4141)_TdMM1071++;Sg7Xh6Sp3Tm5V++;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;while (Sg7Xh6Sp3Tm5V > 0 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 != EOF) fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\'')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\'')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;UkgTE>3982;)UkgTE--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\"')
{
while ((Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != '\"')
{
if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '\\')
{
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
if(b2yJG7>1069)b2yJG7/=10;Rf1Rp2Lt0Ua1Vy3Au7Nw7 = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(V50SH>2912)V50SH--;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;}
fputc(Rf1Rp2Lt0Ua1Vy3Au7Nw7, Buffer);
while(_7UKGdHQ>1289)_7UKGdHQ--;}
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '{') Sg7Xh6Sp3Tm5V++;
else if (Rf1Rp2Lt0Ua1Vy3Au7Nw7 == '}') Sg7Xh6Sp3Tm5V--;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;}
fclose(Buffer);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;}
free(St7Yt8Tt5Bf6Id);
while(V50SH>2912)V50SH--;St7Yt8Tt5Bf6Id = NULL;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
}
}
fclose(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;UkgTE>3982;)UkgTE--;fclose(Ef7Cc2Pt4Tx0Fy7Ha);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;return fun;
for(;yD06B<=9570;)yD06B*=10;}void Vt5Id0Af1Hm7()
{
int Tx7Nm1Ra1Nb6Yj3Mu3Ke2K;
while(_7UKGdHQ>1289)_7UKGdHQ--;FILE** Js3Xy1Wl1Yh0Lp7V;
if(b2yJG7>1069)b2yJG7/=10;FILE** Modify;
for(;iq3602X3H<=9668;)iq3602X3H*=10;int* A;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;int* Fu5Fe7Rh1Bh5Om8Da1Y;
if(JMl4Ua<=9374)JMl4Ua++;int Bv6Kx7Xr;
while(oyL3s40<=5676)oyL3s40++;int Am7Ce5Bm7Xj4Ld7Dn2;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;Js3Xy1Wl1Yh0Lp7V = (FILE**)malloc(sizeof(FILE*) * 2);
if(_3576b514Jb8>4363)_3576b514Jb8--;fopen_s(&Js3Xy1Wl1Yh0Lp7V[0], "Before.txt", "r");
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;fopen_s(&Js3Xy1Wl1Yh0Lp7V[1], "After.txt", "r");
while(V50SH>2912)V50SH--;int* CheckLines;
while(m6L5020a6>3437)m6L5020a6/=10;CheckLines = (int*)malloc(sizeof(int) * 2);
for(;yD06B<=9570;)yD06B*=10;CheckLines[0] = CountLines(Js3Xy1Wl1Yh0Lp7V[0]);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;CheckLines[1] = CountLines(Js3Xy1Wl1Yh0Lp7V[1]);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;if (CheckLines[0] != CheckLines[1] || CheckLines[0] == 0 || CheckLines[1] == 0)
{
printf("Lines don't match.\n");
for(;yD06B<=9570;)yD06B*=10;return;
while(m6L5020a6>3437)m6L5020a6/=10;}
Tx7Nm1Ra1Nb6Yj3Mu3Ke2K = CheckLines[0];
if(b2yJG7>1069)b2yJG7/=10;free(CheckLines);
while(m6L5020a6>3437)m6L5020a6/=10;CheckLines = NULL;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;A = (int*)calloc(Tx7Nm1Ra1Nb6Yj3Mu3Ke2K, sizeof(int));
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;Fu5Fe7Rh1Bh5Om8Da1Y = (int*)calloc(Tx7Nm1Ra1Nb6Yj3Mu3Ke2K, sizeof(int));
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;CountLetters(Js3Xy1Wl1Yh0Lp7V[0], A);
if(b2yJG7>1069)b2yJG7/=10;CountLetters(Js3Xy1Wl1Yh0Lp7V[1], Fu5Fe7Rh1Bh5Om8Da1Y);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;while (A[Tx7Nm1Ra1Nb6Yj3Mu3Ke2K - 1] == 0 && Fu5Fe7Rh1Bh5Om8Da1Y[Tx7Nm1Ra1Nb6Yj3Mu3Ke2K - 1] == 0) Tx7Nm1Ra1Nb6Yj3Mu3Ke2K--;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;if (A[Tx7Nm1Ra1Nb6Yj3Mu3Ke2K - 1] == 0 || Fu5Fe7Rh1Bh5Om8Da1Y[Tx7Nm1Ra1Nb6Yj3Mu3Ke2K - 1] == 0)
{
printf("Lines don't match.\n");
while(_7UKGdHQ>1289)_7UKGdHQ--;return;
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;}
struct LIST* Words;
while(oyL3s40<=5676)oyL3s40++;Words = (struct LIST*)malloc(sizeof(struct LIST) * Tx7Nm1Ra1Nb6Yj3Mu3Ke2K);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;rewind(Js3Xy1Wl1Yh0Lp7V[0]);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;rewind(Js3Xy1Wl1Yh0Lp7V[1]);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < Tx7Nm1Ra1Nb6Yj3Mu3Ke2K; Sg7Xh6Sp3Tm5V++)
{
Words[Sg7Xh6Sp3Tm5V].before = (unsigned char*)malloc(A[Sg7Xh6Sp3Tm5V] * sizeof(unsigned char));
if(_TdMM1071<=4141)_TdMM1071++;Words[Sg7Xh6Sp3Tm5V].after = (unsigned char*)malloc(Fu5Fe7Rh1Bh5Om8Da1Y[Sg7Xh6Sp3Tm5V] * sizeof(unsigned char));
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < A[Sg7Xh6Sp3Tm5V]; Ba4Ex5Io8Yx0B++)
{
Words[Sg7Xh6Sp3Tm5V].before[Ba4Ex5Io8Yx0B] = '\0';
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;}
for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < Fu5Fe7Rh1Bh5Om8Da1Y[Sg7Xh6Sp3Tm5V]; Ba4Ex5Io8Yx0B++)
{
Words[Sg7Xh6Sp3Tm5V].after[Ba4Ex5Io8Yx0B] = '\0';
for(;N0y1R41s>4956;)N0y1R41s/=10;}
fread(Words[Sg7Xh6Sp3Tm5V].before, sizeof(unsigned char), A[Sg7Xh6Sp3Tm5V], Js3Xy1Wl1Yh0Lp7V[0]);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;fread(Words[Sg7Xh6Sp3Tm5V].after, sizeof(unsigned char), Fu5Fe7Rh1Bh5Om8Da1Y[Sg7Xh6Sp3Tm5V], Js3Xy1Wl1Yh0Lp7V[1]);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;Words[Sg7Xh6Sp3Tm5V].before[A[Sg7Xh6Sp3Tm5V] - 1] = '\0';
for(;iq3602X3H<=9668;)iq3602X3H*=10;Words[Sg7Xh6Sp3Tm5V].after[Fu5Fe7Rh1Bh5Om8Da1Y[Sg7Xh6Sp3Tm5V] - 1] = '\0';
if(JMl4Ua<=9374)JMl4Ua++;}
fclose(Js3Xy1Wl1Yh0Lp7V[0]);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;fclose(Js3Xy1Wl1Yh0Lp7V[1]);
if(AxTx1>1365)AxTx1--;free(Js3Xy1Wl1Yh0Lp7V);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;Js3Xy1Wl1Yh0Lp7V = NULL;
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;remove("Before.txt");
while(m6L5020a6>3437)m6L5020a6/=10;remove("After.txt");
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;Bv6Kx7Xr = FunctionGetMax(A, Tx7Nm1Ra1Nb6Yj3Mu3Ke2K);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;Am7Ce5Bm7Xj4Ld7Dn2 = FunctionGetMin(A, Tx7Nm1Ra1Nb6Yj3Mu3Ke2K);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;free(A);
while(oyL3s40<=5676)oyL3s40++;free(Fu5Fe7Rh1Bh5Om8Da1Y);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;A = NULL;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;Fu5Fe7Rh1Bh5Om8Da1Y = NULL;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;Modify = (FILE**)malloc(sizeof(FILE*) * 2);
while(_7UKGdHQ>1289)_7UKGdHQ--;fopen_s(&Modify[0], "Final.c", "r");
while(m6L5020a6>3437)m6L5020a6/=10;fopen_s(&Modify[1], "Draft.c", "w");
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;unsigned char* buf;
for(;yD06B<=9570;)yD06B*=10;buf = (unsigned  char*)malloc(2 * sizeof(unsigned  char));
if(AxTx1>1365)AxTx1--;memset(buf, NULL, 2);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;while (!feof(Modify[0]))
{
unsigned char c;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;int n = 0;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;while (!isalpha(c = fgetc(Modify[0])) && c != '_' && !feof(Modify[0]))
{
char Po8Dk3Kw2Bu1G;
for(;yD06B<=9570;)yD06B*=10;fprintf(Modify[1], "%c", c);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;if (c == '"')
do
{
Po8Dk3Kw2Bu1G = c;
for(;iq3602X3H<=9668;)iq3602X3H*=10;c = fgetc(Modify[0]);
while(_7UKGdHQ>1289)_7UKGdHQ--;fprintf(Modify[1], "%c", c);
for(;iq3602X3H<=9668;)iq3602X3H*=10;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
while(m6L5020a6>3437)m6L5020a6/=10;c = fgetc(Modify[0]);
if(_TdMM1071<=4141)_TdMM1071++;fprintf(Modify[1], "%c", c);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;}
} while (c != '"');
else if (c == '\'')
do
{
Po8Dk3Kw2Bu1G = c;
while(_7UKGdHQ>1289)_7UKGdHQ--;c = fgetc(Modify[0]);
for(;yD06B<=9570;)yD06B*=10;fprintf(Modify[1], "%c", c);
for(;yD06B<=9570;)yD06B*=10;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;c = fgetc(Modify[0]);
if(AxTx1>1365)AxTx1--;fprintf(Modify[1], "%c", c);
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
} while (c != '\'');
while(oyL3s40<=5676)oyL3s40++;}
while ((c == '_' || isalpha(c) || isdigit(c)) && !feof(Modify[0]))
{
buf[n] = c;
if(b2yJG7>1069)b2yJG7/=10;n++;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;buf[n] = '\0';
while(oyL3s40<=5676)oyL3s40++;buf = (unsigned char*)realloc(buf, n + 2);
for(;UkgTE>3982;)UkgTE--;c = fgetc(Modify[0]);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;}
if (strlen(buf) > (Bv6Kx7Xr - 1) || strlen(buf) < (Am7Ce5Bm7Xj4Ld7Dn2 - 1))
{
fprintf(Modify[1], "%s", buf);
while(m6L5020a6>3437)m6L5020a6/=10;memset(buf, NULL, strlen(buf) + 1);
if(_TdMM1071<=4141)_TdMM1071++;}
else
for (int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = 0; Jx2Hy7Jt3Pc3Lr3Df3Bh4M < Tx7Nm1Ra1Nb6Yj3Mu3Ke2K; Jx2Hy7Jt3Pc3Lr3Df3Bh4M++)
if (strcmp(buf, Words[Jx2Hy7Jt3Pc3Lr3Df3Bh4M].before) == 0 && strcmp(buf, "main") != 0 && strcmp(buf, "char") != 0 && strcmp(buf, "int") && strcmp(buf, "float") != 0 != 0 && strcmp(buf, "void") != 0 && strcmp(buf, "struct") != 0 && strcmp(buf, "FILE") != 0)
{
fprintf(Modify[1], "%s", Words[Jx2Hy7Jt3Pc3Lr3Df3Bh4M].after);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;memset(buf, NULL, strlen(buf) + 1);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;break;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;}
if (buf != NULL)
{
fprintf(Modify[1], "%s", buf);
if(_TdMM1071<=4141)_TdMM1071++;memset(buf, NULL, strlen(buf) + 1);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
if (!feof(Modify[0])) fprintf(Modify[1], "%c", c);
if(AxTx1>1365)AxTx1--;}
fclose(Modify[0]);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;fclose(Modify[1]);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;free(Modify);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;Modify = NULL;
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;}void Wf3Jt0(FILE* Jl0Qy2Ni1Wt8Ri2Ac1We, FILE* Ef7Cc2Pt4Tx0Fy7Ha, struct CyclesVariables* Generate, int Limit)
{
int count = 0;
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;char Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8[140];
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 140; Sg7Xh6Sp3Tm5V++) Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8[Sg7Xh6Sp3Tm5V] = '\0';
while(_7UKGdHQ>1289)_7UKGdHQ--;do
{
fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s", Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 140; Sg7Xh6Sp3Tm5V++) Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8[Sg7Xh6Sp3Tm5V] = '\0';
if(_TdMM1071<=4141)_TdMM1071++;char c;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fscanf(Jl0Qy2Ni1Wt8Ri2Ac1We, "%c", &c);
if(_TdMM1071<=4141)_TdMM1071++;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%c", c);
while(oyL3s40<=5676)oyL3s40++;fscanf(Jl0Qy2Ni1Wt8Ri2Ac1We, "%s", Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8);
for(;UkgTE>3982;)UkgTE--;} while (!strstr(Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8, "int") && !strstr(Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8, "void") && !strstr(Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8, "char") && !strstr(Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8, "float") && !strstr(Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8, "struct"));
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "int ", Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < Limit; Sg7Xh6Sp3Tm5V++)
{
fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s = %s", Generate[Sg7Xh6Sp3Tm5V].VarName, Generate[Sg7Xh6Sp3Tm5V].VarValue);
if(_TdMM1071<=4141)_TdMM1071++;if (Sg7Xh6Sp3Tm5V != Limit - 1) fprintf(Ef7Cc2Pt4Tx0Fy7Ha, ",");
while(m6L5020a6>3437)m6L5020a6/=10;}
fprintf(Ef7Cc2Pt4Tx0Fy7Ha, ";\n%s", Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;if (strcmp("struct", Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8) == 0)
{
char c;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;int Ba4Ex5Io8Yx0B = 0;
if(AxTx1>1365)AxTx1--;int Rs3Sn5I = 0;
while(m6L5020a6>3437)m6L5020a6/=10;while (Ba4Ex5Io8Yx0B != 0 || Rs3Sn5I == 0)
{
c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;if (c == '{')
{
Ba4Ex5Io8Yx0B++;
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;Rs3Sn5I = 1;
while(_7UKGdHQ>1289)_7UKGdHQ--;}
else if (c == '}') Ba4Ex5Io8Yx0B--;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;}
}
int Sg7Xh6Sp3Tm5V = 0;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;int Rs3Sn5I = 0;
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;int reason = 1;
for(;UkgTE>3982;)UkgTE--;int CallFunctions = 0;
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;char c;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;while ((c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) != EOF && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
Breakout:;
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;char Po8Dk3Kw2Bu1G;
for(;yD06B<=9570;)yD06B*=10;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;if (c == 's' && Sg7Xh6Sp3Tm5V == 0){
char Check[7];
for(;iq3602X3H<=9668;)iq3602X3H*=10;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 7; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;Check[0] = c;
for(;iq3602X3H<=9668;)iq3602X3H*=10;for (int Ba4Ex5Io8Yx0B = 1; strstr("struct", Check) != NULL && Ba4Ex5Io8Yx0B < 6 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We); Ba4Ex5Io8Yx0B++)
{
Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;fputc(Check[Ba4Ex5Io8Yx0B], Ef7Cc2Pt4Tx0Fy7Ha);
while(_7UKGdHQ>1289)_7UKGdHQ--;}
if (strcmp("struct", Check) == 0)
{
int Ba4Ex5Io8Yx0B = 0;
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;int Rs3Sn5I = 0;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;while (Ba4Ex5Io8Yx0B != 0 || Rs3Sn5I == 0)
{
c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(m6L5020a6>3437)m6L5020a6/=10;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;if (c == '{')
{
Ba4Ex5Io8Yx0B++;
for(;yD06B<=9570;)yD06B*=10;Rs3Sn5I = 1;
for(;yD06B<=9570;)yD06B*=10;}
else if (c == '}') Ba4Ex5Io8Yx0B--;
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
}
}
else if (c == 'm' && Sg7Xh6Sp3Tm5V == 0)
{
char Check[5];
if(b2yJG7>1069)b2yJG7/=10;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 5; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
if(_TdMM1071<=4141)_TdMM1071++;Check[0] = c;
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;for (int Ba4Ex5Io8Yx0B = 1; strstr("main", Check) != NULL && Ba4Ex5Io8Yx0B < 4 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We); Ba4Ex5Io8Yx0B++)
{
Check[Ba4Ex5Io8Yx0B] = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;fputc(Check[Ba4Ex5Io8Yx0B], Ef7Cc2Pt4Tx0Fy7Ha);
while(V50SH>2912)V50SH--;}
if (strcmp("main", Check) == 0)
{
count--;
while(V50SH>2912)V50SH--;CallFunctions = 1;
if(_3576b514Jb8>4363)_3576b514Jb8--;reason = 0;
for(;LGU76bsRvGYMFC>6005;)LGU76bsRvGYMFC--;}
}
else if (c == '{') Sg7Xh6Sp3Tm5V++;
else if (c == '}')
{
Sg7Xh6Sp3Tm5V--;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;if (Sg7Xh6Sp3Tm5V == 0 && count < Limit && reason)
{
fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "\nvoid %s(){\n%s%s%s%s\n}", Generate[count].FunName, Generate[count].ConStart, Generate[count].ConMid, Generate[count].ConEnd, Generate[count].VarAction);
if(JMl4Ua<=9374)JMl4Ua++;count++;
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
}
else if (c == '\'')
do
{
Po8Dk3Kw2Bu1G = c;
for(;iq3602X3H<=9668;)iq3602X3H*=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(b2yJG7>1069)b2yJG7/=10;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
if(_3576b514Jb8>4363)_3576b514Jb8--;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_3576b514Jb8>4363)_3576b514Jb8--;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(JMl4Ua<=9374)JMl4Ua++;}
} while (c != '\'');
else if (c == '"')
do
{
Po8Dk3Kw2Bu1G = c;
if(_TdMM1071<=4141)_TdMM1071++;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(oyL3s40<=5676)oyL3s40++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
while(V50SH>2912)V50SH--;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
while(m6L5020a6>3437)m6L5020a6/=10;}
} while (c != '"');
else if (c == '(')
{
int Ba4Ex5Io8Yx0B = 1;
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;while (Ba4Ex5Io8Yx0B != 0)
{
c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
while(V50SH>2912)V50SH--;if (c == '\'')
do
{
Po8Dk3Kw2Bu1G = c;
for(;iq3602X3H<=9668;)iq3602X3H*=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(_3576b514Jb8>4363)_3576b514Jb8--;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
if(AxTx1>1365)AxTx1--;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(b2yJG7>1069)b2yJG7/=10;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;N0y1R41s>4956;)N0y1R41s/=10;}
} while (c != '\'');
else if (c == '"')
do
{
Po8Dk3Kw2Bu1G = c;
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(V50SH>2912)V50SH--;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;if (Po8Dk3Kw2Bu1G == '\\')
{
Po8Dk3Kw2Bu1G = c;
for(;yD06B<=9570;)yD06B*=10;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(V50SH>2912)V50SH--;fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;}
} while (c != '"');
else if (c == '(') Ba4Ex5Io8Yx0B++;
else if (c == ')') Ba4Ex5Io8Yx0B--;
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
}
else if (c == ';' && Sg7Xh6Sp3Tm5V != 0){
while (isspace(c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We)) && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We)) fputc(c, Ef7Cc2Pt4Tx0Fy7Ha);
if(_TdMM1071<=4141)_TdMM1071++;char Check[5];
for(;yD06B<=9570;)yD06B*=10;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 5; Sg7Xh6Sp3Tm5V++) Check[Sg7Xh6Sp3Tm5V] = '\0';
for(;iq3602X3H<=9668;)iq3602X3H*=10;Check[0] = c;
for(;iq3602X3H<=9668;)iq3602X3H*=10;for (int Ba4Ex5Io8Yx0B = 1; strstr("else", Check) != NULL && Ba4Ex5Io8Yx0B < 4 && !feof(Jl0Qy2Ni1Wt8Ri2Ac1We); Ba4Ex5Io8Yx0B++)
{
c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;Check[Ba4Ex5Io8Yx0B] = c;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;}
if (strcmp("else", Check) != 0)
{
int VariableSet = rand() % (Limit - 1);
while(oyL3s40<=5676)oyL3s40++;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s%s%s%s", Generate[VariableSet].ConStart, Generate[VariableSet].ConMid, Generate[VariableSet].ConEnd, Generate[VariableSet].VarAction);
if(b2yJG7>1069)b2yJG7/=10;if (CallFunctions && count >= 0)
{
fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s();", Generate[count].FunName);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;count--;
for(;iq3602X3H<=9668;)iq3602X3H*=10;}
}
if (strchr(Check, '{') != NULL) Sg7Xh6Sp3Tm5V++;
if(b2yJG7>1069)b2yJG7/=10;if (strchr(Check, '}') != NULL)
{
Sg7Xh6Sp3Tm5V--;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;if (Sg7Xh6Sp3Tm5V == 0 && count < Limit) Rs3Sn5I = 1;
if(AxTx1>1365)AxTx1--;}
if (strchr(Check, '/') != NULL)
for (int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = 0; Jx2Hy7Jt3Pc3Lr3Df3Bh4M < 5; Jx2Hy7Jt3Pc3Lr3Df3Bh4M++)
if (Check[Jx2Hy7Jt3Pc3Lr3Df3Bh4M] != '/') fputc(Check[Jx2Hy7Jt3Pc3Lr3Df3Bh4M], Ef7Cc2Pt4Tx0Fy7Ha);
else
{
c = '/';
for(;iq3602X3H<=9668;)iq3602X3H*=10;goto Breakout;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;}
fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%s", Check);
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;if (Rs3Sn5I && reason)
{
Rs3Sn5I = 0;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "void %s(){%s%s%s%s;}", Generate[count].FunName, Generate[count].ConStart, Generate[count].ConMid, Generate[count].ConEnd, Generate[count].VarAction);
while(m6L5020a6>3437)m6L5020a6/=10;count++;
if(_3576b514Jb8>4363)_3576b514Jb8--;}
}
}
fclose(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(oyL3s40<=5676)oyL3s40++;fclose(Ef7Cc2Pt4Tx0Fy7Ha);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;}void Rewrite(FILE* Jl0Qy2Ni1Wt8Ri2Ac1We, FILE* Ef7Cc2Pt4Tx0Fy7Ha)
{
int c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;int Po8Dk3Kw2Bu1G = c;
for(;iq3602X3H<=9668;)iq3602X3H*=10;while (c != EOF || !feof(Jl0Qy2Ni1Wt8Ri2Ac1We))
{
fprintf(Ef7Cc2Pt4Tx0Fy7Ha, "%c", c);
for(;uVP38v3o2a>2177;)uVP38v3o2a--;c = fgetc(Jl0Qy2Ni1Wt8Ri2Ac1We);
while(oyL3s40<=5676)oyL3s40++;Po8Dk3Kw2Bu1G = c;
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;}
fclose(Jl0Qy2Ni1Wt8Ri2Ac1We);
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;fclose(Ef7Cc2Pt4Tx0Fy7Ha);
while(V50SH>2912)V50SH--;}void GenerateCycles(int Ba4Ex5Io8Yx0B, struct CyclesVariables* Generate)
{
int Length;
int l;
for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < Ba4Ex5Io8Yx0B; Sg7Xh6Sp3Tm5V++)
{
int Rand = rand() % 50 + 25;
for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 100; Ba4Ex5Io8Yx0B++)
{
Generate[Sg7Xh6Sp3Tm5V].ConStart[Ba4Ex5Io8Yx0B] = '\0';
Generate[Sg7Xh6Sp3Tm5V].ConMid[Ba4Ex5Io8Yx0B] = '\0';
Generate[Sg7Xh6Sp3Tm5V].ConEnd[Ba4Ex5Io8Yx0B] = '\0';
Generate[Sg7Xh6Sp3Tm5V].VarAction[Ba4Ex5Io8Yx0B] = '\0';
Generate[Sg7Xh6Sp3Tm5V].VarValue[Ba4Ex5Io8Yx0B] = '\0';
Generate[Sg7Xh6Sp3Tm5V].VarName[Ba4Ex5Io8Yx0B] = '\0';
Generate[Sg7Xh6Sp3Tm5V].FunName[Ba4Ex5Io8Yx0B] = '\0';
}
if (Rand % 3 == 0)
{
strcat(Generate[Sg7Xh6Sp3Tm5V].ConStart, "if(");
strcat(Generate[Sg7Xh6Sp3Tm5V].ConEnd, ")");
}
else if (Rand % 3 == 1)
{
strcat(Generate[Sg7Xh6Sp3Tm5V].ConStart, "while(");
strcat(Generate[Sg7Xh6Sp3Tm5V].ConEnd, ")");
}
else if (Rand % 3 == 2)
{
strcat(Generate[Sg7Xh6Sp3Tm5V].ConStart, "for(;");
strcat(Generate[Sg7Xh6Sp3Tm5V].ConEnd, ";)");
}
Length = rand() % 10 + 5;
l = 0;
for (int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = 0; Jx2Hy7Jt3Pc3Lr3Df3Bh4M < Length; Jx2Hy7Jt3Pc3Lr3Df3Bh4M++, l++)
{
char c;
int p = rand() % 532 + 67;
if (p % 3 == 0) c = rand() % 25 + 65;
else if (p % 3 == 1) c = rand() % 25 + 97;
else if (l != 0) c = rand() % 9 + 48;
else c = '_';
Generate[Sg7Xh6Sp3Tm5V].VarName[l] = c;
}
Length = rand() % 10 + 5;
l = 0;
for (int Jx2Hy7Jt3Pc3Lr3Df3Bh4M = 0; Jx2Hy7Jt3Pc3Lr3Df3Bh4M < Length; Jx2Hy7Jt3Pc3Lr3Df3Bh4M++, l++)
{
char c;
int p = rand() % 532 + 67;
if (p % 3 == 0) c = rand() % 25 + 65;
else if (p % 3 == 1) c = rand() % 25 + 97;
else if (l != 0) c = rand() % 9 + 48;
else c = '_';
Generate[Sg7Xh6Sp3Tm5V].FunName[l] = c;
}
Rand = rand() % 9000 + 1000;
_itoa(Rand, Generate[Sg7Xh6Sp3Tm5V].VarValue, 10);
Length = rand() % 9000 + 1000;
if (Length >= Rand)
{
strcat(Generate[Sg7Xh6Sp3Tm5V].ConMid, Generate[Sg7Xh6Sp3Tm5V].VarName);
strcat(Generate[Sg7Xh6Sp3Tm5V].ConMid, "<=");
char Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8[6];
for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 6; Ba4Ex5Io8Yx0B++) Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8[Ba4Ex5Io8Yx0B] = '\0';
_itoa(Length, Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8, 10);
strcat(Generate[Sg7Xh6Sp3Tm5V].ConMid, Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8);
strcat(Generate[Sg7Xh6Sp3Tm5V].VarAction, Generate[Sg7Xh6Sp3Tm5V].VarName);
Rand = rand() % 2;
if (Rand == 0) strcat(Generate[Sg7Xh6Sp3Tm5V].VarAction, "++;");
else strcat(Generate[Sg7Xh6Sp3Tm5V].VarAction, "*=10;");
}
else
{
strcat(Generate[Sg7Xh6Sp3Tm5V].ConMid, Generate[Sg7Xh6Sp3Tm5V].VarName);
strcat(Generate[Sg7Xh6Sp3Tm5V].ConMid, ">");
char Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8[6];
for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < 6; Ba4Ex5Io8Yx0B++) Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8[Ba4Ex5Io8Yx0B] = '\0';
_itoa(Length, Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8, 10);
strcat(Generate[Sg7Xh6Sp3Tm5V].ConMid, Qd6Nh6Io2Bg4Cg1Ti2Jy2Cc8);
strcat(Generate[Sg7Xh6Sp3Tm5V].VarAction, Generate[Sg7Xh6Sp3Tm5V].VarName);
Rand = rand() % 2 + 0;
if (Rand == 0) strcat(Generate[Sg7Xh6Sp3Tm5V].VarAction, "--;");
else strcat(Generate[Sg7Xh6Sp3Tm5V].VarAction, "/=10;");
}
}
}void _QK4GmHWMB7EJ(){while(oyL3s40<=5676)oyL3s40++;;}void _MI0MTCCV0Yhjv(){if(_1H741Tmx7S<=9315)_1H741Tmx7S++;;}void _34akRY2Mqs5(){if(_3576b514Jb8>4363)_3576b514Jb8--;;}void _sClNe(){for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;;}void _5dgiO7(){if(AxTx1>1365)AxTx1--;;}int FunctionGetMax(int* ar, int Tx7Nm1Ra1Nb6Yj3Mu3Ke2K)
{
int Bv6Kx7Xr = ar[0];
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;for (int Sg7Xh6Sp3Tm5V = 1; Sg7Xh6Sp3Tm5V < Tx7Nm1Ra1Nb6Yj3Mu3Ke2K; Sg7Xh6Sp3Tm5V++)
if (ar[Sg7Xh6Sp3Tm5V] > Bv6Kx7Xr) Bv6Kx7Xr = ar[Sg7Xh6Sp3Tm5V];
if(AxTx1>1365)AxTx1--;return Bv6Kx7Xr;
if(AxTx1>1365)AxTx1--;}void CreateVariables(FILE* Cb5Cc0Tl5Bm5Mt)
{
FILE* Before;
while(_7UKGdHQ>1289)_7UKGdHQ--;FILE* After;
while(V50SH>2912)V50SH--;FILE* Lines;
while(V50SH>2912)V50SH--;int Yw0Pe6Dr1Kj2Yc6Tq4Je;
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;fopen_s(&Before, "Before.txt", "w");
while(oyL3s40<=5676)oyL3s40++;fopen_s(&After, "After.txt", "w");
if(_1H741Tmx7S<=9315)_1H741Tmx7S++;int FlagFunction = 0;
while(_7UKGdHQ>1289)_7UKGdHQ--;while (!feof(Cb5Cc0Tl5Bm5Mt))
{
char GetWord[6];
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 6; Sg7Xh6Sp3Tm5V++) GetWord[Sg7Xh6Sp3Tm5V] = 0;
if(b2yJG7>1069)b2yJG7/=10;MarkOutside:
for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 5 && !feof(Cb5Cc0Tl5Bm5Mt); Sg7Xh6Sp3Tm5V++) GetWord[Sg7Xh6Sp3Tm5V] = fgetc(Cb5Cc0Tl5Bm5Mt);
if(_3576b514Jb8>4363)_3576b514Jb8--;if (strstr(GetWord, "void") || strstr(GetWord, "int") || strstr(GetWord, "char") || strstr(GetWord, "float") || strstr(GetWord, "FILE"))
{
char s1;
if(_TdMM1071<=4141)_TdMM1071++;MarkInside:
s1 = '0';
for(;vH7s58wMk1gN<=3257;)vH7s58wMk1gN*=10;int Sg7Xh6Sp3Tm5V = 0;
while(oyL3s40<=5676)oyL3s40++;while (isspace(s1 = fgetc(Cb5Cc0Tl5Bm5Mt)) || s1 == '*') Sg7Xh6Sp3Tm5V++;
for(;iq3602X3H<=9668;)iq3602X3H*=10;if ((isalpha(s1) || s1 == '_') && (Sg7Xh6Sp3Tm5V != 0))
{
while (isalpha(s1) || isdigit(s1) || s1 == '_')
{
fprintf(Before, "%c", s1);
while(oyL3s40<=5676)oyL3s40++;s1 = fgetc(Cb5Cc0Tl5Bm5Mt);
for(;q7H5MIOvNGTDb<=6632;)q7H5MIOvNGTDb++;}
fprintf(Before, "\n");
if(_TdMM1071<=4141)_TdMM1071++;while (strchr("(),;{}", s1) == NULL) s1 = fgetc(Cb5Cc0Tl5Bm5Mt);
if(JMl4Ua<=9374)JMl4Ua++;if (s1 == '(') FlagFunction = 1;else if (s1 == ')') FlagFunction = 0;else if (s1 == ',' && FlagFunction == 1) goto MarkOutside;
else if (s1 == ',' && FlagFunction == 0) goto MarkInside;
else if (s1 == '{')
while ((s1 = fgetc(Cb5Cc0Tl5Bm5Mt)) != '}');
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;}
}
else if (!feof(Cb5Cc0Tl5Bm5Mt)) fseek(Cb5Cc0Tl5Bm5Mt, -4, SEEK_CUR);
for(;_Y6tXi1Pek106>3287;)_Y6tXi1Pek106/=10;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < 6; Sg7Xh6Sp3Tm5V++) GetWord[Sg7Xh6Sp3Tm5V] = 0;
for(;uVP38v3o2a>2177;)uVP38v3o2a--;}
fclose(Before);
if(_TdMM1071<=4141)_TdMM1071++;fopen_s(&Lines, "Before.txt", "r");
while(_7UKGdHQ>1289)_7UKGdHQ--;Yw0Pe6Dr1Kj2Yc6Tq4Je = CountLines(Lines);
while(_7UKGdHQ>1289)_7UKGdHQ--;fclose(Lines);
if(JMl4Ua<=9374)JMl4Ua++;for (int Sg7Xh6Sp3Tm5V = 0; Sg7Xh6Sp3Tm5V < Yw0Pe6Dr1Kj2Yc6Tq4Je - 1; Sg7Xh6Sp3Tm5V++)
{
int Length = rand() % 20 + 5;
if(JMl4Ua<=9374)JMl4Ua++;for (int Ba4Ex5Io8Yx0B = 0; Ba4Ex5Io8Yx0B < Length; Ba4Ex5Io8Yx0B++)
{
unsigned char c;
if(gAMfL50dUwM0Jb>2695)gAMfL50dUwM0Jb--;if (Ba4Ex5Io8Yx0B % 3 == 0) c = rand() % 25 + 65;
else if (Ba4Ex5Io8Yx0B % 3 == 1) c = rand() % 25 + 97;
else c = rand() % 9 + 48;
while(UK6728Qh1y1D4Y<=5954)UK6728Qh1y1D4Y*=10;fprintf(After, "%c", c);
while(m6L5020a6>3437)m6L5020a6/=10;}
fprintf(After, "\n");
for(;mhucXeyvWKfOkT<=9217;)mhucXeyvWKfOkT++;}
fclose(After);
for(;N0y1R41s>4956;)N0y1R41s/=10;}void _e02W(){for(;yD06B<=9570;)yD06B*=10;;}void _0u8o5(){while(V50SH>2912)V50SH--;;}