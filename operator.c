#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=a++ + ++b * ++a / 2;
    printf("the sum is %d",c);
    return 0;
}


🟡 Logical Operators
10. AND Operator
C

#include<stdio.h>

int main()
{
    int age=20;

    printf("%d",(age>=18 && age<=60));

    return 0;
}
Output:


1
11. OR Operator
C

#include<stdio.h>

int main()
{
    int marks=35;

    printf("%d",(marks>=40 || marks==35));

    return 0;
}
12. NOT Operator
C

#include<stdio.h>

int main()
{
    int a=5,b=10;

    printf("%d",!(a>b));

    return 0;
}
Output:


1
🟠 Assignment Operators
13. += Operator
C

#include<stdio.h>

int main()
{
    int a=10;

    a+=5;

    printf("%d",a);

    return 0;
}
Output:


15
14. Assignment Operator Demo
C

#include<stdio.h>

int main()
{
    int a=20;

    a-=5;
    a*=2;

    printf("%d",a);

    return 0;
}
Output:


30
🟠 Conditional (Ternary) Operator
15. Largest of Two Numbers
C

#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    (a>b)?
    printf("%d",a):
    printf("%d",b);

    return 0;
}
16. Even/Odd Using Ternary
C

#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    (n%2==0)?
    printf("Even"):
    printf("Odd");

    return 0;
}
🔴 Bitwise Operators
17. Bitwise AND OR XOR
C

#include<stdio.h>

int main()
{
    int a=5,b=3;

    printf("AND = %d\n",a&b);
    printf("OR = %d\n",a|b);
    printf("XOR = %d\n",a^b);

    return 0;
}
Output:


AND = 1
OR = 7
XOR = 6
18. Left Shift and Right Shift
C

#include<stdio.h>

int main()
{
    int a=8;

    printf("%d\n",a<<1);
    printf("%d\n",a>>1);

    return 0;
}
Output:


16
4
