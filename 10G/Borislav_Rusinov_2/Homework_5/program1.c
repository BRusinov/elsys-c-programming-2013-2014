#include <stdio.h>

int main()
{
    const int length = 13;

    char string[length];
    scanf("%s", &string);

    int change;
    int i, j;

    char exam[13] = "23456789TJQKA";

    for ( i = 0; i < length; i++ )
    {
        for ( j = i; j < length; j++ )
        {
            if (string[j] == exam[i])
            {
                change = string[j];
                string[j] = string[i];
                string[i] = change;
                break;
            }
        }
    }

    printf("%s\n", string);

    return 0;
}
