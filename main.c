#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2;
   char oper;
   printf("enter the operation\n");
   scanf("%c",&oper);
   printf("enter the num 1\n");
   scanf("%d",&num1);
   printf("enter the num 2\n");
   scanf("%d",&num2);


   switch(oper)
   {
        case '+':
                    printf("sum of numbers is %d\n",num1+num2);
                    break;
	case '*':
                    printf("sum of numbers is %d\n",num1*num2);
                    break;

        default :
                    printf("invalid\n");
                    break;
   }
    return 0;
}

