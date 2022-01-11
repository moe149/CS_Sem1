// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

gotoxy(3,5);
cout << '@';
gotoxy(3+1,5);
cout << 'R';
gotoxy(3+2,5);
cout << 'M';
gotoxy(3+3,5);
cout << 'A';
gotoxy(3+4,5+2);
cout << 'N';
gotoxy(3,5+3);
cout << 'D';
gotoxy(3,5+4);
cout << 'R';
gotoxy(3,5+5);
cout << 'E';
gotoxy(3,5+6);
cout << 'W';
	for(int i = 0; i < 6; i++){
		gotoxy(3,5+i);
		cout << 'N';
	}
}














// cout << "Please enter the symbol: ";
// char x;
// cin >> x;
// cout << "Please enter the length: ";
// int j;
// cin >> j;
// cout << "Please enter h for horizontal, v for vertical, or d for diagonal: ";
// char k;
// cin >> k;
// int dow = 5;
// int rig = 1;

// for(int g = 0; g <= j; g++){

// if(k == 'h'){
// 	cout << x;
// }
// if(k == 'v'){
// 	cout << x << endl;
// }
// }
// for(int l = 0; l != j; l++){
// 	gotoxy(rig,dow);
// 	rig = rig+1;
// 	dow = dow+1;
// 	cout << x << endl;
// }
// }