#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "hello";
    char b[20] = "world";

    // int len_a = strlen(a);

    // int len_b = strlen(b);

    // int length = len_a + len_b;

    // for (int i = len_a, j = 0; i < length; i++, j++)
    // {
    //     a[i] = b[j];
    // }

    // a[length] = '\0';

    strcat(a, b);

    printf("%s", a);
}