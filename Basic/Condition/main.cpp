/*Author: Hermantoni
**Learn Together
*/

#include <iostream>
using std::cout;
using std::endl;

int Condition_if(){
	int a = 10, b = 20;
	if(a > b){
		cout << " a = "; cout << a ; cout << " bigger than ";
		cout << " b = "; cout << b << endl;
	}
	else if(a == b){
		cout << " a = "; cout << a ; cout << " equals ";
		cout << " b = "; cout << b << endl;
	}
	else {
		cout << " a = "; cout << a ; cout << " smallest than ";
		cout << " b = "; cout << b << endl;	
	}
	return 0;
}

int Condition_case(){
	int a = 2;
	switch(a){
		case 1: 
			cout << " case 1 selected" << endl;
			break;
		case 2:
			cout << " case 2 selected" << endl;
			break;
		case 3:
			cout << " case 3 selected" << endl;
			break;
	}
	return 0;
}

int main(int argc, char** argv) {
  cout << "hello" << endl;
  Condition_if();
  Condition_case();
  return 0; 
}
