#include <stdio.h>
#include<conio.h>
 
void main()
{
  int array[50], search, c, n;
 clrscr();
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
 
  printf("Enter %d integer(s)\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  printf("Enter a number to search\n");
  scanf("%d", &search);
 
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)
    {
      printf("%d is found at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);
 
  getch();
}