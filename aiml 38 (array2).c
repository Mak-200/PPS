#include <stdio.h>
void main ()
{
int s[6], sum =0;
printf("enter 6 values");
for (int i=0; i<6; i++)
scanf("%d", &s[i]);
for(int i=0; i<6; i++)
sum=sum+s[i];
printf("sum=%d",sum);
}
