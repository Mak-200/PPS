#include <stdio.h>
int main ()
{
int arms[4];
printf("enter 4 integers");
//taking input and storing it in an array
for (int i=0; i<4; ++i)
{
scanf("%d",&arms[i]);
}
printf("displacing integers: ");
//printing elements of the array
for (int i=0; i<4; ++i)
{
printf("%d\n", arms[i]);}
return 0;
}
