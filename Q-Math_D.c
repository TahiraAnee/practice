#include<stdio.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        if(n%2*m)
        {
            int g=n/m;
            for (int j=1;j<=g;j++)
            {
                printf("-%d",j);
            }
        }
    }
}
