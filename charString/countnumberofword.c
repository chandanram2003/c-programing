#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, count = 0;

    while (str[i] != '\0')
    {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (str[i] != ' ' && str[i] != '\n' && str[i - 1] == ' '))
        {
            count++;
        }
        i++;
    }

    printf("Number of words = %d\n", count);

    return 0;
}