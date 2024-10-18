#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int min = a[0];

    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    // printf("%d\n", min);

    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == min){
            cnt++;
        }
    }

    // printf("%d\n", cnt);

    if(cnt % 2 == 0){
        printf("Unlucky\n");
    }
    else{
        printf("Lucky\n");
    } 
}