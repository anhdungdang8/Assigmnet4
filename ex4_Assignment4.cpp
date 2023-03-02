/*Bài 4. Viết chương trình C++ giải phương trình bậc 2: a*x^2 + b*x + c = 0.
-  Chương trình chạy liên tục tính các phương trình (nhập vào giá trị của a,b,c) đến khi a = 0, b = 0, c = 0 để thoát chương trình. 
-  Nghiệm của phương trình (nếu có) chính xác đến số thập phân thứ 3. 
-  Các trường hợp in ra như sau:
		+ 2 nghiệm: Phuong trinh co 2 nghiem la: x1 = …, x2 = …
	+ 1 nghiệm: Phuong trinh chi co 1 nghiem la: x = …
		+ 0 nghiệm: Phuong trinh vo nghiem
*/
#include <iostream>
#include <cmath>
#include <iomanip> // to use setprecision function to set solution of the equation (if any) is accurate to the 3rd decimal.
using namespace std;
// declare function solve quadratic equation
void solveQuadraticEquation(int &a, int &b, int &c);
int main()
{
    int a, b, c;
    do
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        solveQuadraticEquation(a, b, c);// call function solve quadratic equation
    } while (true);
    cout << "\na=0;b=0;c=0;\nFinish the program " << endl;
    return 0;
}
// define function solve quadratic equation
void solveQuadraticEquation(int &a, int &b, int &c)
{
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Equation has no solution" << endl;
        }
        else
        {
            float x = (float)-c/b;
            cout << "Equations has a solution: x = " << setprecision(3)<<x << endl;
            
        }
    }
    else
    {
        int delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            cout << "Equation has no solution" << endl;
        }
        else if (delta == 0)
        {
            cout << "Equation has  solution: x = " << setprecision(3) << -b / (2 * a) << endl;
        }
        else
        {
            cout << "Equation has  solution: x1 = " << setprecision(3) << (-b + sqrt(delta)) / (2 * a) << endl;
            cout << "Equation has  solution: x2 = " << setprecision(3) << (-b - sqrt(delta)) / (2 * a) << endl;
        }
    }
}