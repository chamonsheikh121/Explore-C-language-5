#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {

        if (a[i] =='\0' && b[i] =='\0')
        {
            printf("same\n");
            break;
        }
        else if (a[i] =='\0')
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] =='\0')
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is greater");
            break;
        }
        else if (a[i] > b[i])
        {
            printf("B is greater");
            break;
        }
        
    }

    return 0;
}