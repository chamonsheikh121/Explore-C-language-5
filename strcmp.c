#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int value = strcmp(a, b);
    // printf("%d\n", value);
    if (value < 0)
    {
        printf("A is smaller");
    }
    else if (value > 0)
    {
        printf("B is smaller");
    }
    else
    {
        printf("Same");
    }
    return 0;
}