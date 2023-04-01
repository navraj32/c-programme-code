#include<stdio.h>
#include<conio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,s=0,k,x,y,m,n,abc;
abc:
printf("Enter row and column of first matrix");
scanf("%d%d",&x,&y);
printf("Enter row and column od second matirx");
scanf("%d%d",&m,&n);
if(y==m)
{
printf("Enter first matrix");
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter second matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<x;i++)
{
for(j=0;j<n;j++)
{
s=0;
for(k=0;k<m;k++)
{
s=s+a[i][k]*b[k][j];
}
c[i][j]=s;
}
}
printf("Multiplied matrix is\n");
for(i=0;i<x;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",c[i][j]);
}
printf("\n");
}
}
else
{
printf("Matrix multiplication is not possible\n");
goto abc;
}
getch();
return 0;
}