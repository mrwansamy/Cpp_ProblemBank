//اعدل الكود بحيث يطبع الارقام من 2ل8 بس

#include <iostream>
using namespace std;

int main()
{
	int index = 2;

	for (;;) // <= Do Not Edit This Line
	{
		if (index > 8) {
			break;
		}
		cout << index << "\n"; // From 2 To 10
		index++;
	}
	return 0;
}
// Output
//2
//3
//4
//5
//6
//7
//8
