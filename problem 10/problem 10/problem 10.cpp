//Functions In Wrong Place
/*
لديك مجموعة من ال Function تقوم ببعض العمليات الحسابية البسيطة
هناك مشكلة في عملها بسبب مكان ال Function
نريد حل المشكلة بدون التعديل على مكان ال Function
لا تقم بتعديل أي شيء من تحت سطر التعليق الخاص بالتعديل
*/
/* 
#include <iostream>
using namespace std;

// Do Not Edit Code Below This Line

int main()
{
	cout << plusnums(50, 60) << "\n"; // 110
	cout << minusnums(150, 50) << "\n"; // 100
	cout << divnums(100, 5) << "\n"; // 20
	return 0;
}

int plusnums(int numone, int numtwo)
{
	return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
	return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
	return numone / numtwo;
} */
#include <iostream>
using namespace std;

// Do Not Edit Code Below This Line
int plusnums(int numone, int numtwo)
{
	return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
	return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
	return numone / numtwo;
}
int main()
{
	cout << plusnums(50, 60) << "\n"; // 110
	cout << minusnums(150, 50) << "\n"; // 100
	cout << divnums(100, 5) << "\n"; // 20
	return 0;
}

