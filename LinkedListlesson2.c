	
	#include <stdlib.h>

typedef struct NODE{
	int num;
	struct NODE * next;
}node;



int main(){
	
	
	node *Node1;
	
	
	Node1->num=5;
	Node1->next=NULL;
	
	
	
	//go to next
	node * temp=Node1;
	temp=temp->next;
	//do something with temp
	
	

	return 0;
}


	
