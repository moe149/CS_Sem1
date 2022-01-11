// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	cout << "Please enter the the box width: ";
	int width;
	cin >> width;
	
	cout << "Please enter your character: ";
	char name;
	cin >> name;
	
	cout << "Please enter the box height: ";
	int height;
	cin >> height;
	
	int height2 = height;
	int width2 = width;
	int counter = 0;
	
	for(int y = 0; y < height; y++){
		cout << endl;
	
	for(int x = 0; x < width; x++){
	cout << name;
		}
	}

	
	for(int y = 2; y < height2; y++){
	cout << endl;
	gotoxy(2,counter + 8);
	counter++;
	for(int x = 2; x < width2; x++){
	cout << " ";
		}
	}
	cout << endl;
}