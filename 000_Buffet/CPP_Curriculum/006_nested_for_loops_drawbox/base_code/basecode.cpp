// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
cout << "Please enter box width: ";
int x;
cin >> x;
cout << "Please enter box name: ";
char j;
cin >> j;
cout << "Please enter the box height: ";
int l;
cin >> l;

for(int w = 0; w < l; w++){
    cout << endl;
    for(int h = 0; h < x; h++){ 
        cout << j;
    }
}
}