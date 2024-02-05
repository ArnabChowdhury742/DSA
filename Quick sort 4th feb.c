#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

int partition(int a[],int lb,int ub)
{
  int pivot,start,end;
  pivot=a[lb];
  start=lb;
  end=ub;
 while(start<end)
 {
  while(a[start]<=pivot)
  {
   start++;
  }
  while(a[end]>pivot)
  {
   end--;
  }
  if(start<end)
  {
    swap(&a[start],&a[end]);
  }
 }
 swap(&a[lb],&a[end]);
 return end;
}

int quicksort(int a[],int lb,int ub)
{
 if(lb<ub)
 {
  int loc=partition(a,lb,ub);
  quicksort(a,lb,loc-1);
  quicksort(a,loc+1,ub);
 }
}


void main()
{
 int n,i;
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
 int lb=0;
 int ub=n-1;
 quicksort(a,lb,ub);

  printf("\n The array after sorting is:");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
}


