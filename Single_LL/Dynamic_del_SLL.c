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


void dyn_delete(int pos)
{
	struct node *prev=head,*next=head->link;
	while(pos>2)
	{
	        prev = next;
		next = next->link;
		pos--;
	}
	
	if(pos==2)
	{
		prev->link=next->link;
		free(next);
		next =NULL;
	}
	if(pos==1)
	{
		head= head->link;
		free(prev);
		prev=NULL;
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
	int pos = 1,value=1;
	create_ll(a);
	display();
	dyn_delete(pos);
	display();
	
	
	return 0;
}
