#include <stdio.h>

int vowel(char str[]);

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Number of vowels: %d", vowel(str));
    return 0;
}

int vowel(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    return count;
}
