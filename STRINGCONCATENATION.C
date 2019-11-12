#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[10], b[10];
int j=0,i=0;
clrscr();
printf("\nEnter the first string::  ");
gets(a);
printf("\nEnter the second string::  ");
gets(b);
for(i=0;b[i]!='\0';i++)
	j++;
for(i=0;b[i]!='\0';i++)
	{
	a[j]=b[i];
	j++;
	}
a[j]='\0';
puts(a);
getch();
}