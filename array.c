#include<stdio.h>

int main() {


    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }         
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr);
    printf("arr[2] = %d\n", &arr[1]);




int a[10],n,sum=0,avg=0,i;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements in the array:");
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
    printf("The value of sum is %d\n",sum);


}
avg=sum/n;
printf("The sum of the array is %d\n",sum); 
printf("The average of the array is %d",avg);



int main() {
int a[5]={58,26,34,47,15};
int i;
int min = a[1];
int max = a[4];
for (i=0;i<5;i++){
    if (a[i]<min){
        min=a[i];
    }
    printf("The minimum value is %d\n", min);

    for (i=0;i<5;i++){
        if (a[i]>0){
            max=a[i];
        }
    }
    printf("The maximum value is %d\n",max);
}
}




int a[6]={3,5,6,8,9,2};
int i,pos,val;
printf("Enter the value which you want to insert in the array:");
scanf("%d",&val);
printf("Enter the position which you want to insert in the array:");
scanf("%d",&pos);
int n=6;
for(i=n-1;i>=pos-1;i--){
    a[i+1]=a[i];
}
a[pos-1]=val;                                
printf("The array after insertion is:\n");
for(i=0;i<=n;i++){
    printf(" %d ",a[i]);
}
return 0;

}





printf("Array element are : \n");
for(i=0;i<=n;i++)
{
    printf("%d ",a[i]);

}

int main() {
    int n,i,p;
    int a[10];
    printf("Enter the total element");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to delete");
    scanf("%d", &p);
    for(i=p-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    printf("array elements after deletion are:\n");
    for(i=0;i<n-1;i++){
        printf("%d ,",a[i]);
    }
printf("\n");

  return 0;
}

int main(){
    int a[5]={14, 54,43,78,65};
    int loc,i,key;
    key=52;
    loc=-1;
    for(i=0;i<5;i++){
if(a[i]==key){
    loc=i+1;
    break;
}
    }

if(loc!=1){
    printf("Element is found on  %d location ",loc);
}
else{
    printf("Element not found");
}
return 0;
    }
 


           BINARY SEARCH           BINARY SEARCH        BINARY  SEARCH

int main(){

int a[10],n,i,mid,key;
scanf("%d",&n);
int beg=0;
int end=n-1;
int loc=-1;
for (i=0; i<n;i++){
    scanf("%d",&a[i]);
}
scanf("%d",&key);

while(beg<=end){
    mid=(beg+end)/2;

    if(key == a[mid]) {
        loc = mid+1;
        break;
    }

    else if (key <a[mid]) {
        end= mid-1;
    }
    else if (key >a[mid]) {
           beg=mid+1;

    }
}
if (loc==-1)  {
    printf("Not found");
}
else { printf("Element found at %d", loc);
}
 return 0;
}


       Bubble sorting       Bubble sorting      Bubble sorting    Bubble sorting   Bubble sorting 

int main(){
int a[5],n;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
for(int i=0;i<n;i++){ 
    scanf("%d",&a[i]); 
}
int pass,i,temp;
for(pass=0;pass<n-1;pass++){
    for(i=0;i<n-pass-1;i++){
        if(a[i]>a[i+1]){
            int temp = a[i
            ];
            a[i]=a[i+1]; 
            a[i+1]=temp;
        }
    }
}
printf("Sorted array is :\n");
printf("[");
for(i=0;i<n;i++){
    printf("%d",a[i]);
    if (i != n-1)
    {
        /* code */printf(",");
    }
}
printf("]\n");
return 0;

}


 

void funt(int,int);

int main()
{
    int a[5]={1,2,3,4,5};
    funt(a[2],a[4]);
    return 0;
}
void funt(int x,int y){

    printf("The value of x is %d\n",x);
    printf("The value of y is %d\n",y);
    printf("The value of x+y = %d",x+y);

}



void fa(int a[]){
    printf("%d",a);
    printf("%d",*a);
    int sum=0;
    for(int i=0;i<5;i++) {
        a[i]+=10;
    }

}
int main(){
    int n,size;
    size=5;
    int a[5] ={5,6,9,8,6};
    f1(a);
    printf("%d",a[0]);
    for(int i =0; i<=n;i++){
        printf("%d",a[i]);
    }
}


void (int []);

int main(){
    int a[5]={1,2,4,5,6};

}

int main()  {
   int  a[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};
    int i,j;
    int sum=0;
    for(i=0;i<3;i++) {
        for(j=0;j<4;j++){
            printf("%3d ",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
        
    }
    printf("The sum of the 2D array is %d\n",sum);
        
}

int main() {
  
    int i,j,r,c,sum=0;
      int a[r][c];
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);    
    printf("Enter the elements in the array:\n");
    for(i=0;i<r;i++){
        for (j=0;j<c;j++) {

            scanf("%d",&a[i][j]);
            if (i==j) {
                sum+=a[i][j];
            }
        }
    }
    printf("The sum of the 2D array is %d\n",sum);

    return 0;
}




int main ()  {
int r,c,i,j,sum=0;

printf("Enter the number of rows:");

scanf("%d", &r);
printf("Enter the number of columns:"); 
scanf("%d", &c);    
printf("Enter the elements in the array:\n");
int a[r][c]; int b[r][c]; int t[c][r];
// int a[r][c];
// int t[c][r];
for(i=0;i<r;i++){
    for (j=0;j<c;j++) {
        scanf("%d",&a[i][j]);
    }
}         
for(i=0;i<r;i++){
    for (j=0;j<c;j++) {
        scanf("%d",&b[i][j]);
    }
}


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        t[i][j]+=a[i][j]+b[j][i];

        printf("%3d ",t[i][j]);
    }
}
for (i=0;i<c;i++){
    for (j=0;j<r;j++){
        t[i][j]=a[j][i];
        printf("%3d ",t[i][j]);
    }
    printf("\n");
}

return 0;
}
int main ()  {
    int a[6]={10,20,30,40,50,60};
    int i,val;
    printf("Enter the value to search in the array:");
    scanf("%d",&val);
    for(i=0;i<6;i++){
        if (val==a[i])
        {
            printf("Element found at index %d",i);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}




int main() {
    int a[22]={10,20,30,40,50,40,50,50};
    int i,n,c;
    scanf("%d",&n);
    c = 0;

    for(i=0;i<22;i++){

        if (a[i]==n) {
            // printf("Element found at index %d\n",i);
            c++;
        }  
    }
    if (c == 0) {
        printf("Element not found\n");
    } else {
        printf("Element found %d times\n",c);
    }
    return 0;
}






