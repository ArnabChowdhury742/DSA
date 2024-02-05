#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node*next,*prev;
};

struct node*head,*temp,*newnode;

void create()
{
 head=0;
 int x;
 int choice=1;
 while(choice==1)
 {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter data:");
  scanf("%d",&x);
  if(head==0)
  {
   newnode->prev=0;
   newnode->data=x;
   newnode->next=0;
   head=newnode;
   temp=head;
  }
  else
  {
   temp->next=newnode;
   newnode->prev=temp;
   newnode->data=x;
   newnode->next=0;
   temp=temp->next;
  }
  printf("\n Press 1 to continue.");
  scanf("%d",&choice);
 }
}


void display()
{
 temp=head;
 printf("\n Linked list is: ");
 while(temp!=0)
 {
  printf("%d ",temp->data);
  temp=temp->next;
 }
}

void main()
{
 int ch;
 while(1)
 {
  printf("\n Choose Operation: 1.Create 2.Display 3.Exit");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: create();
   break;

   case 2: display();
   break;

   case 3:exit(1);
   break;

   default:printf("\n Invalid choice");
   break;
  }
 }
}
