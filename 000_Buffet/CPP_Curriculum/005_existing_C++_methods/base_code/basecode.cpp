// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout << "Please enter the symbol: ";
char x;
cin >> x;
cout << "Please enter the length: ";
int j;
cin >> j;
cout << "Please enter h for horizontal, v for vertical, or d for diagonal: ";
char k;
cin >> k;
int dow = 5;
int rig = 1;

for(int g = 0; g <= j; g++){

if(k == 'h'){
	cout << x;
}
if(k == 'v'){
	cout << x << endl;
}
}
for(int l = 0; l != j; l++){
	gotoxy(rig,dow);
	rig = rig+1;
	dow = dow+1;
	cout << x << endl;
}
}