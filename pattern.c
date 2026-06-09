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






