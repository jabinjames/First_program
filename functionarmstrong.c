#include<stdio.h>
int arm(int a);

int main()
{
   int a,i;
   int flag;
    
   printf("Enter a number to check prime \n");
   scanf("%d",&a);

   flag=arm(a);
   printf("%d is arm strong number\n",flag);

   return 0;
}
int arm(int a)
{
    int i;
    int num;
    int result=0;
    num=a;
    while (a!=0)
    {
        a=a%10;
        result=result+(a*a*a);
        a=a/10;
        
    }
    if(a==num)
    {
        return num ;
    }
    
   


}