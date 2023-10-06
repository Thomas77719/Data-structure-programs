#include<stdio.h>
void main()
{
int limit,check,i,c=0,cot=0;
cot++;
cot++;
printf("enter the limit: ");
scanf("%d",&limit);cot++;
int a[limit];
printf("enter the elements\n");
for(i=0;i<limit;i++)
{
cot++;
scanf("%d",&a[i]);
cot++;
}
printf("enter the element to be checked: "); //searching;
scanf("%d",&check);
cot++;
for(i=0;i<limit;i++)
{
cot++;
if(a[i]==check)
{
cot++;
printf("The element %d is present  ",check);
c=1;
cot++;
cot++;
break;
}
}
if(c==0)
{
cot++;
printf("The element %d is not present\n",check);
cot++;
}
cot++;
cot++;
printf("\n%d is the time complexity",cot);
printf("\nspace compexity is %d",5*4+limit*4);
}

