/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While
// Output Needed
0
2
4
6
8
14
16
18
*/


#include <iostream>
using namespace std;
int main(){
	int x = 0;
	while (x < 18) {
		if ((x <= 8 && x % 2 == 0) || (x >= 14 && x % 2 == 0)) {
			cout << x << endl;
		}
		x++;
	}
	return 0;
}
//---------------------------------------------------------------------------
int main() {
	for (int x = 0; x <= 18; x++) {
		if ((x <= 8 && x % 2 == 0) || (x >= 14 && x % 2 == 0)) {
			cout << x << endl;
		}
	}
	return 0;
}

