/*
	قم بعمل Loop يطبع الأرقام من صفر حتى 10
المطلوب عمل ال Loop بواسطة For, While, Do While
*/
//for loob
#include <iostream>
using namespace std;

int main() {
   for (int i = 0; i <= 10; i++) {
       cout << i << " ";
    }
    return 0;
}
// -----------------------------------------
//while loop
int main() {
    int i = 0;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    return 0;
}
//-----------------------------------------
//do while loop
int main() {
    int i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);
}
