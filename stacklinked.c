#include <stdio.h>
#include <stdlib.h>
struct stack
{
int data;
struct stack *next;
};
    struct stack *l;//l means stack main node
int main ()
{
    int ch=0;
    void push();
    void pop();
    void display();
    printf("\n*********Stack operations using linked list*********\n");
    do
    {
        printf("Choose the following options...\n");
        printf("\n 1.Push\n 2.Pop\n 3.Show\n 4.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4:exit(0);
                    printf("Exiting....");
                    break;
            default: printf("Please Enter valid choice ");
    }
}while(ch<=4);
}
void push ()
{
    int ele;

    struct stack *p;//p means a node to pointing a anoter node(node)
    p = (struct stack*)malloc(sizeof(struct stack));
    if(p==NULL)
    {
        printf("Over flow\n");
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&ele);
        if(l==NULL)//l=main node
        {
            p->data = ele;
            p -> next = NULL;
            l=p;
        }
        else
        {
            p->data = ele;
            p->next = l;
            l=p;

        }
        printf("Item pushed\n");

    }
}

void pop()
{
    int ele;
    struct stack *p;
    if (l == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        ele = l->data;
        p = l;
        l= l->next;
        free(p);
        printf("Item popped\n");

    }
}
void display()
{
    int i;
    struct stack *p;
    p=l;
    if(p == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while(p!=NULL)
        {
            printf("%d\n",p->data);
            p = p->next;
        }
    }
}
