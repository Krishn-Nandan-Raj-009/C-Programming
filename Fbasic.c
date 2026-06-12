#include<stdio.h>
#include<math.h>


void sum();              // declare the function    or prototype   or signature       
int main (){
    sum();               // calling the function 
    return 0;
    
}
void sum (){             // defining  the function 
    int a,b;
    scanf("%d%d",&a,&b);
    printf("the summ is %d",a+b);
}

int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("The sum is %d",sum(a,b));
return 0;


}
int sum (int x,int y)

{
    // printf("%d",a+b);
    return a+b;
}

int sum(int,int);
int min(int,int);
int mul(int,int);
int div(int,int);

int main () {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",sum(a,b));
    printf("%d\n",min(a,b));
    printf("%d\n",mul(a,b));
    printf("%d\n",div(a,b));
     return 0;
}

int sum(int x,int y) {
    return x+y;
}
int mul(int x,int y) {
    return x*y;
}
int min(int x,int y) {
    return x-y;
}
int div(int x,int y) {
    return x/y;
}

void swap(int *,int*);
int main() {
int a,b;
printf(" Enter two number\n");
scanf("%d%d",&a,&b);
printf("Values before calling: %d %d\n",a,b);
swap(&a,&b);
printf("values after calling: %d %d\n",a,b);

}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("values inside function : %d %d\n",*x,*y);
}


              RECURSION    

long long int factorial(int);
int main(){
    int n;
    printf("Enter a positive number");
    scanf("%d",&n);
    printf("Factorial of %d =%lld",n,factorial(n));
    return 0;
}
long long int factorial(int n){
    if (n==0 ||n==1)
    return 1;
    else {
        return (n* factorial(n-1));
    }
}


long long int natural(int);
int main(){
    int x;
      printf("Enter a number");
    scanf("%d",&x);
  
    printf("sum of natural number of %d is %lld",x,natural(x));
    return 0;
}
long long int natural(int n) {
    if(n==0)
        return 0;

  
    else
       return n+natural(n-1);
    
}


long long int fibbonacci(int);
int main(){
    int x;
    printf("Enter a positive number");
    scanf("%d",&x);
    printf("The fibonnacci of %d is %lld\n and all indivisual is ",x,fibbonacci(x));
    for (int i = 0; i<= x; i++)
    {
        /* code */printf("%lld\t",fibbonacci(i));
    }
    
    return 0;
}

long long int fibbonacci(int n){
    if (n==0 ||n==1) return n;
    else return fibbonacci(n-1)+fibbonacci(n-2);

    
}

int main(){
    double x=9.0, y=8.0,z=7.0;
    printf("\nLog value is :%lf",log(x));
     printf("\nLog value with base 10 is :%lf",log10(x));
      printf("\n exponential value is :%lf",exp(x));
      printf("\n ceil value is :%lf",ceil(8.94));
       printf("\n floor value is :%lf",floor(2.34));
        printf("\nPower value is :%lf",pow(3.0,2.0));
         printf("\n square root value is :%lf",sqrt(16.0));
          printf("\n absolute value is :%lf",fabs(-5.0));
           printf("\n remainder value is :%lf",fmod(10.0,3.0));
            printf("\n sine value is :%lf",sin(90));
             printf("\n cosine value is :%lf",cos(90));
              printf("\n tangent value is :%lf",tan(90));
               printf("\n arc tangent value is :%lf",atan2(y,z));
        return 0;
}

int main() {

int a=5; {

     a=50;{
         int a=500;
            printf("%d\n",a);
        }
        printf("%d\n",a);
    }
    printf("%d\n",a);





void fun1() {
    static int x;
    x=10;
    x++;
    printf("%d\t",x);
}

int main ()  {
    fun1();
    fun1();
    fun1();
return 0;
}

float cgpa=100  ;   // global variable
# include"switch.c"
int main() {
    
    extern float cgpa;
    // cgpa=6;
    printf("%f",cgpa);

   

int balance = 1000;  // global variable


void checkbalance() {
    printf("Your balance is %d\n", balance);
}

void deposit() {
    int amount;
    printf("Enter amount to deposit");
    scanf("%d",&amount);
    balance += amount;
    printf("Deposited %d New balance is %d\n", amount, balance);
}



int main() {
int choice;
char again;
do{
    printf("\n --- Banking Menu----\n");
    printf("1. Checking\n");
     printf("2. Deposit money\n");
      printf("Enter your choice\n");
      scanf("%d",&choice);


      switch (choice)
      {
      case 1:
        /* code */ checkbalance();
        break;
      
        case 2:
        /* code */ deposit();
        break;
      default:
      printf("Invalid choice")
      ;
      }
      printf("\n do you want to perform another operation ?(y/n)" );
      scanf(" %c",&again);
}
while (again== 'y' || again== 'Y');
{
    /* code */  printf("Thank you for using our banking system. Goodbye!\n");
}


return 0;

}




int c(int x,int y) {
  int t=y;
  x=y;
  y=t;
  printf("Inside function: a=%d, b=%d\n",x,y);
}

int main() {
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("Before swapping, the numbers are a=%d, b=%d\n",a,b);
    c(a,b);
    printf("After swapping, the numbers are a=%d, b=%d",a,b);
   
}




.

🟢 1. Sum of Two Numbers Using Function
#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int x,y;

    scanf("%d%d",&x,&y);

    printf("Sum = %d",sum(x,y));

    return 0;
}
🟢 2. Check Even/Odd Using Function
#include<stdio.h>

void evenOdd(int n)
{
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    int n;
    scanf("%d",&n);

    evenOdd(n);
}
🟢 3. Find Maximum of Two Numbers
#include<stdio.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    printf("%d",max(a,b));
}
🟢 4. Find Maximum of Three Numbers
#include<stdio.h>

int max3(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}

int main()
{
    printf("%d",max3(10,25,15));
}
🟡 5. Factorial Using Function
#include<stdio.h>

int fact(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
        f*=i;

    return f;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",fact(n));
}
🟡 6. Prime Number Using Function
#include<stdio.h>

int prime(int n)
{
    int i;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    scanf("%d",&n);

    if(prime(n))
        printf("Prime");
    else
        printf("Not Prime");
}
🟡 7. Fibonacci Series Using Function
#include<stdio.h>

void fibonacci(int n)
{
    int a=0,b=1,c,i;

    for(i=1;i<=n;i++)
    {
        printf("%d ",a);

        c=a+b;
        a=b;
        b=c;
    }
}

int main()
{
    fibonacci(10);
}
🟡 8. Power Function
#include<stdio.h>

int power(int base,int exp)
{
    int i,result=1;

    for(i=1;i<=exp;i++)
        result*=base;

    return result;
}

int main()
{
    printf("%d",power(2,5));
}
🟡 9. Sum of Digits
#include<stdio.h>

int sumDigits(int n)
{
    int sum=0;

    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }

    return sum;
}

int main()
{
    printf("%d",sumDigits(1234));
}




}
🟠 10. Reverse Number Using Function
#include<stdio.h>

int reverse(int n)
{
    int rev=0;

    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }

    return rev;
}

int main()
{
    printf("%d",reverse(1234));
}
🟠 11. Palindrome Number Using Function
#include<stdio.h>

int reverse(int n)
{
    int rev=0;

    while(n)
    {
        rev=rev*10+n%10;
        n/=10;
    }

    return rev;
}

int main()
{
    int n=121;

    if(n==reverse(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
🟠 12. Armstrong Number Using Function
#include<stdio.h>

int armstrong(int n)
{
    int sum=0,temp=n,r;

    while(temp)
    {
        r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }

    return sum==n;
}

int main()
{
    int n=153;

    if(armstrong(n))
        printf("Armstrong");
}
🔵 13. Swap Using Call By Value
#include<stdio.h>

void swap(int a,int b)
{
    int temp;

    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=10,y=20;

    swap(x,y);

    printf("%d %d",x,y);
}

Output:

10 20
🔵 14. Swap Using Call By Reference
#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=10,y=20;

    swap(&x,&y);

    printf("%d %d",x,y);
}

Output:

20 10
🔵 15. Find GCD Using Function
#include<stdio.h>

int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }

    return a;
}

int main()
{
    printf("%d",gcd(12,18));
}
🔴 16. Recursive Factorial
#include<stdio.h>

int fact(int n)
{
    if(n==0 || n==1)
        return 1;

    return n*fact(n-1);
}

int main()
{
    printf("%d",fact(5));
}
🔴 17. Recursive Fibonacci
#include<stdio.h>

int fib(int n)
{
    if(n<=1)
        return n;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int i;

    for(i=0;i<10;i++)
        printf("%d ",fib(i));
}
🔴 18. Pass Array to Function (Very Important)
#include<stdio.h>

int sumArray(int arr[],int n)
{
    int i,sum=0;

    for(i=0;i<n;i++)
        sum+=arr[i];

    return sum;
}

int main()
{
    int arr[5]={1,2,3,4,5};

    printf("%d",sumArray(arr,5));
}



