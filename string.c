#include<stdio.h>

int main() {
     char name[20];
    //  scanf("%s",name);

     fgets(name,8,stdin);
     int i=0,count=0;


     while(name[i]!='\0'){
        // printf("%c\n",name[i]);
        // i++;
        // count++;

        if(name[i]=='a'|| name[i]=='e'||name[i]=='i' ||name[i]=='u'||name[i]=='o' )  {
            count++;
        }

     }
     printf("%d",count);



return 0;
}