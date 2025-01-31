#include <stdio.h>
#include <stdlib.h>
int x[10];
static int b=1;
void printboard(int n)
{
    int i,j;
    printf("\n Solution %d\n",b++);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i]==j)
                printf("Q\t");
            else
                printf("*\t");
        }
        printf("\n");
    }
}
int place(int K,int i)
{
    int j;
    for(j=1;j<=K-1;j++)
    {
        if(x[j]==i || abs(x[j]-i)==abs(j-K))
            return 0;
    }
    return 1;
}
void NQueens(int K,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(place(K,i))
        {
            x[K]=i;
            if(K==n)
            {
                printf("\n");
                printboard(n);
            }
            else
                NQueens(K+1,n);
        }
    }
}
int main()
{
    int n;
    printf("\nRead number of Queens:");
    scanf("%d",&n);
    NQueens(1,n);
    if(b==1)
        printf("\nNo Solutions\n");
    return 0;
}
