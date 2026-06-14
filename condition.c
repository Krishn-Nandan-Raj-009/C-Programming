#include<stdio.h>
int main(){

     bonus question
    
    int a;
    scanf("%d",&a);
    if (a>=5){
        printf("Eligible for bonus");
    }
    else{
        printf("Not eligible for bonus");
    }


     nested if statement


     int a,b;
     printf("Enter the salary and years of service\n");
    scanf("%d %d",&a,&b);
    if (b>=20){
        printf("%f",0.2*a);

    }
    else if (b>=10 && b<20){
        printf("%f",0.1*a);
    }
    else if(b>=5&&b<10){
        printf("%f",0.05*a);
    }
    else{
        printf("%f",0.02*a);
    }
    printf("%f",10000*0.2);
  

     //       light system 

char light;
printf("Enter the traffic light color (R/G/Y):\n");
scanf(" %c",&light);

if(light=='R' || light=='r') printf("Stop");
else if(light=='G' || light=='g') printf("Go");
else if(light=='Y' || light=='y') printf("Slow down");
else printf("Invalid input");


int x=0;
if(x==0){
printf("x is zero\n");
printf("%d",x);}
else{
printf("x is not zero\n");
}





    return 0;
}

     if statement
    
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("allowed to vote");
    }

    if else statement
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("allowed to vote");
    }
    else{
        printf("not allowed to vote");
    }

    nested if else statement
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("allowed to vote");
    }
    else if(age>=16){
        printf("allowed to drive");
    }
    else{
        printf("not allowed to vote or drive");
    }



Check Leap Year
Input: 2024
Output: Leap Year
Code
#include<stdio.h>

int main()
{
    int year;

    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}


1. Even or Odd
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n%2==0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
2. Positive, Negative or Zero
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n>0)
        printf("Positive");
    else if(n<0)
        printf("Negative");
    else
        printf("Zero");
}
3. Largest of Two Numbers
#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    if(a>b)
        printf("%d",a);
    else
        printf("%d",b);
}
4. Largest of Three Numbers
#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("%d",a);
    else if(b>c)
        printf("%d",b);
    else
        printf("%d",c);
}
5. Check Leap Year
#include<stdio.h>

int main()
{
    int year;

    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}
6. Divisible by 5 and 11
#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    if(n%5==0 && n%11==0)
        printf("Divisible");
    else
        printf("Not Divisible");
}
7. Vowel or Consonant
#include<stdio.h>

int main()
{
    char ch;

    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}
8. Alphabet, Digit or Special Character
#include<stdio.h>

int main()
{
    char ch;

    scanf("%c",&ch);

    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        printf("Alphabet");
    else if(ch>='0'&&ch<='9')
        printf("Digit");
    else
        printf("Special Character");
}
9. Check Eligibility for Voting
#include<stdio.h>

int main()
{
    int age;

    scanf("%d",&age);

    if(age>=18)
        printf("Eligible");
    else
        printf("Not Eligible");
}
