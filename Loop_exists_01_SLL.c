#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
}*head=NULL;


struct node* create_ll(int a[])
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
	temp->link =head->link;
	return head;
}

void findLoop()
{
	//floydsAlgorithm
	struct node *slow=head,*fast=head;
	
	while(fast &&fast->link)
	{
		slow= slow->link;
		fast =fast->link->link;
		if(slow==fast)
		{
			printf("Loop exists between:%d and %d\n",slow->link->data,slow->data);
			return;
		}
	}
	
	printf("No loop found\n");
	
}



int main()
{
	int a[]={5,3,2,7};
	create_ll(a);
        findLoop();
	return 0;
}
