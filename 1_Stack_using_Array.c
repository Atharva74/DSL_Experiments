//Atharva Abhyankar
//IT 01

#include<stdio.h>
#include<math.h>
int main()
{
int n, sum = 0, c, t, a;
printf("Enter a number: ");
scanf("%d", &n);
t = n;
while(n != 0)
{
a = n%10;
sum += a*a*a;
n = n/10;
}
printf("sum = %d", sum);
if(sum == t)
    {
     printf("\n%d is an Armstrong number\n", t);
    }
else
   {
    printf("\n\n\t%d is not an Armstrong number\n", t);
   }
return 0;
}
