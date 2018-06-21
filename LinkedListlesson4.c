#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int num;
	struct NODE * next;
}node;

void delfromtail(node ** head);
void delafter(node ** first);
void delfromhead(node ** head);

int main(){
	
	node * head=malloc(sizeof(node));
	//check if creation success
	
	node * Node1=malloc(sizeof(node));
	//check if creation success
	
	node * Node2=malloc(sizeof(node));
	//check if creation success
	
	node * Node3=malloc(sizeof(node));
	//check if creation success
	
	node * Node4=malloc(sizeof(node));
	//check if creation success
	
	node * Node5=malloc(sizeof(node));
	//check if creation success
	
	head->num=2;
	head->next=Node1;
	
	Node1->num=3;
	Node1->next=Node2;
	
	Node2->num=4;
	Node2->next=Node3;
	
	Node3->num=20;
	Node3->next=Node4;
	
	Node4->num=25;
	Node4->next=Node5;
	
	Node5->num=30;
	Node5->next=NULL;
	
	puts("At the beginnig");
	node * temp=head;
	 while(temp!= NULL)
	 {
		 printf("%d\n",temp->num);
		 temp=temp->next;
	 }
	
	
	delfromtail(&head);
	
	puts("\nAfter deleting from tail");
	temp=head;
	while(temp!= NULL)
	{
		 printf("%d\n",temp->num);
		 temp=temp->next;
	}
	
	delfromhead(&head);
	
	puts("\nAfter deleting from head");
	temp=head;
	while(temp!= NULL)
	{
		 printf("%d\n",temp->num);
		 temp=temp->next;
	}
	
	delafter(&Node2);
	
	puts("\nAfter deleting from the middle");
	temp=head;
	while(temp!= NULL)
	{
		 printf("%d\n",temp->num);
		 temp=temp->next;
	}
	
	return 0;
}

//=====================

void delfromtail(node ** head){
	
	node * temp,*temp1;
	temp=*head;
	temp1=(*head)->next;
	
	while(temp1->next!=NULL){
		
		temp=temp1;
		temp1=temp1->next;
	}
	
	temp->next= NULL;
	free(temp1);	
}

//====================

void delfromhead(node ** head){
	
	node * temp;
	temp=*head;
	*head=temp->next;
	temp->next= NULL;
	free(temp);	
}

//=======================

void delafter(node ** first){
	
	node * temp;
	temp=(*first)->next;
	(*first)->next=temp->next;
	temp->next= NULL;
	free(temp);	
}



