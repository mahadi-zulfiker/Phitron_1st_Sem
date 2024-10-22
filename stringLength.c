#include <stdio.h>
#include <string.h>

int main(){
    char str[10] = "abcd";

    // int length = 0;

    // for(int i = 0; str[i] != '\0'; i++){
    //     length++;
    // }

    int length = strlen(str);

    printf("%d", length);
}