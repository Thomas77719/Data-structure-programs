#include<stdio.h>
void main()
{
int x,i,limit,c=0,count=0,j,temp;
count++;count++;
printf("enter the limit\n");
scanf("%d",&limit);
count++;
int a[limit];
printf("enter the elements of the array\n");
for(i=0;i<limit;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
printf("sorted array is\n");
for(i=0;i<limit;i++)
{
count++;
for(j=i+1;j<limit;j++)
{
count++;
if(a[i]>a[j])
{
count++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
count=count+3;
}
}
printf("%d\t",a[i]);
count++;
}
printf("\n");
int l=0,r=limit-1,m=(l+r)/2;
count=count+3;
printf("enter the value to be searched\n");
scanf("%d",&x);
count++;
while(l<=r)
{
count++;
if(x==a[m])
{
count++;
c=1;
count++;
printf("element is present\n");
break;
}
else if(x<a[m])
{
count++;
r=m-1;
count++;
m=(l+r)/2;
count++;
}
else if(x>a[m])
{
count++;
l=m+1;
count++;
m=(l+r)/2;
count++;
}
}
if(c==0)
{
count++;
printf("element is not present\n");
}
count=count+2;
printf("time complexity is %d\n",count);
printf("space complexity is %d\n",40+4*limit);
}





	

