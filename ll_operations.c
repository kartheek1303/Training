#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
typedef struct Node node;
node* get_node(int val)
{
	node *nd = malloc(sizeof(node));
	nd->data=val;
	nd->next=NULL;
	return nd;
}
void display(node *head)
{
	
	node *temp=head;
	while(temp!=NULL)
	{
		printf("%d->", temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void append(node *head, int value)
{
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	node *new_node=get_node(value);
	temp->next=new_node;
}
void remove(node *head, int value)
{
	node *temp=head;
}
int main(void)
{
	/* Initialize nodes */
	node *head;
	node *one = get_node(10);
	node *two = get_node(20);;
	node *three = get_node(30);;
	
	/* Connect nodes */
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	head=one;
	display(head);
	append(head, 40);
	display(head);
	return 0;
}
