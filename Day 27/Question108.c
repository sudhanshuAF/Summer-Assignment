#include <stdio.h>

int main()
{
    int m1, m2, m3, total;
    float percentage;

    printf("Enter marks of 3 subjects:\n");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\nTotal = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 90)
        printf("Grade : A");
    else if(percentage >= 75)
        printf("Grade : B");
    else if(percentage >= 60)
        printf("Grade : C");
    else if(percentage >= 40)
        printf("Grade : D");
    else
        printf("Grade : F");

    return 0;
}