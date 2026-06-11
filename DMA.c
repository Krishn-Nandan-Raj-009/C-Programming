#include<stdio.h>
#include<stdlib.h>
int main() {


    int n,i,t,loc=-1;
    printf("Enter total number of values");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the values");

    // for(int i=0;i<n;i++){
    //     scanf("%d",ptr+i);

    // }

    // printf("values are");
    // for (int i=0;i<n;i++){
    //     printf("%d ",ptr[i]);
    // }

    // int ns;
    // printf("Enter new size");
    // scanf("%d",&ns);
    // ptr=(int*)realloc(ptr,sizeof(int));
    // printf("enter the values");

    // for(int i=n;i<ns;i++){
    //     scanf("%d",ptr+i);

    // }

    //  printf(" new values are");

    // for (int i=0;i<ns;i++){
    //     printf("%d ",ptr[i]);  }



    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }

    printf("Enter the element to search");
    scanf("%d",&t);
    for(i=0;i<n;i++) {
        if (*(ptr+i) ==t) {
            loc=i;
break;        } }

if (loc==-1)  {
    printf("Element not found");
}
else{printf("%d",loc);}
    








    // free(ptr);




    return 0;
}

