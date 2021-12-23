#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
    char s1[20];
int a,i,j,n,p,b;

    char s2[20];
    printf("play this game and earn money:\n");
    printf("this is created by Akash kumar \n");

    printf("enter the name of both players \n ");
    gets(s1);
    gets(s2);
    printf("let's start the game be ready\n");
    printf("let's start the game with %s1:\n",s1);
srand(time(NULL));
a=rand()%10+1;

printf("enter your number to be guess:\n");
printf("your guess numbers should be between (0,10) \n");

for(i=1;i<10;i++)
{
    scanf("%d",&n);
    if(a==n)
        break;
}
printf("you guessed the number in %d:turn:\n",i);
printf("now ,%s chance\n",s2);
printf("enter your number to be guess:\n");
b=rand()%10+1;
for(j=1;j<10;j++)
{
    scanf("%d",&p);
    if(b==p)
        break;
}
printf("you guessed the number in %d:turns:\n",j);
if(i<j)
{
    printf("%s is won the game congratualations\n",s1);
}
else{
    printf("%s is won the game cogratulations\n",s2);
}
if(i==j)
{
    printf("the match is draw well played both players\n");
}
p=rand()%90001+1000;
printf("you win %d rupees \n",p);
printf("go and enjoy your life:\n");
return 0;
}
