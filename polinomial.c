#include<stdio.h>
void main()
{
int value,i;
printf("Enter the values of the polinomial : \n");
scanf("%d",&value);
struct polinomial
{
int coeff;
int expo;
}
s[value];
for(i=0;i<value;i++)
{
printf("Enter the coefficients and exponents:\n");
scanf("%d%d",&s[i].coeff,&s[i].expo);
}
for(i=0;i<value;i++)
{
if(i<value-1)
{
printf("%dX^%d + ",s[i].coeff,s[i].expo);
}
else
{
printf("%dX^%d \n ",s[i].coeff,s[i].expo);
}
}
}
