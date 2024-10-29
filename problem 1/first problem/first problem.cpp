//swap between two numbers x, y Ex : x = 10 y = 20 output : x = 20 y = 10
#include <iostream>  
using namespace std;
int main() {
	int x = 10, y = 20;
	x = x + y; // الآن x = 30
	y = x - y; // الآن y = 10
	x = x - y; // الآن x = 20
	cout << "after edit   \n x="  << x << ", y = " << y ;


		return 0;

}