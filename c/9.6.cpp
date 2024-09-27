#include<stdio.h>
int main()
{
int n=5, i,j;

for(i = 1; i <= n; i++)
{
for(j = 1; j <= i; j++)
{
printf("%c",'A' + j-1);
}
printf("\n");
}
return 0;
}
