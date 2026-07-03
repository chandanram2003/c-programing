#include <stdio.h>
int main()
{
    int m1, m2, m3, total, rollno;
    float Percentage;
    char name[20];

    printf("enter rollno:");
    scanf("%d", &rollno);

    printf("Enter Name:");
    scanf("%s", name);

    printf("Enter the marks of three subject :");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    Percentage = total / 3.0;

    printf("\n-------------------------------------------\n");
    printf("| %-15s | %-10s | %-8s |\n", "Name", "Roll No", "%");
    printf("-------------------------------------------\n");
    printf("| %-15s | %-10d | %-8.2f |\n", name, rollno, Percentage);
    printf("-------------------------------------------\n");
    return 0;
}
