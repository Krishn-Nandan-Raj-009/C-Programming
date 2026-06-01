#include <stdio.h>

int main() {
    int base, exp, i;
    long long result = 1;

    printf("Enter base and exponent: ");     /*          Power of a Number (without pow)       */
    scanf("%d %d", &base, &exp);

    for(i = 1; i <= exp; i++) {
        result *= base;
    }

    printf("Result = %lld", result);

    return 0;
}


Fibonacci Series up to N Terms
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
🔹 . Power of a Number (without pow)
#include <stdio.h>

int main() {
    int base, exp, i;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for(i = 1; i <= exp; i++) {
        result *= base;
    }

    printf("Result = %lld", result);

    return 0;
}


