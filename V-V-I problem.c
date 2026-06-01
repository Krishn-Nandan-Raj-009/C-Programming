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

🔹 1. Print all Prime Numbers from 1 to N
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = 1;

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
🔹 2. Check Armstrong Number
#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    if(result == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
🔹 3. Fibonacci Series up to N Terms
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


