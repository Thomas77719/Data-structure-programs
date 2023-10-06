#include<stdio.h>
void main()
{
int row,i,j,column,k=1,count=0,arr[5][5];
struct sparse{
int row;
int column;
int value;
}s[10];
printf("Enter the number of rows and column:\n");
scanf("%d%d",&row,&column); 
printf("Enter the elements:\n"); 
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
scanf("%d",&arr[i][j]);
}}
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
if(arr[i][j]!=0)
{
s[k].row=i;
s[k].column=j;
s[k].value=arr[i][j];
k++;count++;
}
}
}
s[0].row=row;
s[0].column=column;
s[0].value=count;
printf("\n The tuple representation is:\n");
printf("\nrow\tcolumn\tvalue\n"); 
for(i=0;i<k;i++)
{
printf("%d\t%d\t%d\n",s[i].row,s[i].column,s[i].value);
}
}
