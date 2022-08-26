#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[10];
gets(str);
int i,count=0;
for(i=0;str[i]!='\0';i++)
{
if(isupper(str[i]))
{
count=count+1;
}
}
printf("%d",count);
}
