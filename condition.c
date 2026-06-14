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




10. Profit or Loss
#include<stdio.h>

int main()
{
    int cp,sp;

    scanf("%d%d",&cp,&sp);

    if(sp>cp)
        printf("Profit = %d",sp-cp);
    else if(cp>sp)
        printf("Loss = %d",cp-sp);
    else
        printf("No Profit No Loss");
}
11. Grade Calculation
#include<stdio.h>

int main()
{
    int marks;

    scanf("%d",&marks);

    if(marks>=90)
        printf("A");
    else if(marks>=80)
        printf("B");
    else if(marks>=70)
        printf("C");
    else if(marks>=60)
        printf("D");
    else
        printf("F");
}
12. Check Triangle Validity
#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
}
13. Type of Triangle
#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
        printf("Equilateral");
    else if(a==b || b==c || a==c)
        printf("Isosceles");
    else
        printf("Scalene");
}
14. Electricity Bill
#include<stdio.h>

int main()
{
    int units,bill;

    scanf("%d",&units);

    if(units<=100)
        bill=units*5;
    else if(units<=200)
        bill=100*5+(units-100)*7;
    else
        bill=100*5+100*7+(units-200)*10;

    printf("%d",bill);
}
15. Simple Calculator Using Switch
#include<stdio.h>

int main()
{
    int a,b;
    char op;

    scanf("%d %c %d",&a,&op,&b);

    switch(op)
    {
        case '+': printf("%d",a+b); break;
        case '-': printf("%d",a-b); break;
        case '*': printf("%d",a*b); break;
        case '/': printf("%d",a/b); break;
        default: printf("Invalid");
    }
}
16. Day of Week Using Switch
#include<stdio.h>

int main()
{
    int day;

    scanf("%d",&day);

    switch(day)
    {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;
        default: printf("Invalid");
    }
}
17. Month Name Using Switch
#include<stdio.h>

int main()
{
    int month;

    scanf("%d",&month);

    switch(month)
    {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid");
    }
}
18. Menu Driven Program Using Switch
#include<stdio.h>

int main()
{
    int choice,n;

    printf("1.Even/Odd\n2.Positive/Negative\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            scanf("%d",&n);
            if(n%2==0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            scanf("%d",&n);
            if(n>=0)
                printf("Positive");
            else
                printf("Negative");
            break;

        default:
            printf("Invalid Choice");
    }
}
