#include <stdio.h>

int main(){
    char str[20];

    // scanf("%[^\n]s", str);

    fgets(str, sizeof(str), stdin);

    fputs(str, stdout);

    // gets(str);

    // puts(str);

    // printf("%s", str);

    return 0;
}