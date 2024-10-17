#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = ((n + 1) * n) / 2;

    
    printf("%lld\n", sum);
    return 0;
}