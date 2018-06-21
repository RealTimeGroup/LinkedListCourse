#include <stdlib.h>

typedef struct NODE{
	int num;
	struct NODE * next;
}node;



int main(){
	
	
	node mynode;
	
	
	mynode.num=5;
	mynode.next=NULL;
	
	
	
	node * mynode2=malloc(sizeof(node));
	
	
	
	if(mynode2!=NULL)
	{
		mynode2->num=5;
		mynode2->next=NULL;
	}
	
	

	return 0;
}

