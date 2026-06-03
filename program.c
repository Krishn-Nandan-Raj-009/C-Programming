#include<stdio.h>
int main(){

int x,y;
int z;
printf("Enter the value of x and y:");
scanf("%d%d",&x,&y);
z=x;
x=y;
y=z;
printf("After swapping the value of x and y is %d and %d",x,y);     /*swap two numbers with third variable*/


int x,y;
printf("Enter the value of x and y:");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("After swapping the value of x and y is %d and %d",x,y);     /*swap two numbers without third variable*/

x=x*y;
x=x/y;
y=x/y;
printf("\nAfter swapping the value of x and y is %d and %d",x,y);     /*swap two numbers without third variable using multiplication and division*/


a number is divisible by both 3 and 5.
int x;
printf("Enter the number:");
scanf("%d",&x);
if (x%3==0 && x%5==0){
    printf("The number is divisible by both 3 and 5");}
else{
    printf("The number is not divisible by both 3 and 5");
}

int x;
 printf("Enter the number:");
 scanf("%d",&x);
 if(x%4==0 || x%400==0 || x%100!=0){
     printf("The year is a leap year");
    }   
    else{
        printf("The year is not a leap year");      
    }


char x;
  printf("Enter the alphabet:");
  scanf("%s",&x);
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
        printf("The alphabet is a vowel");
         }   
         else{
             printf("The alphabet is a consonant");      
         }

char x;
int z,y;
printf("Enter the two numbers:");
scanf("%d%d",&z,&y);

printf("Enter the alphabet:");
scanf(" %c",&x);
switch (x)
{
case 'd':
    /* code */ printf("division of two numbers is %d",z/y);
    break;
case 's':
    /* code */ printf("subtraction of two numbers is %d",z-y);
    break;
case 'm':       
    /* code */ printf("multiplication of two numbers is %d",z*y);
    break;
case 'a':
case 'A':
    /* code */ printf("Addition of two numbers is %d",z+y);     

default:
    break;
}



int n;
printf("Enter the number till which you want to print odd numbers: ");       
scanf("%d", &n);
for (int i = 0; i <= n; i++) {
    if (i % 2 != 0) {
        printf("%d ", i);
    }
}   
    return 0;
}


int n,s;
s=0;
printf("Enter the number till which you want to print: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
       s=s+i;
}   
printf("The sum of the first %d natural numbers is %d",n,s);




int n,f=1;
printf("Enter the number: ");
scanf("%d", &n);
for(int i=1;i<=n;i++){
    f=f*i;
}
printf("The factorial of %d is %d",n,f);
 



int n,o;
printf("Enter the number you want to reverse");
scanf("%d", &n);
o=n;
int rev=0;
while (n>0){
    rev=rev*10+n%10;
    n=n/10; 
}
// printf("The reverse of the number is %d",rev);
if(rev==o){
    printf("The number is a palindrome\n");
    printf("The reverse of the number is %d",rev);
}
else{       
    printf("The number is not a palindrome");
}


int n;
printf("Enter the number: ");
scanf("%d", &n);
int x=0;
while ( n>0)
{
    n=n/10;
    x++;
    /* code */
}
printf("The number of digits in the number is %d",x);


int n;
printf("Enter the number: ");
scanf("%d", &n);
int s=0;
while ( n>0)
{
    s=s+n%10;
    n/=10;
    /* code */
}
printf("The sum of digits in the number is %d",s);





int n;
printf("Enter the number: ");
scanf("%d", &n);                                        /*  printing of table */
int i;
for(i=10;i>=1;i--){
    printf("%d*%d = %d\n",n,i,i*n);
}




#include <stdlib.h>
#include <math.h>

// Function to calculate and print absolute deviations using pointers

void calculateAbsoluteDeviation(int *arr, int n, double mean) {
        for (int i = 0; i < n; i++) {
                    // Accessing element using pointer arithmetic: *(arr + i)
           double deviation = fabs(*(arr + i) - mean);
            printf("%.2lf ", deviation);   }
          
}
                       int main() {
                            int N;

                                // Read the number of months
                                    if (scanf("%d", &N) != 1) return 0;

                                        // Dynamically allocate memory for N returns
                                            int *returns = (int *)malloc(N * sizeof(int));          
                                                if (returns == NULL) return 1; // Check if memory allocation failed

                                                    double sum = 0;
                                                        for (int i = 0; i < N; i++) {
                                                                    // Read input directly into memory location using pointer arithmetic
                                                                            scanf("%d", (returns + i));
                                                                                    sum += *(returns + i);
                                                        }
                   double mean = sum / N;
                                                        calculateAbsoluteDeviation(returns, N, mean);   
                                                        free(returns); // Free allocated memory
                                                        return 0;   

                                                            // Calculate the mean (cast sum to double for precision)
                                                                
                                                        }
    
            program to calculate the absolute deviation of returns from the mean return using pointers in C.
             The program reads N returns, calculates the mean, and then computes and prints the absolute deviation for each return.



                  find the number is prime or not                 find the number is prime or not
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n==1){
        printf("not prime");
    }
 
    
    else{
        int i;
        for(i=2;i<=n;i++){

               if (i==n){
            printf("%d is prime",i);
        }
             else if (n%i==0){
                printf("not prime");
                break;}
            }   
    } 
    return 0;
   }

int main(){
    int num,result=0,original,remainder;
    printf("Enter the number : ");
    scanf("%d", &num);
original=num;
while (num!=0)
{
     remainder=num%10;
     result+=remainder*remainder*remainder;
     num/=10;
}

if (original==result)
{
    printf("%d is an armstrong number",original);
}
else
{
    printf("%d is not an armstrong number",original);
}


  
return 0;
    }

  

               fibonacci series   fibonacci series  fibonacci series   fibonacci series

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a=0,b=1,c,i;                  
    for(i=1;i<=n;i++){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;


int main () {
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}


int fun();

int main () {
    int n,r;
int k[5]={1,2,3,4,5};
int *g=&n;
int *h=&r;
int s=5;

    printf("Enter the numbers:");
    scanf("%d %d",&n,&r);
return fun(k,5,&n,&r);
}

int fun(int k[],int s,int *n,int *r){
int av;
av=(k[2]+*n+*r)/3;
printf("AVG: %d",av);
return 0;
    }



