/*Author: Hermantoni
**Learn Together
*/

#include <iostream>
using std::cout;
using std::endl;

int loop_for(){
	for(int a=0; a<10; a++){
		cout << a << endl;
	}
	return 0;
}

int loop_while(){
	int a = 10;
	while(a<20){
		cout << a << endl;
		a += 1;
	}
	return 0;
}

int main(int argc, char** argv) {
  cout << "hello" << endl;
  loop_for();
  cout << "hello" << endl;
  loop_while();
  return 0; 
}
