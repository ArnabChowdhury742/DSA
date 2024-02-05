#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,min;
 printf("\n Enter the size of array:");
 scanf("%d",&n);
 int a[n];
 printf("\n Enter the elements in the array:");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 i=0;
 min=a[i];
 for(i=0;i<n;i++)
 {
  if(a[i]<min)
        min=a[i];
 }
 printf("\n The min no is: %d",min);
}
