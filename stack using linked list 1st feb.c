#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node*link;
};

struct node*top=0;

void push()
{
 int x;
 struct node* newnode;
 printf("\n Enter data:");
 scanf("%d",&x);
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=x;
 newnode->link=top;
 top=newnode;
}

void pop()
{
 struct node* temp;
 temp=top;
 if(top==0)
 {
  printf("\n underflow");
 }
 else
 {
  printf("\n popped item is %d",top->data);
  top=top->link;
  free(temp);
 }
}

void peek()
{
  if(top==0)
 {
  printf("\n underflow");
 }
 else
 {
  printf("\n peeked item is %d",top->data);
 }
}


void display()
{
 struct node*temp;
 temp=top;
 if(top==0)
 {
  printf("\n underflow");
 }
 else
 {
  while(temp!=0)
  {
   printf("\n the stack is:");
   printf("%d",temp->data);
   temp=temp->link;
  }
 }
}

void main()
{
 int ch;
 while(1)
 {
 printf("\n Enter choice:1.push 2.pop  3.peek  4.display 5.exit");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:push();
  break;

  case 2:pop();
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



