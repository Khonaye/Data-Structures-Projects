#include "header.h"
#include <cmath>

bool Stack::push(int x)
{
    if (!isFull()) // check if the stack is full, if not push
	{
    	tos++; // point to the next position in Stack
        a[tos] = x; // insert element into Stack
    }
}
  
int Stack::pop()
{
    if (!isEmpty()) //Check if stack is not empty, if not pop element out
	{ 
		tos--; // pop
    }
}

int Stack::top()
{
    if (!isEmpty()) {
        int x = a[tos];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (tos == -1);
}

bool Stack :: isFull(){
	return (tos == MAX-1);
}

int Stack :: convertDecimal(){
	int decimal = 0;
	int weight = tos;
	for(int i = 0; i <= tos; i++){
		decimal += a[i] * pow(2,weight);
		
		weight--;
	}
	
	return decimal;
}
