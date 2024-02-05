#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
 int x;
 printf("\n Enter data:");
 scanf("%d",&x);
 if((rear+1)%N==front)
 {
  printf("\n Overflow");
 }
 else if(front==-1 && rear==-1)
 {
   front=rear=0;
   queue[rear]=x;
 }
 else
 {
  rear=(rear+1)%N;
  queue[rear]=x;
 }
}


void dequeue()
{
 if(front==-1 && rear==-1)
 {
     printf("\n underflow");
 }
 else if(front==rear)
 {
  printf("\n Dequeued:%d",queue[front]);
  front=rear=-1;
 }
 else
 {
     printf("\n Dequeued:%d",queue[front]);
     front=(front+1)%N;
 }
}

void peek()
{
 if(front==-1 && rear==-1)
 {
     printf("\n underflow");
 }
 else
    printf("\n front element is:%d",queue[front]);
}


void display()
{
 int i=front;
 if(front==-1 && rear==-1)
 {
     printf("\n underflow");
 }
 else
 {
 printf("\n the queue is:");
 while(i!=rear)
  {
   printf("%d ",queue[i]);
   i=(i+1)%N;
  }
 printf("%d",queue[rear]);
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

