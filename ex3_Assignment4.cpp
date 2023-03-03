/*Bài 3. Viết chương trình giả lập máy tính cơ bản với các phép tính cộng, trừ, nhân, chia, chia lấy dư, (phép chia chính xác đến số thập phân thứ 7):
-  Nhập 2 số A và B, in ra các phép tính cộng, trừ, nhân, chia, chia lấy dư của A cho B.
-  Viết các phép tính trên mỗi hàm riêng, truyền con trỏ cho các hàm.
*/
#include <iostream>
#include <iomanip> // include std::setprecision
#include <cmath>   // to use fmod function
using namespace std;
// Calculating Funcyion prototypes
double summation(double *a, double *b);
double subtraction(double *a, double *b);
double multiplication(double *a, double *b);
double division(double *a, double *b);
int moduluss(double *a, double *b);

int main()
{
    double a, b;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "Sum(a,b) = " << summation(&a, &b) << endl;
    cout << "Sub(a,b) = " << subtraction(&a, &b) << endl;
    cout << "Mult(a,b) = " << multiplication(&a, &b) << endl;
    cout << setprecision(7); // set precision of division is 7
    cout << "Div(a,b) = " << division(&a, &b) << endl;
    cout << "Mod(a,b) = " << moduluss(&a, &b) << endl;
    return 0;
}
double summation(double *a, double *b)
{
    return *a + *b;
}
double subtraction(double *a, double *b)
{
    return *a - *b;
}
double multiplication(double *a, double *b)
{
    return *a * *b;
}
double division(double *a, double *b)
{
    if (*b == 0)
    {
        cout << "ERROR!" << endl;
    }
    else
    {
        return *a / *b;
    }
}
int moduluss(double *a, double *b)
{
    if (*b == 0)
    {
        cout << "ERROR!" << endl;
    }
    else
    {
        if (*a > *b)
        {
            return int(*a) % int(*b);
        }
        else
        {
            return int(*b) % int(*a);
        }
    }
}