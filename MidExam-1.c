#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    gets(s);
    int vowel =0;
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i];
        if (value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u')
        {
            vowel++;
        }
    }
    printf("%d", vowel);
    return 0;
}