// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	cout << "Please enter the first number: ";
	int x;
	cin >> x;
	
	cout << "Please enter the second number: ";
	int y;
	cin >> y;
	
	cout << "Please enter the operation: ";
	char j;
	cin >> j;
	char plus = '+';
	char minus = '-';
	char multi = '*';
	char divi = '/';
	
	if(j == plus)
	{
		cout << x+y;
	}
	if(j ==  minus) 
	{
		cout << x-y;
	}
	
	if(j == multi) 
	{
		cout << x*y;
	}
	if(j == divi)
	{
		cout << x/y;
	}
}
