#define MAX 50

//function nedd : push , pop , getTop  , isEmpty
int stack[MAX];
int top = 0;
void Push(int data){

	if(top == MAX)
		printf("STACK_OVER_FLOWE");
	else{
	top++;
	stack[top] = data;
	}


}

int isEmpty(){
if(stack[top - 1] == '\0')
return 1;

return 0;
}


void Pop(){
if(isEmpty() == 1)
	printf("STACK_IS_EMPTY");
else{
stack[top] = '\0';
top--;
}
	
}

int getTop()
	
{
return stack[top];	
}
