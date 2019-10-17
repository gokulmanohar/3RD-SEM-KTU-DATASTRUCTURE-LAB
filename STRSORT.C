#include <stdio.h>
#include <string.h>
#include<conio.h>
void main()
{
   char string[50];
   char temp;
   int i, j, n;
   clrscr();
    printf("Enter the string\n");
    scanf("%s",string);
    n=strlen(string);
    
   printf("String before sorting - %s \n", string);

   for (i = 0; i < n-1; i++)
   
      for (j = i+1; j < n; j++)
      
         if (string[i] > string[j])
         {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      
   
   
   printf("String after sorting  - %s \n", string);
   getch();
}
