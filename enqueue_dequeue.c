#include<stdio.h>
#define size 5

//Queue Data Structure in Arrays

int queue[size],front=-1,rear=-1;
//front holds the frontmost element, rear holds the rearmost element.

void enQueue(int data){//We will increase the rear by 1 in each element.
	
	if(rear==size){
		printf("\nQueue is full.");
	}
	else{
		
		if(front==-1){//If queue is empty
			front=0;
			
		}
		
		rear++;
		queue[rear]=data;
	}
	
}

void deQueue(){
	
    if(front==-1||front>rear){
    	printf("\nQueue is empty.");
    	front=-1;
    	rear=-1;
	}
	else{
		front++;
	}
	
	
}
void display(){
	
	int i;
	for(i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
	
}


int main(){
	
	int n,data;
	
	while(1){
		
		printf("\n1-enQueue\n2-deQueue:\n");
		scanf("%d",&n);
		switch(n){
			
			case 1:
				printf("Data to be added to the queue:");
				scanf("%d",&data);
				enQueue(data);
				display();
				break;
		    case 2:
			    deQueue();
				display();
				break;
						
		}
		
		
	}
	
	
	
	return 0;
}
