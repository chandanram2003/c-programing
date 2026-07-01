

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Changed string is: %s", str);
    return 0;
}
