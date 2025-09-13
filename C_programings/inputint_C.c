#include <stdio.h>

int main(){
    /*
    in c programint ther difalt function like 'scanf()' take input from user
    syntax is 
    int age;
    scanf("%d",&age);
    %d is the data type of the input int's a integer type 
    */
   int a,b;
   printf("enter the a ");
   scanf("%d",&a);
   printf("enter the b ");
   scanf("%d",&b);


   int sum=a+b;
   printf("sum is := %d",sum);
   return 0;
}