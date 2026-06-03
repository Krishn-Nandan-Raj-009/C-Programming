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
  /*            ARRAYS  problems   */

1) Second Largest Element
#include<stdio.h>
int main(){
    int a[100],n,i,largest,second;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    largest=second=a[0];

    for(i=1;i<n;i++){
        if(a[i]>largest){
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest){
            second=a[i];
        }
    }

    printf("Second largest = %d",second);
}
2) Frequency of Given Element
#include<stdio.h>
int main(){
    int a[100],n,i,key,count=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element: ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(a[i]==key)
            count++;
    }

    printf("Frequency = %d",count);
}
3) Print Duplicate Elements
#include<stdio.h>
int main(){
    int a[100],n,i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Duplicates: ");

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d ",a[i]);
                break;
            }
        }
    }
}
4) Merge Two Arrays
#include<stdio.h>
int main(){
    int a[50],b[50],c[100];
    int n1,n2,i;

    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        c[i]=a[i];

    for(i=0;i<n2;i++)
        c[n1+i]=b[i];

    for(i=0;i<n1+n2;i++)
        printf("%d ",c[i]);
}
5) Sum of Even Index Elements
#include<stdio.h>
int main(){
    int a[100],n,i,sum=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i+=2)
        sum+=a[i];

    printf("Sum = %d",sum);
}



//   important  algorithms  in arrays  1d and 2d  


6) Insert at Specific Position
#include<stdio.h>
int main(){
    int a[100],n,i,pos,val;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d%d",&pos,&val);

    for(i=n;i>=pos;i--)
        a[i]=a[i-1];

    a[pos-1]=val;
    n++;

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
7) Delete from Specific Position
#include<stdio.h>
int main(){
    int a[100],n,i,pos;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];

    n--;

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
8) Linear Search
#include<stdio.h>
int main(){
    int a[100],n,i,key,found=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("Found at %d",i);
            found=1;
            break;
        }
    }

    if(!found)
        printf("Not found");
}
9) Binary Search
#include<stdio.h>
int main(){
    int a[100],n,key,low=0,high,mid,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&key);

    high=n-1;

    while(low<=high){
        mid=(low+high)/2;

        if(a[mid]==key){
            printf("Found");
            return 0;
        }
        else if(key>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Not Found");
}
10) Bubble Sort Ascending
#include<stdio.h>
int main(){
    int a[100],n,i,j,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
11) Matrix Addition
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,r,c1;

    scanf("%d%d",&r,&c1);

    for(i=0;i<r;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r;i++){
        for(j=0;j<c1;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}



12) Transpose Matrix
#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,r,c;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
13) Array Palindrome
#include<stdio.h>
int main(){
    int a[100],n,i,flag=1;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
14) Separate Even and Odd
#include<stdio.h>
int main(){
    int a[100],n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Even: ");
    for(i=0;i<n;i++)
        if(a[i]%2==0)
            printf("%d ",a[i]);

    printf("\nOdd: ");
    for(i=0;i<n;i++)
        if(a[i]%2!=0)
            printf("%d ",a[i]);
}
15) Remove Duplicates
#include<stdio.h>
int main(){
    int a[100],n,i,j,k;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++)
                    a[k]=a[k+1];
                n--;
                j--;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}






