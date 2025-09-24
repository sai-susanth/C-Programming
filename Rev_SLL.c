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
	for(int i=0;i<5;i++)
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
	
	for(int i =0 ;i<5;i++)
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


void rev_SLL()
{
	struct node *prev=NULL,*next=head;
	while(head!=NULL)
	{
		next=head->link;
		head->link = prev;
		prev=head;
		head=next;
	}
	head=prev;
}


void rev_data_SLL()
{
	struct node *start=head,*end=head;
	int temp;
	unsigned int count_nodes =5,pos=1; //static count of nodes for this time instant
	
	for(int i =0;i<(count_nodes/2);i++)
	{
	        pos=1;
		while(pos<(count_nodes-i))
		{
			end= end->link;
			pos++;
		}
		
		
		temp = start->data;
		start->data = end->data;
		end->data= temp;
		
		start = start->link;
		end=head;
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
	int a[]={2,3,5,7,9};
	int pos = 2,value=1;
	create_ll(a);
	display();
	rev_SLL();
	display();
	rev_data_SLL();
	display();
	return 0;
}
