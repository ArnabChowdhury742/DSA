#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create();
void display();
void insertion();
void deletion();
void reverse();


struct node
{
 int data;
 struct node* next;
};

struct node*head,*newnode,*temp,*prev;
int count=0;

void main()
{
  head=0;
  int c;
  while(1)
  {
  printf("\n Enter choice: 1.CREATE  2.DISPLAY  3.INSERTION  4.DELETION  5.REVERSE  6.EXIT");
  scanf("%d",&c);
  switch(c)
  {
   case 1:
       {
        create();
        break;
       }
   case 2:
       {
        display();
        break;
       }
   case 3:
       {
        insertion();
        break;
       }
   case 4:
       {
        deletion();
        break;
       }
   case 5:
       {
        reverse();
        break;
       }
   case 6:
       {
        printf("\n Program Exited");
        exit(1);
        break;
       }
   default:
    {
     printf("\n Invalid choice");
     break;
    }
  }
 }
}



void create()
{
 int choice=1;
 while(choice==1)
 {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter Data:");
  scanf("%d",&newnode->data);
  newnode->next=0;
  if(head==0)
  {
    head=newnode;
    temp=newnode;
  }
  else
  {
    temp->next=newnode;
    temp=newnode;
  }

  printf("\n Do you want to continue if yes press 1");
  scanf("%d",&choice);

 }
}



void display()
{
 temp=head;
 //int count=0;
 count=0;
 printf("\n The Linked List is:");
 while(temp!=0)
 {
   printf("%d",temp->data);
   temp=temp->next;
   count++;
 }
 printf("\n Length of LL is %d",count);
}


void insertion()
{
 int d;
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("\n Enter 1.To insert at beginning 2.To insert at end  3.To insert at middle");
 scanf("%d",&d);
 switch(d)
 {
   case 1:
       {
        printf("\n Enter Data:");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
        break;
       }
   case 2:
       {
        struct node*temp;
        printf("\n Enter Data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp=head;
        while(temp->next!=0)
        {
         temp=temp->next;
        }
         temp->next=newnode;
         break;
       }
   case 3:
        {
         int pos,i=1;
         //struct node*head,*newnode,*temp;
         printf("\n enter the position after which you want to insert:");
         scanf("%d",&pos);
         if(pos>count)
         {
          printf("\n Invalid Position");

         }
         else
         {
           temp=head;
          while(i<pos)
          {
           temp=temp->next;
           i++;
          }
            printf("\n Enter data:");
            scanf("%d",&newnode->data);
            newnode->next=temp->next;
            temp->next=newnode;
         }
         break;
        }
   default:
        {
        printf("\n Invalid choice");
        break;
        }
 }
}



void deletion()
{
 int e;
 printf("\n Enter 1.To delete at beginning 2.To delete at end  3.To delete at middle");
 scanf("%d",&e);
 switch(e)
 {
  case 1:
      {
        struct node*temp,*prev;
        temp=head;
        head=temp->next;
        free(temp);
        break;
      }
  case 2:
    {
     struct node*temp;
     temp=head;
     while(temp->next!=0)
     {
        prev=temp;
       temp=temp->next;
     }
     prev->next=0;
     free(temp);
     break;
    }
  case 3:
    {
     struct node*nextnode;
     int pos,i=1;
     printf("\n enter position:");
     scanf("%d",&pos);
    if(pos>count)
         {
          printf("\n Invalid Position");

         }
         else
         {
           temp=head;
          while(i<pos-1)
          {
           temp=temp->next;
           i++;
          }
          nextnode=temp->next;
          temp->next=nextnode->next;
          free(nextnode);
         }
       break;
     }
      default:
        {
        printf("\n Invalid choice");
        break;
        }
  }
}



void reverse()
{
 struct node*prevnode,*currentnode,*nextnode;
 prevnode=0;
 nextnode=currentnode=head;
 while(nextnode!=0)
 {
   nextnode=nextnode->next;
   currentnode->next=prevnode;
   prevnode=currentnode;
   currentnode=nextnode;
 }
 head=prevnode;
}
