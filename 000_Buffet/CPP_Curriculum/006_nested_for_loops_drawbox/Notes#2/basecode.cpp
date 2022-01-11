// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	for(int k = 1; k < 6; k++){
	    for(int i = 1; i < 3; i++){
	        gotoxy(i,k+3);
	        cout << "*";
	    }
	 //   cout << endl;
	}
}