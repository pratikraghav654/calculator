#include <iostream>
using namespace std;


int main()
{
	char op;
	float num1, num2;

  cout<<"Enter the operation you want to perform :"<<endl;
	// It allows user to enter operator
	// i.e. +, -, *, /
	cin >> op;

  cout<<"Enter two operands :"<<endl;
	// It allow user to enter the operands
	cin >> num1 >> num2;

	// Switch statement begins
	switch (op)
	{	
		// If user enter +
		case '+':
			cout <<"Answer of addition is"<<" "<< num1 + num2;
			break;
		
		// If user enter -
		case '-':
			cout <<"Answer is substraction is"<<" "<< num1 - num2;
			break;
		
		// If user enter *
		case '*':
			cout << "Answer of multiplication is"<<" "<<num1 * num2;
			break;
		
		// If user enter /
		case '/':
			cout << "Answer of division is"<<" "<<num1 / num2;
			break;
		
		// If the operator is other than +, -, * or /,
		// error message will display
		default:
			cout << "Error! operator is not correct";
			
	}
	// switch statement ends

	return 0;
}