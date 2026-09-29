#include<stdio.h>
int main()
{
int a,b;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
printf("Addition :%d + %d = %d\n",a,b,a+b);
printf("subtraction: %d - %d = %d\n" ,a,b,a-b);
printf("multiplication %d*%d = d+%d\n", a,b,a*b);
printf("division: %d/%d = %d\n", a,b,a/b);
printf("Remainder: %d % %d= %d\n",a,b,a%b);
return 0;
}
