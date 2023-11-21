#include<stdio.h>
int a[5],front=0,rear=-1,max_size,element,i;
void enqueue();
void dequeue();
void peek();
void display();


void main()
{
int choice;
printf("Enter the Maximum Size of the Queue :\n");
scanf("%d",&max_size);
while(choice!=5)
{
printf("Enter your choice: \t1. enqueue \t2. dequeue \t3. peek \t4. display \t5. exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
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
case 5:
{
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


void enqueue()
{
if (rear>=max_size-1)
{
printf("OVER FLOW\n");
}
else
{
printf("Enter the elements : \n");
rear++;
scanf("%d",&a[rear]);
}
}


void dequeue()
{
if(front==rear)
{
printf("The element %d Removed\n",a[front]);
front=0;rear=-1;
}
else if(rear<front)
{
printf("UNDER FLOW\n");
}
else
{
element=a[front];
printf("The element %d Removed \n",a[front]);
front++;
}
}


void peek()
{
if(rear<front)
{
printf("The queue is empty\n");
}
else
{
printf("The peek value is :%d\n",a[front]);
}
}


void display()
{
if(rear<front)
printf("The queue is empty\n");
else
{
for(i=front;i<=rear;i++)
{
printf("\n%d\n",a[i]);
}
}
}



