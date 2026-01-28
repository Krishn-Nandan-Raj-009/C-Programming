#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=a++ + ++b * ++a / 2;
    printf("the sum is %d",c);
    return 0;
}