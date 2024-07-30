#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int count;
int bfsm(char T[20],char P[10])
{
    int n,m,i,j;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m&&P[j]==T[i+j])
        {
            j=j+1;
            count++;
        }
        count++;
        if(j==m)
            return (i+1);
    }
    return -1;
}
int main()
{
   char T[20],P[10];
   int flag;
   printf("\nRead Text\n");
   scanf("%s",T);
    printf("\nRead Pattern\n");
   scanf("%s",P);
   flag=bfsm(T,P);
   if(flag==-1){
       printf("Pattern not found\n");
         printf("comparision=%d",(count));
   }
   else
   {
      printf("Pattern found at %d location\n",flag);
      printf("comparision=%d",(count-1));}
    return 0;
}
