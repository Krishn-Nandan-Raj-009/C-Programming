#include<stdio.h>
#include<stdlib.h>
int main() {


    int n,i,t,loc=-1;
    printf("Enter total number of values");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the values");

    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);

    }

    printf("values are");
    for (int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }

    int ns;
    printf("Enter new size");
    scanf("%d",&ns);
    ptr=(int*)realloc(ptr,sizeof(int));
    printf("enter the values");

    for(int i=n;i<ns;i++){
        scanf("%d",ptr+i);

    }

     printf(" new values are");

    for (int i=0;i<ns;i++){
        printf("%d ",ptr[i]);  }



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
    








    free(ptr);




    return 0;
}



🔥 DMA Functions You Must Know
malloc()   // Allocates single block
calloc()   // Allocates multiple blocks and initializes to 0
realloc()  // Resizes memory block
free()     // Releases memory
1. Allocate Memory for One Integer (malloc)
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
2. Allocate Memory for Array
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int *arr;

    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    free(arr);
}
3. Sum of Array Using DMA
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr,n,i,sum=0;

    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("Sum=%d",sum);

    free(arr);
}
4. Find Maximum Element
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr,n,i,max;

    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    max=arr[0];

    for(i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];

    printf("Max=%d",max);

    free(arr);
}
5. Using calloc()
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr,i;

    arr=(int*)calloc(5,sizeof(int));

    for(i=0;i<5;i++)
        printf("%d ",arr[i]);

    free(arr);
}
Output
0 0 0 0 0
6. Difference Between malloc and calloc
malloc(5*sizeof(int));
calloc(5,sizeof(int));

Viva:

✅ malloc → garbage values

✅ calloc → initialized to 0

7. Resize Array Using realloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr,n,i;

    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    arr=(int*)realloc(arr,(n+5)*sizeof(int));

    free(arr);
}
8. Insert Element Using realloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr,n,i,val;

    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&val);

    arr=(int*)realloc(arr,(n+1)*sizeof(int));

    arr[n]=val;

    n++;

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    free(arr);
}
9. Dynamic String Allocation
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str;

    str=(char*)malloc(50*sizeof(char));

    gets(str);

    puts(str);

    free(str);
}
