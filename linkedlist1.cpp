#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
};
// to display items of the linked list
display(struct node**q)
{
	struct node*temp;
	temp=*q;
	printf(" \n YOUR DATA STORED TILL NOW IS : \n ");
	if(temp==NULL)
	{
		
		printf("\n %d",temp->data);
	}
	else
	{
		while(temp!=NULL)
		{
			printf("\n %d",temp->data);
			temp=temp->link;
		}
	}
}
// to find the total number of nodes in a linked list
int length(struct node **q)
{
	struct node*temp;
	temp=*q;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}
// to add a node at a specified position
addinmiddle(struct node **q,int x)
{
	struct node *temp,*p;
	int location,i=1,len;
	
	len=x;
	printf("\n Enter the location at which you want to store the new node /n");
	scanf("%d",&location);
	if (location>len)
	{
		printf("\n INVALID INPUT");
	}
	else
	{
		p=*q;
		temp->link=NULL;
		
		while(i<location)
		{
			p=p->link;
			i++;
		}
		temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the data for new node \n");
  	scanf("%d",&temp->data);
	temp->link=p->link;
	p->link=temp;
	}
}
// to add the node at the beginning of the linked list
addatbeg(struct node **q)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the data \n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(*q==NULL)
	{
		printf("\n your list was empty");
		*q=temp;
	}
	else
	{
		temp->link=*q;
		*q=temp;
	}
	
}
// to add the node at the last of the linked list
append(struct node **q)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));

	printf("\n Enter the data of your node \n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(*q==NULL)
	{
		printf("\n Your linked list is empty\n");
		*q=temp;
	}
	else
	{
			struct node* p;
			p=*q;
		while(p->link!=NULL)
		{
			p=p->link;
		}
			p->link=temp;
	}
}
main()
{
	struct node*ptr;
	ptr=NULL;
	int x;
	append(&ptr);
	append(&ptr);
	append(&ptr);
	append(&ptr);
	display(&ptr);
	x=length(&ptr);
	printf(" \n Total nodes till now = %d",x);
	addatbeg(&ptr);
	x=length(&ptr);
	printf(" \n Total node after addatbeg() = %d",x);
	display(&ptr);
	addinmiddle(&ptr,x);
	display(&ptr);
	x=length(&ptr);
	printf(" \n Total nodes after addinmiddle() = %d",x);
}
