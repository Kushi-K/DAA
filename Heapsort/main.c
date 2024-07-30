#include<stdio.h>
#include<stdlib.h>
#define size 100
void Heapify(int H[size],int n)
{
    int i,k,j,v;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=H[k];
       int Heap=0;
        while((!Heap)&&((2*k)<=n))
        {
            j=2*k;
            if(j<n){
                if(H[j]<H[j+1])
                    j=j+1;
            }
            if(v>=H[j])
                    Heap=1;
            else{
                    H[k]=H[j];
                    k=j;
                }
            }
        H[k]=v;
    }
}
void heap(int H[size],int n)
{
    int i,temp;
    for(i=n;i>1;i--)
    {
        temp=H[1];
        H[1]=H[i];
        H[i]=temp;
        Heapify(H,i-1);
    }
}
int main()
{
    int i,H[size],n;
    printf("\nRead size:");
    scanf("%d",&n);
    printf("\nRead elements\n");
    for(i=1;i<=n;i++)
        scanf("%d",&H[i]);
    Heapify(H,n);
    heap(H,n);
    printf("\nSorted elements are\n");
    for(i=1;i<=n;i++)
        printf("%d\t",H[i]);
    return 0;
}
