#include <stdio.h>
void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int l = 0; l < (2 * n) - 2*i - 1; l++)
        {
            printf("*");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
    printf("\n");
}
}

int main()
{
    int nums[] = {10, 5, 4};
    // printf("enter n: ");
    // scanf("%d", &n);
    for (int q = 0; q < 3; q++)
    {
        printPattern(nums[q]);
    }
    return 0;
}