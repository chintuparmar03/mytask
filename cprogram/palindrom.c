#include <stdio.h>

int main()
{
   int n,reverse=0,remainder;
   printf("enter the number = ");
   scanf("%d",&n);
    int temp=n;
   while(n!=0){
       remainder=n%10;
       reverse=reverse*10+remainder;
       n=n/10;
   }
       printf("%d\n",reverse);
       

   if (temp==reverse){
       printf("it is a palindrom\n");}
   
   else {
       printf("it is not a palindrom\n");
   }

    return 0;
}