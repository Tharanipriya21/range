#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n,i,d;
clrscr();
printf("enter the n1,n2value");
scanf("%d%d",&n1,&n2);
while(n1<n2)
{
if(n1%2==0)
{
n1=n1;
printf("%d\n",n1);
n1++;
}
else
{
n1=n1+1;
printf("%d\n",n1);
n1++;
}
}
getch();
}
