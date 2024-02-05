#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,flag,temp;
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
  flag=0;
  for(int j=0;j<n-1-i;j++)
  {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
     flag=1;
    }
  }
  if(flag==0)
        break;
 }

  printf("\n The array after sorting is:");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }

}
