#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[10], str[10];
int i,count=0,e;
clrscr();
printf("Enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
	count++;
printf("%d",count);
printf("\n");
e=count-1;
for(i=0;i<count;i++)
	{
	a[i]=str[e];
	e--;
	}
a[i]='\0';
puts(a);
getch();
}