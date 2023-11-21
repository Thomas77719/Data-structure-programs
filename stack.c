#include<stdio.h>
int a[50],top=-1,max_size,i;
void push();
void pop();
void peek();
void display();
void main()
{
int choice;
printf("Enter the Maximum Size of the stack :\n");
scanf("%d",&max_size);
while(choice!=5)
{
printf("Enter your choice: \n1.push \n2.pop \n3.peek \n4.display\n 5.exit\n ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
peek();
break;
}
case 4:
{
display();
break;
}
default :
{
printf("INVALID CHOICE");
break;
}
}
}
}
void push()
{
if(top==(max_size-1))
{
printf("\nOVER FLOW\n");
}
else
{
top=top+1;
printf("Enter the element\n");
scanf("%d",&a[top]);
}
}
void pop()
{
int element;
if(top==-1)
{
printf("UNDER FLOW\n");
}
else
{
element=a[top];
top=top-1;
}
}
void peek()
{
printf("%d\n",a[top]);
}
void display()
{
if(top==-1)
{
printf("STACK IS EMPTY\n");
}
else
{
for(i=top;i>=0;i--)
{
printf("%d\n",a[i]);
}
}
}

