#include <stdio.h>
#include <string.h> 

int main()
{   
    char a[100], b[100];
    scanf("%s", a);
    for(int i=0; i<=strlen(a);i++)
    {
        b[i]= a[i];
    }
    printf("%s", b);
    return 0;
}