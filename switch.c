#include<stdio.h>
int main (){


    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Monday");
    case 2:
       printf("Tuesday");
    case 3:
        printf("wednesday");
    case 4:
        printf("Thrusday");
    case 5:
        printf("Friday");
    case 6:
         printf("Saturday");
    default:
         printf("satutday");
    }                           printing dat by it's serial no .....


int a,b,c;
printf("Enter two number\n");
scanf("%d%d",&b,&c);
printf("Enter 1 for addition\n");
printf("Enter 2 for subtraction\n");
printf("Enter 3 for multiplication\n");
 scanf("%d",&a);
 switch (a){
    case 1:
    printf("%d",b+c);
    break;
    case 2:
    printf("%d",b-c);
    break;
    case 3:
    printf("%d",b*c);
    break;
    default:
    printf("Invalid input");
 }                                  


 int b,c;
 char a;
printf("Enter two number\n");
scanf("%d%d",&b,&c);
 scanf(" %c",&a);
printf("Enter +  for addition\n");
printf("Enter - fo subtraction\n");
printf("Enter * for multiplication");   


 switch (a){
    case '+':
    printf("%d",b+c);
    break;
    case '-':
    printf("%d",b-c);
    break;
    case '*':
    printf("%d",b*c);
    break;
    default:
    printf("Invalid input");
    break;
  }                /*  sdd sub multiply by entert it's symbol  */




int i;
for(i=10;i>=1;i--){        
    printf("%d\t",i);
}


for(i=10;i>=1;i--){
    printf("%d\n",i);
}




for ( i = 0; i <=100; i+=2)
{
    /* code */printf("%d\n",i);
}



int a, sum=0;
int i;
scanf("%d",&a);
for ( i=1; i<=a; i++)
{
    sum=sum+i;  
}
printf("%d\n",sum);        /*print  sum of first n no..*/ 



int i,j;
for(i=1,j=1;j<=5;j++){

}
printf("%d\t%d",i,j);



 WHILE  WHILE   WHILE  WHILE  WHILE  WHILE  WHILE  WHILE  WHILE  WHILE  LLLooooooooooo[[ppppppppppppppppppppppppppppppppppppp]]]]]]]]



int i=1,n;
scanf("%d",&n);
while(i<=n){ 
    printf("%d\n",i);
    i++;
}


int n, i = 1, sum = 0;
scanf("%d", &n);
while(i <= n) {
    sum = sum + i;
    i++;
}
printf("Sum = %d", sum);
    
print sum of first n natural number using while loop


int num;
while(1) {
    printf("Enter number (0 to stop): ");
    scanf("%d", &num);
    if(num == 0)
        break;

    printf("You entered: %d\n", num);
}


    print  number till  0000 input using while loop and break statement ;;;;;;


 
  do000000 while looooooooooppppppppp




int i=5;
long fact=1;
do
{
    fact=fact*i;
    i--;
    printf("%d",fact);
} while (i> =1);



int total,n,i,sum=0;
printf("Enter the total number:\n",&total);
scanf("%d",&total);
do{
    printf("enter the %d number",i );
    scanf("%d",&n);
    sum+=n;
    printf(" The sum is %d",sum);
    i++;
}while (i<=total);


int i,n;
printf("Enter the number");
scanf("%d",&n);
for ( i = 1; i <=10; i++)
{
    /* code */printf("%d * %d =%d\n",n,i,n*i);
}


int n,a=0,b=1,c;
printf("enter a number: ");
scanf("%d",&n);
printf("fibonacci series up to &d\n",n);
while(a<=n){
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
}

int i,n;
scanf("%d",&n);
for(i=0;i<=100;i++)
{
    if (i%2!=0){
        continue;
    }  
    printf("%d\n",i);
}

float  cgpa=100  ;  
                          // global variable
 return 0;
}
