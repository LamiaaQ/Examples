#include <iostream>
using namespace std;

int sum(int num1 , int num2){
	return num1 + num2;
}
int inc(int& num){
	return ++num;
}

int main(){
	int a,b;
	cout << "insert two numbers to be added:"<< endl;
	cin >> a;
	cin >> b;
	
	cout << a << " + " << b << " = " << sum(a,b) << endl;
	cout << "Value of a is: " << a << endl;
	cout << "increment of a is: " << inc(a) << endl;
	cout << "increment of a after pass by refrence is: " << a << endl;
	return 0;
}
