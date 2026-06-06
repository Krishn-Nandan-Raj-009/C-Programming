#include<stdio.h>

// int fact(int*);
// int main() {


    // int k=9;
    // int *ptr=&k; 

    // printf("%d\n",k);     
    // printf("%d\n",&k);
    // printf("%d\n",*ptr);
    // printf("%p\n",ptr);  
    // printf("%d\n",*(&k));

    // int a=10;
    // int *ptr=&a;
    // float f=3.14;
    // float *pt=&f;
    // char c='A';
    // char *p=&c;

    // printf("%d %d %d\n", sizeof(a), sizeof(f), sizeof(c));
    //  printf("%d %d %d", sizeof(ptr), sizeof(pt), sizeof(p));


   
    //     int n;
    //     scanf("%d", &n);
    //      printf("%d", fact(&n));
    //      return 0;
    // }
     

    // int fact (int *n) {
    //     if (*n==1 || *n==0) {
    //         return 1;
    //     }
    //     else {
    //         return fact(*n-1) * (*n);
    //     }
    // }


    int main ()  {

// int a[]={10,20,30,40};
// int *p1=&a[0];
// printf("%d\n",*p1);
// p1++;
// printf("%d %d\n",p1,*p1);
// p1--;
// printf("%d %d\n",p1,*p1);
// int *p2=&a[4];
// printf("%d\n",*p1-*p2);


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



        
    
