#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node*next;
};

struct node* front=0;
struct node* rear=0;

void enqueue()
{
 struct node* newnode;
 int x;
 printf("\n enter data:");
 scanf("%d",&x);
 newnode=(struct node*)malloc(sizeof(struct node));
 if(front==0 && rear==0)
 {
   front=rear=newnode;
   newnode->data=x;
   newnode->next=0;
 }
 else
 {
     rear->next=newnode;
     newnode->data=x;
     newnode->next=0;
     rear=newnode;
 }
}


void dequeue()
{
    struct node* temp;
  if(front==0 && rear==0)
  {
      printf("\n Underflow");
  }
  else
  {
    temp=front;
    printf("Dequeued: %d",temp->data);
    front=temp->next;
    free(temp);
  }
}


void peek()
{
  if(front==0 && rear==0)
  {
      printf("\n Underflow");
  }
  else
  {
      printf("Peeked: %d",front->data);
  }
}


void display()
{
 struct node*temp;
 if(front==0 && rear==0)
  {
      printf("\n Underflow");
  }
  else
  {
    temp=front;
    while(temp!=0)
    {
     printf("%d ",temp->data);
     temp=temp->next;
    }
  }
}

void main()
{
 int ch;
 while(1)
 {
 printf("\n Enter choice:1.enqueue 2.dequeue  3.peek  4.display 5.exit");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:enqueue();
  break;

  case 2:dequeue();
  break;

  case 3:peek();
  break;

  case 4:display();
  break;

  case 5:exit(1);
  break;

  default: printf("\n invalid choice");
 }
}
}
