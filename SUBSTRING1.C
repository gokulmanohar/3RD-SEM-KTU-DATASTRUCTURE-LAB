#include<stdio.h>
#include<string.h>
#include<conio.h>
void substr(char *,char *);
void main()
{
char str[10],sub[10];
clrscr();
printf("Enter the main string\n");
    gets(str);
printf("Enter the substring\n");
    gets(sub);
substr(str,sub);
getch();
}
void substr(char * str, char * sub)
{
int i,j,m=0,n=0,flag;
/*
for(i=0;str[i]!='/0';i++)
    m++;
for(i=0;sub[i]!='/0';i++)
    n++;*/
m=strlen(str);
n=strlen(sub);

for(i=0;i<=m;i++)
{
    for(j=i;j<i+n;j++)
    {
        flag=1;
        if (str[j]!=sub[j-i])
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    break;
}
if (flag==1)
    printf("%s is present in %s",sub,str);
else
    printf("%s is NOT present in %s",sub,str);
}