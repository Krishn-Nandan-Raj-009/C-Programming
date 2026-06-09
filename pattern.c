#include<stdio.h>
int main() {


 int i,j,rows,cols;
 printf("enter no of rows and columns");
 scanf("%d%d",&rows,&cols);
 for ( i = 0; i <=rows; i++)
 {
    for ( j= 0; j <=cols ; j++)
    {
        /* code */printf("*");
    }
    printf("\n");
    
 }


  int i,j,rows,cols;
 printf("enter no of rows and columns");
 scanf("%d%d",&rows,&cols);
 for ( i = 1; i <=rows; i++)
 {
    for ( j= 1; j <=cols ; j++)
    {
        if(i==1||j==1||i== rows||j==cols)
        /* code */printf("i ");
        else {
            printf("  ");
        };
    }
    printf("\n");
    
 }
  
    return 0;

}



int n;
printf("Enter the number: ");   
scanf("%d", &n);
int i;
for(i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",j);
    }
    printf("\n");                 
}
return 0;
}



int n;
 printf("Enter the number: ");   
 scanf("%d", &n);
 int i,j;
for(i=1;i<=n;i++){
    for(j=1;j<=n-1;j++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");                 
}
return 0;
}


🟢 1. Half Pyramid Star
*
**
***
****
*****
#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");

        printf("\n");
    }
}
🟢 2. Inverted Half Pyramid
*****
****
***
**
*
for(i=5;i>=1;i--)
{
    for(j=1;j<=i;j++)
        printf("*");

    printf("\n");
}
🟢 3. Number Triangle
1
12
123
1234
12345
for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
        printf("%d",j);

    printf("\n");
}
🟢 4. Repeated Number Triangle
1
22
333
4444
55555
for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
        printf("%d",i);

    printf("\n");
}
🟢 5. Character Triangle
A
AB
ABC
ABCD
ABCDE
for(i=1;i<=5;i++)
{
    for(j=0;j<i;j++)
        printf("%c",'A'+j);

    printf("\n");
}
🟡 6. Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
int num=1;

for(i=1;i<=4;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d ",num++);
    }

    printf("\n");
}
🟡 7. 0-1 Triangle
1
01
101
0101
for(i=1;i<=4;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d",(i+j)%2);
    }

    printf("\n");
}
🟡 8. Right-Aligned Star Pattern
    *
   **
  ***
 ****
*****
for(i=1;i<=5;i++)
{
    for(j=1;j<=5-i;j++)
        printf(" ");

    for(j=1;j<=i;j++)
        printf("*");

    printf("\n");
}
🟡 9. Full Pyramid
    *
   ***
  *****
 *******
*********
for(i=1;i<=5;i++)
{
    for(j=1;j<=5-i;j++)
        printf(" ");

    for(j=1;j<=2*i-1;j++)
        printf("*");

    printf("\n");
}
🟡 10. Inverted Pyramid
*********
 *******
  *****
   ***
    *
for(i=5;i>=1;i--)
{
    for(j=1;j<=5-i;j++)
        printf(" ");

    for(j=1;j<=2*i-1;j++)
        printf("*");

    printf("\n");
}
🔴 11. Diamond Pattern
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
/* Upper Pyramid + Lower Pyramid */

(Exam favorite)

🔴 12. Hollow Square
*****
*   *
*   *
*   *
*****
for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        if(i==1||i==5||j==1||j==5)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}
🔴 13. Hollow Triangle
*
**
* *
*  *
*****
🔴 14. Hollow Pyramid
    *
   * *
  *   *
 *     *
*********
🔴 15. Pascal Triangle
      1
     1 1
    1 2 1
   1 3 3 1

Very famous viva question.

🔴 16. Butterfly Pattern
*      *
**    **
***  ***
********
***  ***
**    **
*      *
🔴 17. X Pattern
*   *
 * *
  *
 * *
*   *
for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        if(i==j || i+j==6)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}
🔴 18. Number Pyramid
    1
   121
  12321
 1234321
123454321
for(i=1;i<=5;i++)
{
    for(j=1;j<=5-i;j++)
        printf(" ");

    for(j=1;j<=i;j++)
        printf("%d",j);

    for(j=i-1;j>=1;j--)
        printf("%d",j);

    printf("\n");
}



