// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1) вияснити число входжень в послідовність групи букв "abc".
// 2) замінити кожну групу букв "abc" парою зірочок "**".

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string contain(string& str)
{
    if (str.find("abc") != -1)
        cout << "yes" << endl;
    else
        if (str.find("abc") != -1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    return str;
}

string change(string& str)
{
    if (str.length() < 2)
    {
        cout << "Enter more string: " << endl;
        return str;
    }
    while (str.find("abc") != -1)
        str = str.replace(str.find("abc"), 2, "**");
    while (str.find("abc") != -1)
        str = str.replace(str.find("abc"), 2, "**");
    return str;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    contain(str);
    change(str);
    cout << str << endl;
}
