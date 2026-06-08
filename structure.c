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




🔴 1. Store and Display Student Information
#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter Roll, Name, Marks:\n");
    scanf("%d %s %f",&s.roll,s.name,&s.marks);

    printf("\nRoll = %d",s.roll);
    printf("\nName = %s",s.name);
    printf("\nMarks = %.2f",s.marks);

    return 0;
}
🔴 2. Store Information of 5 Students
#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    for(i=0;i<5;i++)
    {
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }

    for(i=0;i<5;i++)
    {
        printf("%d %s %.2f\n",
        s[i].roll,s[i].name,s[i].marks);
    }
}
🔴 3. Find Student with Highest Marks
#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i,max=0;

    for(i=0;i<5;i++)
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);

    for(i=1;i<5;i++)
    {
        if(s[i].marks>s[max].marks)
            max=i;
    }

    printf("%s %.2f",s[max].name,s[max].marks);
}
🔴 4. Structure for Employee Details
#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;

    scanf("%d %s %f",&e.id,e.name,&e.salary);

    printf("%d %s %.2f",
    e.id,e.name,e.salary);
}
🔴 5. Calculate Average Marks of Students
#include<stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main()
{
    struct Student s[5];
    int i;
    float sum=0;

    for(i=0;i<5;i++)
    {
        scanf("%d %f",&s[i].roll,&s[i].marks);
        sum+=s[i].marks;
    }

    printf("Average = %.2f",sum/5);
}
🔴 6. Structure as Function Argument
#include<stdio.h>

struct Student
{
    int roll;
    float marks;
};

void display(struct Student s)
{
    printf("%d %.2f",s.roll,s.marks);
}

int main()
{
    struct Student s={101,89.5};

    display(s);
}
🔴 7. Structure Using Pointer
#include<stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main()
{
    struct Student s={101,90};
    struct Student *ptr;

    ptr=&s;

    printf("%d\n",ptr->roll);
    printf("%.2f",ptr->marks);
}
🔴 8. Nested Structure
#include<stdio.h>

struct Address
{
    char city[30];
    int pincode;
};

struct Student
{
    int roll;
    struct Address add;
};

int main()
{
    struct Student s;

    scanf("%d %s %d",
    &s.roll,s.add.city,&s.add.pincode);

    printf("%d %s %d",
    s.roll,s.add.city,s.add.pincode);
}
🔴 9. Compare Two Structures
#include<stdio.h>

struct Student
{
    int roll;
};

int main()
{
    struct Student s1,s2;

    scanf("%d",&s1.roll);
    scanf("%d",&s2.roll);

    if(s1.roll==s2.roll)
        printf("Equal");
    else
        printf("Not Equal");
}
🔴 10. Structure for Book Details
#include<stdio.h>

struct Book
{
    int id;
    char name[50];
    float price;
};

int main()
{
    struct Book b;

    scanf("%d %s %f",
    &b.id,b.name,&b.price);

    printf("%d %s %.2f",
    b.id,b.name,b.price);
}
🔴 11. Array of Structures + Search Student
/* Search by roll number */

Practice:

Input 5 students
Search roll number
Display details
🔴 12. Sort Students by Marks

Practice:

Use Bubble Sort
Sort structure array based on marks
🔴 13. Store Date Using Structure
struct Date
{
    int day;
    int month;
    int year;
};
🔴 14. Store Time Using Structure
struct Time
{
    int hr;
    int min;
    int sec;
};
🔴 15. Structure Inside Structure
struct Marks
{
    int phy;
    int chem;
};

struct Student
{
    int roll;
    struct Marks m;
};
🔴 16. Pass Structure by Reference
#include<stdio.h>

struct Student
{
    int roll;
};

void update(struct Student *s)
{
    s->roll=200;
}

int main()
{
    struct Student s={100};

    update(&s);

    printf("%d",s.roll);
}
🔴 17. Calculate Total and Percentage
struct Student
{
    int roll;
    int m1,m2,m3;
};

Tasks:

Total
Percentage
Grade
🔴 18. Student Record Management (Most Important)

Menu Driven:

1. Add Student
2. Display Student
3. Search Student
4. Exit

Uses:

Structure
Array of Structure
Functions


