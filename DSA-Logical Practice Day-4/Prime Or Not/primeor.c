#include <stdio.h>
int main()
{
    int n;
    int flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1 || n <= 0)
    {
        printf("Number is not a prime number");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Number is a prime number");
    }
    else
    {
        printf("Number is not a prime number");
    }
    return 0;
}