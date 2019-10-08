#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i=0;
    double b;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(a[0]<=a[n-1])
    {
        if(n%2==1)
        printf("%d %d %d",a[n-1],a[(n-1)/2],a[0]);
        else
        {
            b=a[(n-1)/2]+a[(n+1)/2];
            if((int)b%2==0)
                printf("%d %d %d",a[n-1],(int)b/2,a[0]);
            else
                printf("%d %.1f %d",a[n-1],b/2,a[0]);
        }
    }
    else
    {
        if(n%2==1)
        printf("%d %d %d",a[0],a[(n-1)/2],a[n-1]);
        else
        {
            b=a[(n-1)/2]+a[(n+1)/2];
            if((int)b%2==0)
                printf("%d %d %d",a[0],(int)b/2,a[n-1]);
            else
                printf("%d %.1f %d",a[0],b/2,a[n-1]);
        }
    }

    return 0;
}
