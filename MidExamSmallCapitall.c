#include <stdio.h>

int main()
{
    char s[10001];
    gets(s);
    int capital = 0, small = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
    }
    printf("%d %d", capital, small);
    return 0;
}