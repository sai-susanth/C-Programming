#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
}*head=NULL;


struct node* create_ll(int a[],struct node *head)
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
	return head;
}

void merge(struct node *head2,struct node *head1)
{
	struct node *temp = head1;
	while(temp->link!=NULL)
	{
		temp = temp->link;
	}
	temp->link= head2;
	
}


void display(struct node *head)
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
	int a[]={5,3,2,7};
	int b[]={1,2,4,6};
	struct node *head2 =NULL;
	struct node *head1 =create_ll(a,head);
	display(head1);
	head2 =create_ll(b,head2);
	display(head2);
        merge(head2,head1);
        display(head1);
	
	return 0;
}
