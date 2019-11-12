#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],j,i,temp,n;
clrscr();
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Given array is: [ ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("]");
printf("\n");
//INSERTIONSORTING
for(i=1;i<n;i++)
	{
	temp = a[i];
	for(j=i;j>0 && a[j-1]>temp;j--)
	{
		a[j]=a[j-1];
	}
	a[j]=temp;
	}
printf("After insertion sort:  [ ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("]");
getch();
}