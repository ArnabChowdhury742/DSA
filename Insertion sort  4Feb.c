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

 for(i=1;i<n;i++)
 {
  temp=a[i];
  int j=i-1;
  while(j>=0 && a[j]>temp)
  {
    a[j+1]=a[j];
    j--;
  }
  a[j+1]=temp;
 }

  printf("\n The array after sorting is:");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }

}
