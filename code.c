#include<stdio.h>
void mycopy(char dest[],char src[]){
    int i=0;
    while (src[i]!='\0'){
        dest[i]=src[i];
        i++;
    }dest[i]='\0';
}
void myconcat(char result[],char first[],char last[]){
    int i=0, j=0;
    while (first[i]!='\0'){
        result[i]=first[i];
        i++;
    }
    result[i]=' ';
    i++;
    while(last[j]!='\0'){
        result[i]=last[j];
        i++;
        j++;
    }
    result[i]='\0';
}
int main(){
    char first[30],last[30];
    char copied[30],fullname[60];
    printf("enter first name:");
    scanf("%s",first);
    printf("enter last name:");
    scanf("%s",last);
    mycopy(copied,first);
    myconcat(fullname,first,last);
    printf("copied first name:%s\n",copied);
    printf("full name :%s",fullname);
    return 0;
}
