#include <stdio.h>
#include <ctype.h> // for isupper, islower, isalpha

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf(" %c", &ch);

    if (isupper(ch))
    {
        printf("'%c' is an uppercase letter.\n", ch);
    }
    else if (islower(ch))
    {
        printf("'%c' is a lowercase letter.\n", ch);
    }
    else if (ch == '@' || ch == '#' || ch == '$' || ch == '*' || ch == '%')
    {
        printf("'%c' is a special type of charecter.\n", ch);
    }
    else
    {
        printf("'%c' is not an alphabetic letter.\n", ch);
    }

    return 0;
}
