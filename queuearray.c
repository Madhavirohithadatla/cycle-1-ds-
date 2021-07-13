#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
int front = -1, rear = -1;
int queue[maxsize];
void main ()
{
    int ch;
        printf("\n*******Queue using array implementation*********\n");
        void insert();
        void delete();
        void display();
       do
       {
        printf("\n 1.insert an element\n 2.Delete an element\n 3.Display the queue\n 4.Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("\nEnter valid choice::\n");
        }
    }while(ch<=4);
}
void insert()
{
    int ele;
    printf("\nEnter the element:");
    scanf("%d",&ele);
    if(rear == maxsize-1)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear+1;
    }
    queue[rear] = ele;
    printf("\nValue inserted ");

}
void delete()
{
    int ele;
    if (front == -1 || front > rear)
    {
        printf("\nUNDERFLOW\n");
        return;

    }
    else
    {
        ele= queue[front];
        if(front == rear)
        {
            front = -1;
            rear = -1 ;
        }
        else
        {
            front = front + 1;
        }
        printf("\n value deleted ");
    }
}
void display()
{
    int i;
    if(rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {   printf("\n display the Queue::");
        for(i=front;i<=rear;i++)
        {
            printf("%d->",queue[i]);
        }
    }
}
