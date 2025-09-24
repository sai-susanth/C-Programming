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

void sort_SLL()
{
	struct node *p1= head,*p2=head;
	int temp;
	
	for(int i=0;i<4;i++)
	{
		int j =i+1;
		p2 = p1->link;
		while(j<4 && p2!=NULL)
		{
			if(p2->data > p1->data)
			{
				temp = p1->data;
				p1->data = p2->data;
				p2->data = temp;
			}
			else
			{
				p2=p2->link;
				j++;
			}
		}
		p1= p1->link;
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
	int a[]={5,3,2,7};
	int pos = 2,value=1;
	create_ll(a);
	display();
	sort_SLL();
	display();
	
	
	return 0;
}
