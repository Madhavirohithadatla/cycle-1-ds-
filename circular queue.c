#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;
int main()
{
	int ch,ele,i,data;
	printf("*****Circular Queue*****");
	printf("\n choose the following:-");
	do{
		printf("\n\n 1 Insert the Data in Queue\n 2 show the Data in Queue \n 3 Delete the data from the Queue\n 0 Exit\n");
		printf("Enter your choice::");

		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter the number of data:");
				scanf("%d",&ele);
				for(i=0;i<ele;i++)
                {
                    printf("\nEnter your data:");
				scanf("%d",&data);
					enqueue(data);
                }
				break;
			case 2:print();
				break;
			case 3:dequeue();
				break;
			case 0:exit(0);
				break;
			default:printf("\nIncorrect Choice");

		}
	}while(ch<=3);
}
void enqueue(int d) //Insert elements in Queue
{
	struct node* p;//p is a node;
	p = (struct node*)malloc(sizeof(struct node));
	p->data = d;
	p->next = NULL;
	if((r==NULL)&&(f==NULL))
	{
		f = r = p;
		r->next = f;
	}
	else
	{
		r->next = p;
		r = p;
		p->next = f;
	}
}
void dequeue() // Delete an element from Queue
{
	struct node* p;
	p = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else if(f == r){
		f = r = NULL;
		free(p);
	}
	else{
		f = f->next;
		r->next = f;
		free(p);
	}
}
void print(){ // Print the elements of Queue
	struct node* p;
	p = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else{
		do{
			printf("\n%d",p->data);
			p = p->next;
		}while(p != f);
	}
}
