/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While
// Output Needed
2
4
8
16
32
64
128
*/

#include <iostream>
using namespace std;
int main()
{
	int result = 2;
	for (int i = 0; i < 7;i++) {
		cout << result << "\n";
		result *= 2;
	}
	return 0;
}
//----------------------------------------------
int main() {
	int result = 2;
	int i = 0;
	while (i < 7) {
		cout << result << "\n";
		result*= 2;
		i++;
	}
	return 0;
}
