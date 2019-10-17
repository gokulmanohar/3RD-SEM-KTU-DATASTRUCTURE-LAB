#include<stdio.h>
#include<string.h>
#include<conio.h>
void substr(char *,char *);
void main()
{
char mainstr[10],sub[10];
clrscr();
printf("Enter the main string\n");
    gets(mainstr);
printf("Enter the subsring\n");
    gets(sub);
substr(mainstr,sub);
getch();
}
void substr(char * str, char * sub)
{
int i,j,m=0,n=0,flag;
m=strlen(str);
n=strlen(sub);

while (str[m]!='\0')
    m++;

while (sub[n]!='\0')
    n++;

for(i=0;i<=m-n;i++)
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
puts("Substring is present");
else
puts("Substring is not present");
}