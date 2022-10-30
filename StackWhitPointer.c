#include <stdio.h>
#include <stdlib.h>
//if you want test code  tested in this wbsite url:https://pythontutor.com/visualize.html#mode=edit
//function nedd : push , pop , getTop  , isEmpty
int *ptr;
int top = 0 ,  rlc = 0;
void Push(int data){

    rlc++;
    ptr = realloc(ptr , rlc * 4);
    *(ptr + top) = data;
    top++;
}

int isEmpty(){
if(top == 0)
return 1;

return 0;
}


void Pop(){
if(isEmpty() == 1)
    printf("STACK_IS_EMPTY");
else{
    
    rlc--;
    top--;
    *(ptr + top) = '\0';
    ptr = realloc(ptr , rlc * 4);
}
    
}

int  getTop()
    
{
if(isEmpty() == 1){
    printf("STACK_IS_EMPTY");
return 0;
}
else
return *(ptr + top - 1);   
 
}


int main(){
Push(4);
Push(5);
Pop();

}