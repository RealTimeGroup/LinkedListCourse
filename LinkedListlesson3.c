#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int num;
	struct NODE * next;
}node;

void addtohead(node ** head,node * new );

void addbetween(node ** frist,node ** next, node * new );

void addtotail(node ** head,node * new);


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
	Node2->next=NULL;
	
	
	Node3->num=5;
	Node3->next=NULL;
	
	Node4->num=20;
	Node4->next=NULL;
	
	Node5->num=25;
	Node5->next=NULL;
	
	puts("Before");
	node * temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->num);
		temp=temp->next;
	}

    addtohead(&head,Node4);	
	addbetween(&Node1,&Node2,Node3);	
	addtotail(&head,Node5);
	
	puts("\nAfter");
	temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->num);
		temp=temp->next;
	}
	return 0;
}

//=====================

void addbetween(node ** first,node ** next, node * new ){

	new->next=*next;
	(*first)->next=new;
   
	
}
//===============

void addtohead(node ** head,node * new ){

	new->next=*head;
	*head=new;
   
	
}
//================

void addtotail(node** head,node* new){
	node* temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->next=new;
	new->next=NULL;
}
