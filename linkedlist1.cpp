#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
};
display(struct node**q)
{
	struct node*temp;
//	temp=(struct node*)malloc(sizeof(struct node));
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
	
}
