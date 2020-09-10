#include<stdio.h>
#include<stdlib.h>
struct node{
	int num;
	struct node *link;
};
// adding a new node at the end of the linked list
 append ( struct node **q,int x)
{
	struct node *temp,*y;
	int a;
	a=sizeof(struct node);
	temp=*q;
	if(*q=NULL)
	{
		temp=(struct node *)malloc(a);
		temp->num=x;
		temp->link=NULL;
		*q=temp;
		
	}
	else
	{
	temp=*q;
	while(temp->link!=NULL)
	{
		temp=temp->link;
		y=(struct node*)malloc(sizeof(struct node));
		y->num=x;
		y->link=NULL;
		temp->link=y;
	}}
}
main()
{
	struct node *ptr;
	ptr=NULL;
	append(&ptr,21);
}
