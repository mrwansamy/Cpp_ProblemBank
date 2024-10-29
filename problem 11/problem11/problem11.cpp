//The Power Of A Number
/*
لديك Function تقبل منك Two Parameters عبارة عن أرقام
الرقم الأول هو ال Base والثاني هو ال Power أو ال Exponent
المطلوب جعل ال Function تطبع النتيجة مباشرة
*/
#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void power(int a, int b) {
	int result = pow(a, b);
	cout << "the result of \a" << a << " \a" << " power  \a" << b <<"\a" << " is:  \a" << result;
}
int main()
{
	int num1, num2;
	cout << "please enter the number you need to find the power result : \n";
	cin >> num1;
	cout << "please enter the power :\n";
	cin >> num2;
	
	power(num1, num2);
	return 0;

}