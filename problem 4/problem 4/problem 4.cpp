// check if a>b or a=b or a<b by three ways

#include <iostream>
using namespace std;
//first way
int main()
{
	if (a > b)
		cout << " a is biger then b \n";
	if (a < b)
		cout << " a is smaller then b \n";
	if (a == b)
		cout << " a is equal  b \n";
	return 0
}
//second way
int main() {
	if (a == b)
		cout << "a is equal b \n";
	else
		if (a > b)
			cout << "a is biger then b \n";
		else (a < b)
			cout << " a is smaller then b \m";
	return 0
}
//third way
int main() {
	if (a == b)
		cout << " a is equal then b \n";
	else if (a > b)
		cout << " a is bigger then b \n";
	else (a < b)
		cout << " a is smaller then b \n";
	return 0
}
