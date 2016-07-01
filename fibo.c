#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0,i;
clrscr();
printf("Enter the number");
scanf("%d %d",&a,&b);
printf("enter the limit");
scanf("%d",&c);
printf("\n%d\n%d",a,b);
for(i=2;i<=c-1;i++)
{
d=a+b;
a=b;
b=d;
printf("\n%d",d);
}
getch();
}


