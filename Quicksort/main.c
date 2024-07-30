#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void partition(int A[size],int l,int r)
{
    int i,j,pivot,temp;
   pivot=A[l];
   j=l+1;
   j=r;
   while(1){
   while(pivot>=A[i]&&i<=r)
   {
       count++;
       i++;
   }
  while(pivot<A[j])
   {
       count++;
       j--;
   }
   count++;
   if(i<j)
   {
       temp=A[i];
       A[i]=A[j];
       A[j]=temp;
   }
   else{
    temp=A[j];
    A[j]=A[l];
    A[l]=temp;
    return j;
   }
}
}
void quick_sort(int A[size],int l,int r)
{
    int s;
    if(l<r)
    {
        s=partition(A,l,r);
        quick_sort(A,l,s-1);
        quick_sort(A,s+1,r);
    }
}
int main()
{

   int i,A[size],n;
    printf("\nRead array size:");
    scanf("%d",&n);
    printf("\nRead elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    quick_sort(A,0,n-1);
    printf("\nSorted elements are\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nNumber of comparision is %d",count);
    return 0;
}
