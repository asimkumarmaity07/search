#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int isFull(){
	return top == MAX-1;
}

int isEmpty(){
	return top==-1;
}

void push(int value){
	if(isFull()){
		printf("stack overflow \n ");
	}
	else{
		top++;
		stack[top]=value;
		printf("pushed = %d \n " , value);
	}
}

int pop(){
	if(isEmpty()){
		printf("no element to pop \n ");
		return -1;
	}
	else{
		int popped_value = stack[top];
			top--;
			return popped_value;
	}
}

int peek(){
	if(isEmpty()){
		printf("stack is empty \n ");
		return-1;
	}
	return stack[top];
}

void display(){
	if(isEmpty()){
		printf
		("stack is empty \n");
		return;
	}
	printf("stack elements \n");
	for(int i=top;i>=0;i--){
			printf("%d" , stack[i]);
	}
	printf("\n");
}

int main(){
	pop();
	push(10);
	push(20);
	push(30);
	display();
	printf("popped = %d \n " , pop());
	printf("top element = %d \n " , peek());
	display();
	return 0;
}





