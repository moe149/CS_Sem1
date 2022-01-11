// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	
	cout << "Please enter your character: ";
	char name;
	cin >> name;
	
	cout << "Please enter the first number: ";
	int x;
	cin >> x;

	cout << "Please enter the second number: ";
	int y; 
	cin >> y;

	cout << "Please enter the operation: ";
	char j;
	cin >> j;
	
	int width = 12;

	int height = 5;
	
	int xcord = 20;
	 
	int ycord = 7;
	
	int height2 = height;
	int width2 = width;
	int counter = 0;
	
	for(int y = 0; y < height; y++){
		cout << endl;
		gotoxy(xcord,counter + ycord);
		counter++;
	for(int x = 0; x < width; x++){
	cout << name;
		}
	}

	counter = 0;
	for(int y = 2; y < height2; y++){
	cout << endl;
	gotoxy(xcord + 1,counter + ycord + 1);
	counter++;
	for(int x = 2; x < width2; x++){
	cout << " ";
		}
	}
	cout << endl;
	
	char plus = '+';
	char minus = '-';
	char multi = '*';
	char divi = '/';
	
	if(j == plus)
	{
		gotoxy(xcord + 4, ycord + 2);
		cout << x << "+"<< y << "="<< x+y << endl;
	
	}
	if(j ==  minus) 
	{
		gotoxy(xcord + 4, ycord + 2);
		cout << x << "-" << y << "="<<  x-y << endl;
	}
	
	if(j == multi) 
	{
		gotoxy(xcord + 4, ycord + 2);
		cout << x << "*"<< y << "="<< x*y << endl;
	}
	if(j == divi)
	{
		gotoxy(xcord + 4, ycord + 2);
		cout << x << "/"<< y << "="<< x/y << endl;
	}
	gotoxy(1,30);
}