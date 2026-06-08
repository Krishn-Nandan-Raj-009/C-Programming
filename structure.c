#include<stdio.h>
#include<string.h>
struct student
{
    char n[11];                               //char *name
    int rollno;
    float marks;
} k1;
int main()  {

strcpy(k1.n,"KRISHNA");
k1.rollno=10;
k1.marks=30;

printf("%d %f %s",k1.rollno,k1.marks,k1.n);

return 0;  }


struct books
{
    char Aname[222];                       //char *name
    int P_No;
    float B_price;
} ;



int main()  {

struct books b1={"P_A_P",500,2000.0};
struct books b2={"JANE_AUSTEN",500,2000.0};

struct books b1,b2;

printf("Enter details of books");
gets(b1.Aname);     //scanf("%s",b1.name);  
scanf("%f %d",&b1.B_price,&b1.P_No);

gets(b1.Aname);     //scanf("%s",b1.name);  
scanf("%f %d",&b1.B_price,&b1.P_No);
b2=b1;

printf("%s %d %f\n",b1.Aname,b1.P_No,b1.B_price);
printf("%s %d %f",b2.Aname,b2.P_No,b1.B_price);




return 0;  }


