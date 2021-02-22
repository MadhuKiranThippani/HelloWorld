#include<stdio.h>
#include<string.h>

void main()
{
int i,count=0,len;
char a[100];
printf("enter the string");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
if(a[i]==a[i+1])
{
 count++;
}
printf("number of letters to be deleted is %d",count);
getch();
}
