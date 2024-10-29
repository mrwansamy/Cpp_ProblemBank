/*
قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
بعد طباعة النتيجة المطلوبة قم بطباعتها مرة أخرى بدون الأرقام الزوجية
// Output Needed
30
27
24
21
18
15
12
9
6
3

// Without Even Numbers
27
21
15
9
3
*/

#include <iostream>
using namespace std;
int main()
{
	for (int x = 30; x > 3; x -= 3) {
		cout << x << "\n";
	}
	cout << "\n";

	for (int x = 30; x >= 3; x -= 3) {
		if (x % 2 != 0) {
			cout << x << "\n";
		}
	}
	return 0;
}

