#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,temp;
 printf("\n Enter the size of array:");
 scanf("%d",&n);
 int a[n];
 printf("\n Enter the elements in the array:");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("\n The array before sorting is:");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }

 for(i=0;i<n-1;i++)
 {
  int min=i;
  for(int j=i+1;j<n;j++)
  {
    if(a[j]<a[min])
        min=j;
  }
  if(min!=i)
  {
   temp=a[i];
   a[i]=a[min];
   a[min]=temp;
  }
 }

  printf("\n The array after sorting is:");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
}
