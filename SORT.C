#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i, j, n, a[10], min, temp;
    clrscr();
    printf("ENTER THE SIZE - ");
    scanf("%d",&n);
    printf("ENTER THE ARRAY\n");
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    printf("ENTERED ARRAY\n");
    for(i=0;i<n;i++)
	printf("%d ",a[i]);
    //sorting
    for(i=0;i<n-1;i++)
    {
	min=i;
	for(j=i+1;j<n;j++)
	{
	    if(a[j]<a[min])
	    {
		min=j;
	    }
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;

	}
    }
  printf("\nNew Sorted ARRAY\n");
  for(i=0;i<n;i++)
	printf("%d ",a[i]);
    getch();
}