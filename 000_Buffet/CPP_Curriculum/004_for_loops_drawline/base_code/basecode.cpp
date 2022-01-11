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
cout << "Please enter h for horizontal, or v for vertical: ";
char k;
cin >> k;

for(int l = 0; l <= j; l++){

if(k == 'h'){
	cout << x;
}
if(k == 'v'){
	cout << x << endl;
}
}
}