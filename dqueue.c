 #include <stdio.h>
#include<stdlib.h>
#define size 100
int deque[size];
int f=-1, r=-1;
void enqueue_front(int);
void enqueue_rear(int);
void display();
void getfront();
void getrear();
void dequeue_front();
void dequeue_rear();
void main()
{
int choice,x;
 printf("******** DOUBLE ENDED QUEUE **********");
 printf("\n choose the following::");
do
{
printf("\n1.enqueue_front \n");
printf("2.enqueue_rear \n");
printf("3.display \n");
printf("4.getfront \n");
printf("5.getrear \n");
printf("6.dequeue_front \n");
printf("7.dequeue_rear \n");
printf("enter your choice : \n");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue_front(x);
             break;
case 2:enqueue_rear(x);
            break;
case 3:display();
            break;
case 4:getfront();
            break;
case 5:getrear();
           break;
case 6:dequeue_front();
            break;
case 7:dequeue_rear();
            break;
}
}while(choice<=7);
}
void enqueue_front(int x)
{

    printf("\nenter an element \n");
    scanf("%d",&x);
    if((f==0 && r==size-1) || (f==r+1))
    {
        printf("deque is full");
    }
    else if((f==-1) && (r==-1))
    {
        f=r=0;
        deque[f]=x;
    }
    else if(f==0)
    {
        f=size-1;
        deque[f]=x;
    }
    else
    {
        f=f-1;
        deque[f]=x;
    }
}

void enqueue_rear(int x)
{
     printf("enter an element \n");
     scanf("%d",&x);
    if((f==0 && r==size-1) || (f==r+1))
    {
        printf("deque is full");
    }
    else if((f==-1) && (r==-1))
    {
        r=0;
        deque[r]=x;
    }
    else if(r==size-1)
    {
        r=0;
        deque[r]=x;
    }
    else
    {
        r++;
        deque[r]=x;
    }

}

void display()
{
    int i=f;
    printf("\n Elements in a deque : ");

    while(i!=r)
    {
        printf("%d ",deque[i]);
        i=(i+1)%size;
    }
     printf("%d",deque[r]);
}

void getfront()
{
    if((f==-1) && (r==-1))
    {
        printf("Deque is empty");
    }
    else
    {
        printf("\nThe value of the front is: %d", deque[f]);
    }

}

void getrear()
{
    if((f==-1) && (r==-1))
    {
        printf("Deque is empty");
    }
    else
    {
        printf("\nThe value of the rear is: %d", deque[r]);
    }

}

void dequeue_front()
{
    if((f==-1) && (r==-1))
    {
        printf("Deque is empty");
    }
    else if(f==r)
    {
        printf("\nThe deleted element is %d", deque[f]);
        f=-1;
        r=-1;

    }
     else if(f==(size-1))
     {
         printf("\nThe deleted element is %d", deque[f]);
         f=0;
     }
     else
     {
          printf("\nThe deleted element is %d", deque[f]);
          f=f+1;
     }
}

void dequeue_rear()
{
    if((f==-1) && (r==-1))
    {
        printf("Deque is empty");
    }
    else if(f==r)
    {
        printf("\nThe deleted element is %d", deque[r]);
        f=-1;
        r=-1;

    }
     else if(r==0)
     {
         printf("\nThe deleted element is %d", deque[r]);
         r=size-1;
     }
     else
     {
          printf("\nThe deleted element is %d", deque[r]);
          r=r-1;
     }
}
