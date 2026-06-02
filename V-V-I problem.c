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



5. Menu-Driven Program (Loop + Switch)
#include <stdio.h>

int main() {
    int choice, num, i, fact;
    
    while(1) {
        printf("\nMenu:\n");
        printf("1. Even/Odd\n");
        printf("2. Prime Check\n");
        printf("3. Factorial\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter number: ");
            scanf("%d", &num);
            if(num % 2 == 0)
                printf("Even\n");
            else
                printf("Odd\n");
            break;

        case 2:
            printf("Enter number: ");
            scanf("%d", &num);

            int isPrime = 1;
            for(i = 2; i <= num/2; i++) {
                if(num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if(num <= 1)
                isPrime = 0;

            if(isPrime)
                printf("Prime\n");
            else
                printf("Not Prime\n");
            break;

        case 3:
            printf("Enter number: ");
            scanf("%d", &num);

            fact = 1;
            for(i = 1; i <= num; i++) {
                fact *= i;
            }

            printf("Factorial = %d\n", fact);
            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}  




