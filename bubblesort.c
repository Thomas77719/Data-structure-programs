#include<stdio.h>
void main()
{
int lim,i,j,temp,count=0;
printf("Enter the limit:");
scanf("%d",&lim);
count++;
printf("Enter the elements :");
int a[lim];
for(i=0;i<lim;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
for(i=0;i<lim;i++)
{
count++;
for(j=i+1;j<lim;j++)
{
count++;
if(a[i]>a[j])
{
count++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
count++;
count++;
count++;
}
count++;
}
count++;
}
count++;
printf("Sorted array is:\t");
for(i=0;i<lim;i++)
{
count++;
count++;
printf("%d\t",a[i]);
}
count++;
count++;
printf("  \n The time complexity is : %d \n" ,count);
printf(" \n The spce complexity is : %d", 20+4*lim);
}

	

