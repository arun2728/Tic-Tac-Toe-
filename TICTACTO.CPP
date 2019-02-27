#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int count=0;
char name1[100],name2[100];
char w;
void gameplay()
{
textcolor(RED);
cprintf("\n               ----------------------------------------------------------------");
printf("\n\n\n\n");
printf("\t\t\t");
textcolor(RED+BLINK);
cprintf("-_-_-WELCOME TO TIC TAC TOE GAME PLAY-_-_-");
printf("\n\n\n\n\n\t\t\t\t   Enter Your Choice\n\n\n\t\t\t's':Start\t\t\t'q': Quit \n");
textcolor(RED);
cprintf("\n               ----------------------------------------------------------------");

fflush(stdin);
scanf("%c",&w);
}
void name()
{
printf("\n Enter the player1 name:");
fflush(stdin);
scanf("%s",name1);
printf("\n Enter the player2 name:");
fflush(stdin);
scanf("%s",name2);

}
void nameofgame()
{
printf("\n\n\t\t\t\tTic Tac Toe");
}
void show()
{
printf("\n\n \t\t\t\t---|---|---");
printf("\n\t\t\t\t %c | %c | %c ",a[0],a[1],a[2]);
printf("\n \t\t\t\t---|---|---");
printf("\n\t\t\t\t %c | %c | %c ",a[3],a[4],a[5]);
printf("\n \t\t\t\t---|---|---");
printf("\n\t\t\t\t %c | %c | %c ",a[6],a[7],a[8]);
printf("\n \t\t\t\t---|---|---");
}
void select()
{
char q;
printf("\n %s: x",name1);
printf("\n %s: o",name2);
}
void run()
{
char po;
printf("\n Who will start first ? \n 1: for Player 1\n 2: For Player 2 \n");
printf(" ");
scanf("%c",&po);
}
void play()
{
int i;
char c,b;
printf("\nEnter position and symbol for player:\n");
fflush(stdin);
scanf("%c",&c);
fflush(stdin);
scanf("%c",&b);
count++;
for(i=0;i<9;i++)
{
 if(a[i]==c)
 {
  a[i]=b;
 }
}
}
int finish()
{
 if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
 {
 return(1);
 }
 else if((a[0]=='o'&&a[1]=='o'&&a[2]=='o')||(a[0]=='o'&&a[3]=='o'&&a[6]=='o')||(a[0]=='o'&&a[4]=='o'&&a[8]=='o'))
 {
 return(0);
 }
 else if((a[1]=='x'&&a[4]=='x'&&a[7]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x'))
 {
 return(1);
 }
 else if((a[1]=='o'&&a[4]=='o'&&a[7]=='o')||(a[3]=='o'&&a[4]=='o'&&a[5]=='o'))
 {
 return(0);
 }
 else if((a[2]=='x'&&a[4]=='x'&&a[6]=='x')||(a[2]=='x'&&a[5]=='x'&&a[8]=='x'))
 {
 return(1);
 }
 else if((a[2]=='o'&&a[4]=='o'&&a[6]=='o')||(a[2]=='o'&&a[5]=='o'&&a[8]=='o'))
 {
 return(0);
 }
 else if((a[8]=='x'&&a[7]=='x'&&a[6]=='x'))
 {
 return(1);
 }
 else if((a[8]=='o'&&a[7]=='o'&&a[6]=='o'))
 {
 return(0);
 }
 else
 {
 return (100);
 }
}
void main()
{
clrscr();
int r;
char d;
gameplay();
if(w == 's'||w=='S')
{
begin:
clrscr();
name();
clrscr();
nameofgame();
show();
select();
play();

start:
clrscr();
show();
play();
r=finish();
clrscr();
show();
if(count<9)
{
if(r==1)
{
printf("\n %s won the match",name1);
count=0;
}
else if(r==0)
{
printf("\n %s won the match",name2);
count=0;
}
else
{
goto start;
}
}
else
{
printf("\n Drawn match");
count=0;
}
printf("\n Do You to play the game again then press:\n 'Y' for Yes \n 'N' for No \n");
fflush(stdin);
scanf("%c",&d);
if(d=='y'||d=='Y')
{
a[0]='1';
a[1]='2';
a[2]='3';
a[3]='4';
a[4]='5';
a[5]='6';
a[6]='7';
a[7]='8';
a[8]='9';
goto begin;
}
}
getch();
}
