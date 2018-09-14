#include <iostream> 
using namespace std ; 
int main() 
{
	int num1 , num2 ; 
	cout << " enter your first number : " ;
	cin >> num1;
	cout << " enter your second number : " ;
	cin >> num2 ; 

	if ( num1 == num2 ) 
		cout << " the two are equal \n " ;
	else if ( num1 > num2 ) 
		cout << " the num1 is bigger than the num2 \n " ;
	else 
		cout << " the num2 is bigger than the num1 \n " ;

}