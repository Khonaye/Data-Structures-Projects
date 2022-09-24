/*
Author: Mr L. Ntikinca
Date: 24/07/2022

				PSUEDO CODE
	int isBinaryDigit(char x)
		int y;
		if(x == '0'){
			y = 0;
		}
		else if(x == '1'){
			y = 1;
		}
		else{
			y = 2; 
		}
		return y;
	END isBinaryDigit() function
	
				
	main() function
		Variable:
			input : string
			object : Stack instance
		prompt user: "Enter a binary number"
		read user input and store it to variable 'input'
		
		for (int i = 0; i < input.size(); i++)
			if(isBinaryDigit(input[i]) == 2)
				display error message
				terminate program
			else
				push 'isBinaryDigit(input[i])' into a stack
		end loop
		
		Use stack function 'convertDecimal()' to calculate decimal digit and print it
		
		terminate the program
		
	END main() function

*/
#include "header.h"
#include <iostream>
#include <string>
using namespace std;


int isBinaryDigit(char x){
	int y;
	if(x == '0'){
		y = 0;
	}
	else if(x == '1'){
		y = 1;
	}
	else{
		y = 2; //this represents an unbinary digit which will act and error
	}
	return y;
}

int main(){
	string input; //chose datatype 'string' so I could slice it and verify each digit if it's 0 or 1
	
	Stack object; //Stack object
	
	cout << "Enter a binary number: ";
	
	cin >> input;
	
	cout << endl;
	
	//Verify if all the digits entered are only 0s and 1s
	for(int i = 0; i < input.size(); i++){
		
		if(isBinaryDigit(input[i]) == 2){ //If true it symbolizes that digit input[i] isn't either 0 or 1
		
			cout << "The number '" << input[i] << "' you entered is not a binary number. Try again...." << endl; // report an error message to a user
			
			return 0; //terminate program
		}
		else{
			object.push(isBinaryDigit(input[i])); //push a digit in a stack
		}	
	}
	
	
	cout << "The equivalent decimal number is:  " << object.convertDecimal() << endl; // use a stack to convert
	
	return 0; //Terminate the program
}
