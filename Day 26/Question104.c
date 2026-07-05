#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("===== QUIZ =====\n");

    printf("\n1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");

    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    printf("\n2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n4. 20\n");

    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    printf("\n3. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. James Gosling\n");
    printf("3. Guido van Rossum\n");
    printf("4. Bjarne Stroustrup\n");

    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\nYour Score = %d/3", score);

    return 0;
}