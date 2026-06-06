#include<stdio.h>

int fact(int*);
int main() {


    int k=9;
    int *ptr=&k; 

    printf("%d\n",k);     
    printf("%d\n",&k);
    printf("%d\n",*ptr);
    printf("%p\n",ptr);  
    printf("%d\n",*(&k));

    int a=10;
    int *ptr=&a;
    float f=3.14;
    float *pt=&f;
    char c='A';
    char *p=&c;

    printf("%d %d %d\n", sizeof(a), sizeof(f), sizeof(c));
     printf("%d %d %d", sizeof(ptr), sizeof(pt), sizeof(p));


   
        int n;
        scanf("%d", &n);
         printf("%d", fact(&n));
         return 0;
    }
     

    int fact (int *n) {
        if (*n==1 || *n==0) {
            return 1;
        }
        else {
            return fact(*n-1) * (*n);
        }
    }


    int main ()  {

int a[]={10,20,30,40};
int *p1=&a[0];
printf("%d\n",*p1);
p1++;
printf("%d %d\n",p1,*p1);
p1--;
printf("%d %d\n",p1,*p1);
int *p2=&a[4];
printf("%d\n",*p1-*p2);


int a[10],i;
int *p=a;

for(i=0;i<10;i++)  {
scanf("%d",a+i);
}
for (i=0;i<10;i++){
    printf("%d",*(a+i));
}
        
return 0;
    }



1. Swap Two Numbers Using Pointers
Code
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    swap(&x, &y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
Viva

❓ Why use &x and &y?

✅ To pass addresses to the function.

2. Sum of Two Numbers Using Pointers
#include<stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;

    scanf("%d%d", &a, &b);

    p1 = &a;
    p2 = &b;

    printf("Sum = %d", *p1 + *p2);

    return 0;
}
3. Find Maximum Using Pointers
#include<stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;

    scanf("%d%d", &a, &b);

    p1 = &a;
    p2 = &b;

    if(*p1 > *p2)
        printf("Maximum = %d", *p1);
    else
        printf("Maximum = %d", *p2);

    return 0;
}
4. Print Array Using Pointer
#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *p;
    int i;

    p = arr;

    for(i=0;i<5;i++)
    {
        printf("%d ", *(p+i));
    }

    return 0;
}
Important Viva
arr[i]

is equivalent to

*(arr+i)
5. Reverse Array Using Pointers
#include<stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *start,*end,temp;

    start = arr;
    end = arr + 4;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);

    return 0;
}
6. Find Length of String Using Pointer
#include<stdio.h>

int main()
{
    char str[100];
    char *p;
    int len = 0;

    gets(str);

    p = str;

    while(*p != '\0')
    {
        len++;
        p++;
    }

    printf("Length = %d", len);

    return 0;
}
7. Count Vowels Using Pointer
#include<stdio.h>

int main()
{
    char str[100];
    char *p;
    int count = 0;

    gets(str);

    p = str;

    while(*p)
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
           *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            count++;

        p++;
    }

    printf("Vowels = %d", count);

    return 0;
}
8. Pass Pointer to Function
#include<stdio.h>

void increment(int *x)
{
    (*x)++;
}

int main()
{
    int a = 10;

    increment(&a);

    printf("%d", a);

    return 0;
}

Output:

11
9. Dynamic Memory Allocation (Very Important)
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;

    p = (int*)malloc(sizeof(int));

    *p = 100;

    printf("%d", *p);

    free(p);

    return 0;
}


        
    
