/*
قم بعمل Function تقبل منك Two Parameters عبارة عن Integers في حالة كان الرقم الأول يساوي الثاني قم بجمع الرقمين
في حالة كان الرقم الأول أكبر من الثاني قم بطرح الرقم الأول من الثاني 
في حالة كان الرقم الأول أصغر من الثاني قم بطرح الرقم الثاني من الأول
*/
#include <iostream>
using namespace std;

// Write Your Function Here
int calcspecial(int first, int second) {
	if (first == second) {
		return (first + second);
	}
	else if (first > second) {
		return (first - second);
	}
	else
		return (second - first);
}
int main()
{
	int a, b;

	cout << "please enter first number : " << "\n";
	cin >> a;
	cout << "please enter second number : " << "\n";
	cin >> b;

	"\n \n \n";

	cout << "calcspecial first number is :" << a << "\t" << "and second number is : " << b << "\t" << "so after process we get :" << calcspecial(a, b) << "\n";
		
		return 0;
}