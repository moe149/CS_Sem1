// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << "Enter a number: ";
	int x;
	cin >> x;
	cout<< "Enter another number: ";
	int y;
	cin >> y;
	
	int answer = x*y;
	cout << "Multiplied is equal: " << answer;

}