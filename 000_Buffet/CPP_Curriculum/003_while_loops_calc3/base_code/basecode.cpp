// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	int x;
	int y;
	char j;
	char quit;
	
	while (quit != 'q') {
	cout << "Please enter the first number: ";
	cin >> x;
	cout << "Please enter the second number: ";
	cin >> y;
	cout << "Please enter the operation: ";
	cin >> j;
	
	char plus = '+';
	char minus = '-';
	char multi = '*';
	char divi = '/';
	
	if(j == plus)
	{
		cout << x+y << endl;
	}
	if(j ==  minus) 
	{
		cout << x-y << endl;
	}
	
	if(j == multi) 
	{
		cout << x*y << endl;
	}
	if(j == divi)
	{
		cout << x/y << endl;
	}
	cout << "Please enter q to quit, or any other character to continue: ";
	cin >> quit;
	}
}






// 	cout << "Please enter the first number: " << endl;
// 	cin >> num1
	
// 	cout << "Please enter the second number: " << endl;
// 	cin >> num2
// 	while(true){
// 		cout << "You've been gnomed";
// 		cin >> y;
// 		x = x + 1;
// 	if(y == 'q') {
// 		cout << "You've been spared!";
// 		break;	
// 	}
// 	if(x == 100){
// 	break;
// 	}
// 	}
// }