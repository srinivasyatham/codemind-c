#include<stdio.h>
int main()
{
    
    int n,k,x,y,tc;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(x<=y)
    {
         tc=n*x;
        
    }
    else{
         tc=(k*x)+(n-k)*y;
         
    }
    printf("%d",tc);
    
}