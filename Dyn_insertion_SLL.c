#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
}*head=NULL;


void create_ll(int a[])
{
	struct node *newnode,*temp;
	for(int i=0;i<4;i++)
	{
		newnode =(struct node *)malloc(sizeof(struct node));
		newnode->data =a[i];
		newnode->link =NULL;
		
		if(head==NULL)
		{
		   head=temp=newnode;
		}
		else
		{
		  temp->link=newnode;
		  temp=newnode;
		}
	}
}

void create_stack_behav(int a[])
{
	struct node *newnode=NULL;
	
	for(int i =0 ;i<4;i++)
	{
		newnode =(struct node*)malloc(sizeof(struct node));
		newnode->data =a[i];
		newnode->link =NULL;
		
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			newnode->link=head;
			head=newnode;
		}
	}
}


void dyn_insert(int pos,int value)
{
	struct node *temppos=head,*newnode=NULL;
	while(pos>2)
	{
		temppos= temppos->link;
		pos--;
	}
	
	if(pos==2)
	{
		newnode =(struct node *)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->link =temppos->link;
		temppos->link= newnode;
	}
	if(pos==1)
	{
		newnode =(struct node *)malloc(sizeof(struct node));
		newnode->data =value;
		newnode->link =head;
		head = newnode;
	}
	if(pos>4)
	{
		printf("There is no node at the current time to reach out\n");
		return;
	}
}

void display()
{
	struct node *tempHead = head;
	while(tempHead!=NULL)
	{
		printf("%d\t",tempHead->data);
		tempHead= tempHead->link;
	}
	printf("\n");
}

int main()
{
	int a[]={2,3,5,7};
	int pos = 2,value=1;
	create_ll(a);
	display();
	//create_stack_behav(a);
	//display();
	dyn_insert(pos,value);
	display();
	
	
	return 0;
}
