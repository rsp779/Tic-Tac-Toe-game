#include<stdio.h>
#include<stdlib.h>
char King [9]={'1','2','3','4','5','6','7','8','9'};
char a;int ch;int m=0;
int change (int ch)
{
switch (ch)
{
case 1: King[0]=a;
break;
case 2: King[1]=a;
break;
case 3: King[2]=a;
break;
case 4: King[3]=a;
break;
case 5: King[4]=a;
break;
case 6: King[5]=a;
break;
case 7: King[6]=a;
break;
case 8: King[7]=a;
break;
case 9: King[8]=a;
break;
default : {
printf("Wrong Choice");
return 0;
}
}
return 1;
}
void print(int z)
{
printf("PLAYER 1(X) vs PLAYER 2(*)\n");
int v=0;
for(int i=1;i<10;i++)
{
for(int j=1;j<10;j++)
{
if(i%3==0&&j%3!=0&&i!=9)
{
if (j%2==0)
printf("__");
else
printf("_");
}
else if (i%3!=0&&j%3==0&&j!=9)
printf(" |");
else if(i%3==0&&j%3==0&&j!=9)
{
printf("|");
}
else if(i%9==0)
{if(j%2==0)
printf(" ");
else
printf(" ");
}
else if((i==2||i==5||i==8)&&(j==2||j==5||j==8))
{
printf("%c",King[v++]);
}
else
printf(" ");
}
printf("\n");
}
}
int check(int y)
{
if(King[0]==King[4]&&King[8]==King[4]&&King[0]==King[8]||King[0]==King[3]&&King[3]==King[6]
&&King[6]==King[3]||King[0]==King[1]&&King[1]==King[2]&&King[2]==King[0]||King[6]==King[4]
&&King[2]==King[4]&&King[6]==King[2]||King[6]==King[7]&&King[8]==King[6]&&King[6]==King[8
]||King[8]==King[5]&&King[5]==King[2]&&King[8]==King[2]||King[3]==King[4]&&King[3]==King[5]
&&King[4]==King[5]||King[1]==King[4]&&King[1]==King[7]&&King[4]==King[7])
m=1;
return m;
}
int main()
{ int p=0,u=0;
print(p);
printf("\n");
for (int i=1;i<10;i++)
{
if(i%2!=0)
{
printf("Player 1 enter your choice");
run:
scanf("%d",&ch);
a='X';
int h=change(ch);
if (h==0)
{
system("CLS");
printf("Player 1 RE-ENTER your choice");
goto run;
}
system("CLS");
print(p);
int d= check(u);
if(d==1)
{
printf("Player 1: WINNER WINNER CHICKEN DINNER");
goto end1;
}
printf("\n");
}
else
{
printf("Player 2 enter your choice");
runu:
scanf("%d",&ch);
a='*';
int h=change(ch);
if (h==0)
{
system("CLS");
printf("Player 2 RE-ENTER your choice");
goto runu;
}
system("CLS");
print(p);
int d= check(u);
if(d==1)
{
printf("Player2 : WINNERWINNERCHICKENDINNER"); goto end2; }printf("\n"); }
}
end1: 
end2:
return0; 
}
