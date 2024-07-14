#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    scanf("%s", name);
    // printf("%s", name);
    int count[26] = {0};
    for (int i = 0; i < strlen(name); i++)
    {
        int value = name[i];
        if (value > 95)
        {
            value = name[i] - 'a';
        }
        else
        {
            value = name[i] - 'A';
        }
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}