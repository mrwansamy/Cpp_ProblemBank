/*
قم بتعريف المتغيرات في بداية ال Code لتظهر النتائج كما في المخرجات لا تقم بالتعديل على السطرين تحت التعليق 
السطر الثالث غير موجود ويجب أن تكتبه لتظهر جميع المخرجات كما في السطور التاليه
// Output

"My Age Is: 40"
"10 Years Ago My Age Was: 30"
"After 10 Years My Age Will Be: 50"

*/
#include <iostream>
using namespace std;

int main()
{
	// Write Your Code Here
	int age , period=10 , after=10 ;
	cout << "please enter your age at this time and thanks \n";
	cin >> age;
	


	// Do Not Edit The Next 2 Lines
	cout << "My Age Is: " << age << "\n";
	cout << period << " Years Ago My Age Was: " << age - period << "\n";
	// Add The Third Line Below
	cout << after << "after 10 years my age will be : " << age + after << "\n";

	return 0;
}