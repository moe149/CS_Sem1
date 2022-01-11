// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	char Presnt;
	char flake = '*';
	char Act;
	cout << "T'was a Christmas Night, the snow grew cold and the children were:  " << endl;
	cout << "Good or Bad?(g or b): ";
	cin >> Presnt;

		if(Presnt == 'g'){
			cout << "Are you sure?";
		}
		if(Presnt == 'b'){
			cout << "Try again next Year!";
		}
		cin >> Act;
			if(Act == 'y'){
			cout << "May your christmas be filled with joy! & Presents ;)";
			}
			
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 7; y++){
		gotoxy(50+y,10+x);
		cout << '|';
		}
	}
	// Presnt Box #1
	for(int x = 0; x < 1; x++){
		for(int y = 0; y < 5; y++){
			gotoxy(51+y,11+x);
			cout << "G";
		}
	}
	//Presnt Box #2	
	for(int x2 = 0; x2 < 3; x2++){
		for(int y2 = 0; y2 < 7; y2++){
		gotoxy(40+y2,10+x2);
		cout << '|';
		}
	}
	for(int x2 = 0; x2 < 1; x2++){
		for(int y2 = 0; y2 < 5; y2++){
			gotoxy(41+y2,11+x2);
			cout << "G";
		}
	}
	// Presnt Box #3
	for(int x3 = 0; x3 < 3; x3++){
		for(int y3 = 0; y3 < 7; y3++){
		gotoxy(30+y3,10+x3);
		cout << '|';
		}
	}
	for(int x3 = 0; x3 < 1; x3++){
		for(int y3 = 0; y3 < 5; y3++){
			gotoxy(31+y3,11+x3);
			cout << "G";
		}
	}
		
	// snowflake part
	for(int j = 0; j < 10; j++){
		gotoxy(58,5+j);
		cout << '*' << endl;
		sleep(2);
		gotoxy(58,5+j);
		cout << " "<<endl;
	}
	// snowflake part #2
	for(int j = 0; j < 10; j++){
		gotoxy(48,5+j);
		cout << '*' << endl;
		sleep(2);
		gotoxy(48,5+j);
		cout << " " << endl;
	}
	// snowflake part #3
	for(int j = 0; j < 10; j++){
		gotoxy(38,5+j);
		cout << '*' << endl;
		sleep(3);
		gotoxy(38,5+j);
		cout << " ";
	}
}
