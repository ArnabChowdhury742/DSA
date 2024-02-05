#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,g,l,r,mid;
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

 l=0;
 r=n-1;
 while(l<=r)
 {
  mid=(l+r)/2;
  if(g==a[mid])
  {
    printf("\n data is found at index %d",mid);
    break;
  }
  else if(g<a[mid])
  {
   r=mid-1;
  }
  else
  {
    l=mid+1;
  }
  if(l>r)
    printf("\n element not found");
 }
}
