#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "hello world";

    char str2[20];

    strcpy(str2, str);

    int len = strlen(str);

    for(int i = 0, j = len -1; i <= j; i++, j--){
        char temp = str[i];

        str[i] = str[j];

        str[j] = temp;
    }

    printf("%s %s", str2, str);
}