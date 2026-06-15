#include "stdio.h"
  int main(){
    
    char was = "w";
   printf("first c program\n");
   printf("workingtwith\tbasic\n"); 
   a=10,b=20;
   printf("%d\n %d\n  %d\n",a,b,c=a+b);
   printf("the sum is %d\n",c+10);
   printf("the sum of %d and %d is %d",a,b,c);

  printf("%c",was);
   printf("%d",ch)   

  
  use of data type   range  and bits 


char ch =123;
printf("%c\n",ch);
int a=85;
printf("%d\n",a);
long int b=34343477;
printf("%ld\n",b);
short int c=3434;
printf("%hd\n",c);
 long int v=3437986843;
printf("%ld\n",v);
long long int d=3437986843466876;
printf("%lld\n",d);
float e=3.03;
printf("%f\n",e);
double f=3.037575;
printf("%lf\n",f);
long double g=3.0387585878;
printf("%Lf\n",g);



 use of scanf and printf

int k,i;
int m;
scanf("%d%d",&k,&i);
 m=k+i;
printf("the sum of %d and %d is %d",k,i,m);

int x,z,r;
scanf("%d%d%d",&x,&z,&r);
float y=(x+z+r)/3;
printf("%f",y);

int s,ta,da,t,td;
scanf("%d%d%d",&s,&ta,&da) ;
 ta =0.05;
 da=0.02;
td=ta+da;
t=s+(s*(td)); 
printf("%d",t);
  return 0;
}


🟡 9. Swap Without Third Variable
#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d %d",a,b);

    return 0;
}
🟡 10. Calculate Area of Rectangle
#include<stdio.h>

int main()
{
    int length,breadth;

    scanf("%d%d",&length,&breadth);

    printf("Area = %d",length*breadth);

    return 0;
}
🟡 11. Calculate Area of Circle
#include<stdio.h>

int main()
{
    float r;

    scanf("%f",&r);

    printf("Area = %.2f",3.14*r*r);

    return 0;
}
🟡 12. Calculate Simple Interest

Formula:

SI = (P × R × T)/100
#include<stdio.h>

int main()
{
    float p,r,t,si;

    scanf("%f%f%f",&p,&r,&t);

    si=(p*r*t)/100;

    printf("%.2f",si);

    return 0;
}
🟡 13. Convert Celsius to Fahrenheit

Formula:

F = (C × 9/5) + 32
#include<stdio.h>

int main()
{
    float c,f;

    scanf("%f",&c);

    f=(c*9/5)+32;

    printf("%.2f",f);

    return 0;
}
🟠 14. Demonstrate Type Casting
#include<stdio.h>

int main()
{
    int a=5,b=2;

    float result;

    result=(float)a/b;

    printf("%.2f",result);

    return 0;
}

Output:

2.50
🟠 15. Increment and Decrement Operators
#include<stdio.h>

int main()
{
    int a=10;

    printf("%d\n",++a);

    printf("%d\n",a--);

    printf("%d",a);

    return 0;
}

Output:

11
11
10
🟠 16. Relational Operators Demo
#include<stdio.h>

int main()
{
    int a=10,b=20;

    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a==b);

    return 0;
}

Output:

0
1
0
🔴 17. Logical Operators Demo
#include<stdio.h>

int main()
{
    int a=5,b=10;

    printf("%d\n",(a<b && b>0));
    printf("%d\n",(a>b || b>0));
    printf("%d\n",!(a>b));

    return 0;
}

Output:

1
1
1
🔴 18. Bitwise Operators Demo
#include<stdio.h>

int main()
{
    int a=5,b=3;

    printf("AND = %d\n",a&b);
    printf("OR = %d\n",a|b);
    printf("XOR = %d\n",a^b);

    return 0;
}


