
#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%s", str);

    int ctr = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            ctr++;
        }
    }

    printf("The number of vowels is %d", ctr);
    return 0;
}
