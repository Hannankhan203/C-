#include<iostream>
using namespace std;
int main(){
	char op;
	float num1, num2;
	cout<<"Select your operator : '+, -, *, /' \n";
	cin>>op;
	cout<<"Enter two operands : \n";
	cin>>num1>>num2;
	switch(op){
		case '+':
			cout<<num1<<"+"<<num2<<"="<<num1 + num2;
			break;
		case '-':
			cout<<num1<<"-"<<num2<<"="<<num1 - num2;
			break;
		case '*':
			cout<<num1<<"*"<<num2<<"="<<num1 * num2;
			break;
		case '/':
			cout<<num1<<"/"<<num2<<"="<<num1 / num2;
			break;
		default:
			cout<<"Error! Invalid operator";
	}
	return 0;
}