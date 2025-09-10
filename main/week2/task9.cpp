#include <iostream>

using namespace std;
// نريد عمل متغيرين يقبلو مدخلات من المستخدم وبعدها نريد حاصل ضربهما
int main()
{
    // write your code here
    int first_number, second_number;
    cout << "\nenter the first number\n";
    cin >> first_number;
    cout << "enter the second number\n";
    cin >> second_number;
    cout << "\n"
    << first_number 
    << " X " << second_number <<
     " = " << first_number * second_number;

    // num1 10
    // num2 12

    // needed output =120 [10*12]
    return 0;
}