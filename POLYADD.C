#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node{
       int coeff;
       int pow;
       struct node *next;
       };
struct node *poly1=NULL,*poly2=NULL,*poly=NULL;
void create(struct node *ptr)
{
 char ch;
 do
 {
  printf("\n Enter coefficent:");
  scanf("%d",&ptr->coeff);
  printf("\n Enter power:");
  scanf("%d",&ptr->pow);
  ptr->next=(struct node*)malloc(sizeof(struct node));
  ptr=ptr->next;
  ptr->next=NULL;
  printf("\n Continue(y/n)?");
  ch=getch();
 }
 while(ch=='y' || ch=='Y');
}
void show(struct node *ptr)
{
 while(ptr->next!=NULL)
 {
  printf("%dX^%d",ptr->coeff,ptr->pow);
  ptr=ptr->next;
  if(ptr->next!=NULL)
   printf("+");
 }
}
void polyadd(struct node *poly1,struct node *poly2,struct node *poly)
{
     while(poly1->next &&  poly2->next)
     {
      if(poly1->pow>poly2->pow)
      {
       poly->pow=poly1->pow;
       poly->coeff=poly1->coeff;
       poly1=poly1->next;
       }
      else if(poly1->pow<poly2->pow)
      {
       poly->pow=poly2->pow;
       poly->coeff=poly2->coeff;
       poly2=poly2->next;
       }
      else
      {
       poly->pow=poly1->pow;
       poly->coeff=poly1->coeff+poly2->coeff;
       poly1=poly1->next;
       poly2=poly2->next;
       }
      poly->next=(struct node *)malloc(sizeof(struct node));
      poly=poly->next;
      poly->next=NULL;
     }
     while(poly1->next || poly2->next)
     {
      if(poly1->next)
      {
       poly->pow=poly1->pow;
       poly->coeff=poly1->coeff;
       poly1=poly1->next;
       }
      if(poly2->next)
      {
       poly->pow=poly2->pow;
       poly->coeff=poly2->coeff;
       poly2=poly2->next;
       }
       poly->next=(struct node *)malloc(sizeof(struct node));
       poly=poly->next;
       poly->next=NULL;
       }
}
void main()
{
      char ch;
      clrscr();
      do{
      poly1=(struct node *)malloc(sizeof(struct node));
      poly2=(struct node *)malloc(sizeof(struct node));
      poly=(struct node *)malloc(sizeof(struct node));
      printf("First polymonial:");
      create(poly1);
      printf("\nSecond polymonial:");
      create(poly2);
      printf("\nFirst polymonial:");
      show(poly1);
      printf("\nSecond polymonial:");
      show(poly2);
      polyadd(poly1,poly2,poly);
      printf("\nAdded polynomial:");
      show(poly);
      printf("\nDo you want to exit the program?");
      ch=getch();
      }
      while(ch=='n' || ch=='N');
}