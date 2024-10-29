/*
* قم بعمل Loop لنطبع القيم المطلوبة في المثال بالأسفل
قم بعمل المطلوب مرة بإستخدام For ومرة بإستخدام While
// Output Needed
2
6
14
30
62
126

*/

#include <iostream>
using namespace std;

int main() {
    int result = 2;

    for (int i = 0; i < 7; i++) {
        cout << result << "\n";
        result = result * 2 + 2;  
    }

    return 0;
}
//----------------------------------------
#include <iostream>
using namespace std;

int main() {
    int result = 2;
    int i = 0;

    while (i < 6) {  // تعديل العدد إلى 6 مرات للطباعة
        cout << result << "\n";
        result = result * 2 + 2;  // تعديل الصيغة
        i++;
    }

    return 0;
}
