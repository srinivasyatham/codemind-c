#include<stdio.h>
int main()
{
    int i,j,k,n,min=9999,c;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<min) 
        min=x[i];
    }
    for(j=min;j>=1;j--)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(x[i]%j==0) c++;
        }
        if(c==n)
        {
            printf("%d",j);
            break;
        }
    }
}