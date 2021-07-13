#include <stdio.h>
int stack[100],i,j,n,top=-1;
void main ()
{
    int ch;
     void push();
     void pop();
     void show();
     printf("\n*****Stack operations using array****\n");
     printf("Enter no of elements:");
     scanf("%d",&n);
     do
     {
        printf("choose the following\n");
        printf("\n 1.Push\n 2.Pop\n 3.Show\n 4.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:show();
            break;
            case 4:printf("Exiting....");
            break;
            default:printf("Please Enter valid choice ");
        }
    }while(ch<=4);
}
void push()
{
    int ele;
    if(top==n)
    printf("\n Overflow");
    else
    {
        printf("\nEnter the value:");
        scanf("%d",&ele);
        top = top +1;
        stack[top]=ele;
    }
}
void pop ()
{
    if(top<=-1)
    printf("Underflow");
    else
    {
      printf("\nThe popped elements is %d::\n",stack[top]);
        top--;
    }
}
void show()
{
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}
