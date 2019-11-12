#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

int stack[50];
int top=-1;

void push(int x)
{
 
  stack[++top]=x;
}
char pop()
{
    return stack[top--];
}
int main()
{
   char s[20],x,*e;
   int res,a,b,num;
   clrscr();
   printf("\nEnter the POSTFIX expression: ");
   scanf("%s",s);
   e=s;
   while(*e!='\0')
   {
      if(isdigit(*e))
	  {
		  num=*e-48;
		  push(num);
	  }
	  else
	  {
		  a=pop();
		  b=pop();
	  
		  switch(*e)
		  {
			case '+':
			//+
			res=b+a;
			break;
			case '-':
			//-
			res=b-a;
			break;
			case '*':
			//*
			res=b*a;
			break;
			case '/':
			///
			res=b/a;
			break;
		 }
		push(res);
     }
	e++;
    }
    printf("\nThe result is: %d",pop());
    getch();
    return 0;
}