//Money Needed Per Day
/*
لديك Function تقوم بحساب المال الذي تحتاجه يوميا للخروج من بيتك والتنزه والتعلم
ال Function تقبل منك Two Parameters
الأول هو المرتب الذي تقبضه ونوعه Float والثاني هو عدد الأيام ونوعه Integer
لكل اسبوع من الأيام هناك يومين أجازة لن تخرج فيهم لذلك لا نحتاج فيهم مصروفات
يجب أن يتم الاسبوع حتى تحسب يومين بدون خروج وغير ذلك تحتسب كما هي
قم بحساب المبلغ الذي تحتاجه لكل يوم خروج من المرتب الخاص بك


*/
#include <iostream>
using namespace std;

// Write Your Function Here
float money(float salary, int days) {
    int daysbreak = 2;
    int daysinweek = days / 7;
    int remainingDays = days % 7;
    int dayscalculate = daysinweek * (7 - daysbreak) + remainingDays;
    int moneyneedbeerweek = salary / dayscalculate;
    return moneyneedbeerweek;
}
int main()
{
    float salary;
    cout << "please enter your salary : ""\n";
    cin >> salary;

    int days;
    cout << "Days in week is 5 right? (1 yes / 0 no) \n";
    cin >> days;

    if (days == 1) {
        cout << "ok the days in week you work is 5 so :\n";
    }
    else {
        cout << "Sorry, how many days you work ber week?\n";
        cout << "please enter number of days you work : \n";
        cin >> days;
    }

    cout << "The amount of money you need is here :" << money(salary, days) << "\n";
    return 0;
}