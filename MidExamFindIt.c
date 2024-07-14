#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int appeared=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]== x)
        {
            appeared++;
        }
        
    }
    printf("%d", appeared);
    return 0;
}