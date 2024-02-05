#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;

void push()
{
 int x;
 printf("\n enter data:");
 scanf("%d",&x);
 if(top==N-1)
 {
  printf("\nOverflow");
 }
 else
 {
  top++;
  stack[top]=x;
 }
}

void pop()
{
 if(top==-1)
 {
  printf("\n underflow");
 }
 else
 {
   printf("\n popped item is %d",stack[top]);
   top--;
 }
}


void peek()
{
 if(top==-1)
 {
  printf("\n underflow");
 }
 else
 {
   printf("\n peek item is %d",stack[top]);
 }
}


void display()
{
 int i;
 if(top==-1)
 {
  printf("\n underflow");
 }
 else
 {
  for(i=top;i>=0;i--)
  {
   printf("%d",stack[i]);
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

