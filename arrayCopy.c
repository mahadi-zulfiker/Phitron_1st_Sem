#include <stdio.h>

int a[100000], b[100000];

int main()
{
    int length1 = 0, length2 = 0;

    scanf("%d", &length1);
    printf("Before Copy");

    for (int i = 0; i < length1; i++)
    {
        scanf("%d ", &a[i]);
    }

    printf("\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }

    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }

    length2 = length1;

    printf("After Copy");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < length2; i++)
    {
        printf("%d ", b[i]);
    }
}