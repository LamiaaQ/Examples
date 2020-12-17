#include <iostream>
using namespace std;

int main(){
	
	int num = 0;
	cout << "insert a number:"<< endl;
	cin >> num;
	
	if(num<10)
	cout << "the inserted number is less than 10";
	else
	cout << "the inserted number is more than 10";
	
	return 0; 
}
