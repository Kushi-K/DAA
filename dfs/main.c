#include <stdio.h>
#include <stdlib.h>

void dfs(int a[10][10],int n,int v[10],int source)
{
    int i;
    v[source]=1;
    for(i=1;i<=n;i++)
    {
        if(a[source][i]==1 && v[i]==0)
            dfs(a,n,v,i);
    }

}
int main()
{
    int n ,i ,j ,a[10][10],v[10],count=0;
    printf("Enter number of nodes\n");
    scanf("%d",&n);
    printf("read adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
        v[i]=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            dfs(a,n,v,i);
            count++;
        }

    }

    if(count==1)
        printf("\n graph is connected,1 component\n");
    else
        printf("\n graph is not connected ,%d component\n",count);
    return 0;
}
