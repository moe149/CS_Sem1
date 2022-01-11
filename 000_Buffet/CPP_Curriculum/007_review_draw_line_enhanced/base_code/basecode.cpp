// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << "Please enter the line length: ";
	int l;
	cin >> l;
	cout << "Please enter your text: ";
	char text;
	cin >> text;
	cout << "Please enter the x-coordinate: ";
	int x;
	cin >> x;
	cout << "Please enter the y-coordinate: ";
	int y;
	cin >> y;
	gotoxy(x,y);
	for(int q = 0; q < l; q++){
	cout << text;
	}
}