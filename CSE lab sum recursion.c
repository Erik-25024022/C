#include <stdio.h>
int add(int n);

int main()
{
    int n;
    printf("Enter the number n: ");
    scanf("%d", &n);

    printf("The sum up to %d is %d", n, add(n));
    return 0;
}

int add(int n)
{
    if (n != 0)
    {
        return n + add(n - 1);
    }
    else
    {
        return n;
    }
}
