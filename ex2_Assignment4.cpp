/*Bài 2. Write a C++ program that compare length of 2 input strings and return the string that has longer length.
If two strings are of equal length print “equal length”
User will input 2 strings step by step, then program will output the string that is longer.
*/
#include <iostream>
#include <string>
using namespace std;
string compareString(string str1, string str2)
{
    int len1=str1.length();
    int len2=str2.length();
    string equal =" equal length";
    if(len1==len2)
    {
        return equal;
    }
    else if(len1>len2)
    {
        return str1;
    }
    else
    {
        return str2;
    }
}
int main()
{
    string str1;
    string str2;
    cout<<"Enter string1: ";
    cin >> str1;
    cout<<"Enter string2: ";
    cin >> str2;
    cout<<"string has longer length: : "<<compareString(str1,str2);
    return 0;

}