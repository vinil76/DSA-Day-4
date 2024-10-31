#include <stdio.h>
int main()
{
    int num;
    int n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    printf("Final num value %d ", n);
    return 0;
}

// output
// num =5
// n =1

// 1  2  3  4 5
// 6  7  8  9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25