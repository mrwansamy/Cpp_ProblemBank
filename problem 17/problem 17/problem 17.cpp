/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While
// Output Needed
10
100
10000
100000000
*/

#include <iostream>
using namespace std;

int main()
{
	int result = 10;
	for (int i = 1; i <= 4; i++) {
		cout << result << "\n";
		result *= 10;

	}
	return 0;
}
//-------------------------------------------------------------
int main() {
	int result = 10;
	int i = 1;
	while (i <= 4) {
		cout << result << "\n";
		result *= 10;
		i++;
	 }
	return 0;
}

