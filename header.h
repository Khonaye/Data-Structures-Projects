#ifndef HEADER_H
#define HEADER_H

#define MAX 1000
class Stack {
	private:
	    int tos;
	  	int a[MAX]; // Maximum size of Stack
	public:
	     
	    Stack() { tos = -1; }
	    
	    bool push(int x);
	    
	    int pop();
	    
	    int top();
	    
	    bool isEmpty();
	    
	    bool isFull();
	    
	    int convertDecimal();
};

#endif
