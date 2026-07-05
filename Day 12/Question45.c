#include <stdio.h>

int isPalindrome(int n)
{
    int original = n;
    int reverse = 0;
    int digit;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}