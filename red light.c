#include <stdio.h>
int main() 
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,k,i;
        scanf("%d %d",&n,&k);
        int a[n],c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>k)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
}


