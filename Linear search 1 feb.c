#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,g;
 printf("\nEnter the size of array:");
 scanf("%d",&n);
 int a[n];
 printf("\n Enter the data into the array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n enter the element you want to search:");
 scanf("%d",&g);
 for(i=0;i<n;i++)
 {
   if(a[i]==g)
   {
     printf("\n element found at index: %d",i);
     break;
   }
 }

 if(i==n)
 {
  printf("\n element not found");
 }
}
