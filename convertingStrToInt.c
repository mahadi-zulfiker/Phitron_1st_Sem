#include <stdio.h>

int main(){
    char str[20];

    int n;
    scanf("%d", &n);

    scanf("%s", str);

    int num = 0;
    for(int i = 0; i < n; i++){
        int digit = str[i] - '0';

        num = num * 10 + digit;
    }

    printf("%d\n", num);

    // ASCII Value
    // 0 is 48 then it gradually increases 1 by 1.
}