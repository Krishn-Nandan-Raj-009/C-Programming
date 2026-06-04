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
