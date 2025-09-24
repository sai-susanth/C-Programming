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

void findMiddle_SLL()
{
	struct node *slow=head,*fast=head;
	while(fast!=NULL)
	{
		fast=fast->link;
		if(fast!=NULL)
		{
		 fast= fast->link;
		 slow=slow->link;
		}
	}
	
	printf("Middle element is :%d\n",slow->data);
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
	create_ll(a);
	display();
	findMiddle_SLL();
	return 0;
}
