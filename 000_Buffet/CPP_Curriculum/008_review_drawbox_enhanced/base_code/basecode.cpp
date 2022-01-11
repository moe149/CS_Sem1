// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << "Please enter your box name: ";
	char name;
	cin >> name;
	
	cout << "Please enter the width of the box: ";
	int width;
	cin >> width;
	
	cout << "Please enter the height of the box: ";
	int height;
	cin >> height;
	
	cout << "Please enter the x-coordinate: ";
	int xcor;
	cin >> xcor;
	
	cout << "Please enter the y-coordinate: ";
	int ycor;
	cin >> ycor;
	
	
	for(int y = 0; y < height; y++){
		cout << endl;
	    for(int x = 0; x < width; x++){
	       gotoxy(x + xcor,y + ycor);
	       cout << name;
	    }
	}
}