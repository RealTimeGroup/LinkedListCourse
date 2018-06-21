#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int num;
	struct NODE * next;
}node;

void sort(node ** head);
int search(node * head,int val);

int main(){
	
	node * head=malloc(sizeof(node));
	//check if creation success
	
	node * Node1=malloc(sizeof(node));
	//check if creation success
	
	node * Node2=malloc(sizeof(node));
	//check if creation success
	
	node * Node3=malloc(sizeof(node));
	//check if creation success
	
	
	head->num=3;
	head->next=Node1;
	
	Node1->num=5;
	Node1->next=Node2;
	
	Node2->num=2;
	Node2->next=NULL;
	
	int find=search(head,5);
	
	find=search(head,10);
	
	sort(&head);
	node * temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->num);
		temp=temp->next;
	}
	
	
	return 0;
}

//==================

int search(node * head,int val){
	
	node * temp=head;
	
	while(temp!=NULL)
	{
		if(val==temp->num){
			puts("Value exists");
			return 1;
		}
		temp=temp->next;
	}
	
	puts("Value doesn't exist");
	return 0;
	
}

//=====================

void sort(node ** head){
	
	node * temp,*temp1;
	int val;
	temp=*head;
	while(temp!=NULL){
		
		temp1=temp->next;
		
		while(temp1!=NULL){
		   
		
			if(temp1->num<temp->num){
				val=temp->num;
				temp->num=temp1->num;
				temp1->num=val;
			
			}
		
			temp1=temp1->next;
		 
	  }
	  temp=temp->next;
	 }
}
	

	


