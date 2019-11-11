#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

char stack[50];
int top=-1;

void push(char x)
{
  stack[++top]=x;
}
char pop()
{
   if (top==-1)
       return -1;
    else
       return stack[top--];
}
int prior(char x)
{
  if(x=='(')
    return 0;
  if(x=='+'||x=='-')
    return 1;
  if(x=='*'|| x=='/')
    return 2;
  return -1;
}
int main()
{
   char s[20],x,*e;
   clrscr();
   e=s;
   printf("\nEnter the infix expression: ");
   scanf("%s",s);
   //printf("\nEntered String is: %s",*e);
   printf("\nPostfix expression is\n");
   while(*e!='\0')
   {
      if(isalnum(*e))
          printf("%c ",*e);
      else if(*e=='(')
        push(*e);
      else if(*e==')')
      {
        while((x=pop())!='(')
        printf("%c",x);
      }
      else
      {
        while(prior(stack[top])>=prior(*e))
          printf("%c",pop());
          push(*e);
      }
      e++;
    }
    while(top!=-1)
    {
      printf("%c",pop());
    }
    getch();
    return 0;
}

