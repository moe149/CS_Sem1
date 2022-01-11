// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout << "Choose a character: ";
char flake;
cin >> flake;
gotoxy(50,3);
for(int j = 0; j < 50; j++){
	gotoxy(50,3+j);
	cout << flake << endl;
	sleep(2);

	//for(int k = 0; k < 50; k++){
		gotoxy(50,3+j);
		cout << " ";
	//}
}
cout << endl;
}
