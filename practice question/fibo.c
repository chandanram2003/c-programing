// #include <stdio.h>
// int fibo(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     return fibo(n - 1) + fibo(n - 2);
// }
// int main()
// {

//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);

//     printf("The fibonacci series is:%d", fibo(n));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 3;

//     int c = a++ +b*--a;

//     printf("%d", c);
// }

// #include <stdio.h>

// int main()
// {
//     int age, bp;

//     printf("Enter patient's age: ");
//     scanf("%d", &age);

//     printf("Enter patient's blood pressure (BP): ");
//     scanf("%d", &bp);

//     if (age >= 60 && bp > 140)
//     {
//         printf("Patient's risk category: High\n");
//     }
//     else if (age >= 40 && age <= 60)
//     {
//         if (bp >= 120 && bp <= 140)
//         {
//             printf("Patient's risk category: Medium\n");
//         }
//         else
//         {
//             printf("Patient's risk category: Low\n");
//         }
//     }
//     else
//     {
//         printf("Patient's risk category: Low\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 10, c = 3;
//     // printf("%d", a + b * c);
//     // printf("%d", (b > a) && (c < a));

//     // printf("%d", b | c);
//     // printf("%d", b & ~c);
//     printf("%d", a++ + --b);
// }

#include <stdio.h>

int main()
{
    int marks, attendance;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter attendance: ");
    scanf("%d", &attendance);

    if (marks >= 90)
    {
        if (attendance >= 75)
        {
            printf("Full Scholarship");
        }
        else
        {
            printf("No Scholarship");
        }
    }
    else if (marks >= 80)
    {
        if (attendance >= 70)
        {
            printf("Half Scholarship");
        }
        else
        {
            printf("No Scholarship");
        }
    }
    else if (marks >= 60)
    {
        if (attendance >= 60)
        {
            printf("Quarter Scholarship");
        }
        else
        {
            printf("No Scholarship");
        }
    }
    else
    {
        printf("No Scholarship");
    }

    return 0;
}
