/*
قم بعمل برنامج يقبل من المستخدمين رقمين
سنقوم بعمل Loop لطباعة Range من الأرقام بدايته ونهايته هي الأرقام التي كتبها المستخدم
بداية ال Range ونهايته لا تطبعها فمثلا لو الرقم الأول 1 والثاني 5 تقوم بطباعة 2, 3, 4
إذا كان الرقم الأول أكبر من الثاني قم بعكس الأرقام
لو كتب الشخص الرقم الأول 5 والثاني 1 نقوم بعكس الأرقام ونجعل ال Range يبدأ من 1 إلى 5
لا تقم بطباعة الأرقام الزوجية من ضمن ال Range
*/

#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "enter first number:";
	cin >> num1;
	cout << "enter second number:";
	cin >> num2;
	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num1 + 1; i < num2; i++) {
		if (i % 2 != 0) {
			if (i != num1 + 1) {
				cout << ",";
			}
			cout << i;
		}
	}
	cout << endl;
	return 0;
}

