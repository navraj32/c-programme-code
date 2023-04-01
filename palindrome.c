#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,j=0,l;
printf("Enter the string:");
scanf("%s",a);
l=strlen(a)-1;
for(i=l;i>=0;i--)
{
b[j]=a[i];
j=j+1;
}
if (strcmp(a,b)==0)
{
    printf("%s is palindrome",a);
    }
    else {
        printf("%s is not  palindrome",a);
    }

getch();
return 0;
}