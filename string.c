#include<stdio.h>

int main() {
     char name[20];
     scanf("%s",name);

     fgets(name,8,stdin);
     int i=0,count=0;


     while(name[i]!='\0'){
        printf("%c\n",name[i]);
        i++;
        count++;

        if(name[i]=='a'|| name[i]=='e'||name[i]=='i' ||name[i]=='u'||name[i]=='o' )  {
            count++;
        }

     }
     printf("%d",count);



return 0;
}




1. Find Length of String (Without strlen)
#include<stdio.h>

int main()
{
    char str[100];
    int i=0;

    gets(str);

    while(str[i]!='\0')
        i++;

    printf("Length = %d",i);
}
2. Copy One String to Another (Without strcpy)
#include<stdio.h>

int main()
{
    char s1[100],s2[100];
    int i=0;

    gets(s1);

    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }

    s2[i]='\0';

    puts(s2);
}
3. Reverse a String
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len;

    gets(str);

    len=strlen(str);

    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);
}
4. Check Palindrome String
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len,flag=1;

    gets(str);

    len=strlen(str);

    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
5. Count Vowels
#include<stdio.h>

int main()
{
    char str[100];
    int i,count=0;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
           str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||
           str[i]=='O'||str[i]=='U')
            count++;
    }

    printf("%d",count);
}
6. Count Consonants
#include<stdio.h>

int main()
{
    char str[100];
    int i,count=0;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||
           (str[i]>='a'&&str[i]<='z'))
        {
            if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||
                 str[i]=='o'||str[i]=='u'||
                 str[i]=='A'||str[i]=='E'||str[i]=='I'||
                 str[i]=='O'||str[i]=='U'))
                 count++;
        }
    }

    printf("%d",count);
}
7. Count Words
#include<stdio.h>

int main()
{
    char str[100];
    int i,count=1;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            count++;
    }

    printf("%d",count);
}
8. Compare Two Strings (Without strcmp)
#include<stdio.h>

int main()
{
    char s1[100],s2[100];
    int i=0,flag=1;

    gets(s1);
    gets(s2);

    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            flag=0;
            break;
        }
        i++;
    }

    if(flag)
        printf("Equal");
    else
        printf("Not Equal");
}
9. Concatenate Strings (Without strcat)
#include<stdio.h>

int main()
{
    char s1[100],s2[100];
    int i=0,j=0;

    gets(s1);
    gets(s2);

    while(s1[i]!='\0')
        i++;

    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }

    s1[i]='\0';

    puts(s1);
}
10. Convert Lowercase to Uppercase
#include<stdio.h>

int main()
{
    char str[100];
    int i;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }

    puts(str);
}
11. Convert Uppercase to Lowercase
#include<stdio.h>

int main()
{
    char str[100];
    int i;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    }

    puts(str);
}
12. Count Digits in String
#include<stdio.h>

int main()
{
    char str[100];
    int i,count=0;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            count++;
    }

    printf("%d",count);
}
13. Count Special Characters
#include<stdio.h>

int main()
{
    char str[100];
    int i,count=0;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(!((str[i]>='A'&&str[i]<='Z')||
             (str[i]>='a'&&str[i]<='z')||
             (str[i]>='0'&&str[i]<='9')||
             str[i]==' '))
             count++;
    }

    printf("%d",count);
}
14. Find Frequency of Character
#include<stdio.h>

int main()
{
    char str[100],ch;
    int i,count=0;

    gets(str);

    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            count++;
    }

    printf("%d",count);
}
15. Remove Spaces
#include<stdio.h>

int main()
{
    char str[100];
    int i,j=0;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }

    str[j]='\0';

    puts(str);
}
16. Check Anagram
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    int i,j,temp;

    gets(s1);
    gets(s2);

    int len1=strlen(s1);
    int len2=strlen(s2);

    if(len1!=len2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(i=0;i<len1-1;i++)
    {
        for(j=i+1;j<len1;j++)
        {
            if(s1[i]>s1[j])
            {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }

            if(s2[i]>s2[j])
            {
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
            }
        }
    }

    if(strcmp(s1,s2)==0)
        printf("Anagram");
    else
        printf("Not Anagram");
}
17. Reverse Words in Sentence

Input:

I Love C

Output:

C Love I

(Important interview/exam question)

18. Find First Repeated Character

Input:

programming

Output:

r
#include<stdio.h>

int main()
{
    char str[100];
    int i,j;

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                printf("%c",str[i]);
                return 0;
            }
        }
    }
}
