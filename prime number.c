#include<stdio.h>
#include<conio.h>
int main()
{
int i,num;
printf("Enter a number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
printf("\nNot prime");
break;
}
}
if(i==num)
{
printf("\nPrime number");
}
getch();
return 0;
}


