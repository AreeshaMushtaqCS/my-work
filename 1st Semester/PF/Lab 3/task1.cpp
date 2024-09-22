#include <iostream>

using namespace std;

int main()
{ 
    cout << "Enter your name:";
    string a;
     getline(cin, a); // Use getline to read the full name

    cout << "Enter your roll no:";
    int b;
    cin >> b;
    cout << "Enter your aggregate:";
    float c;
    cin >> c;
    cout << "Enter your section:";
    char d;
    cin >> d;
    cout << "Student information:" << endl;
    cout << "Name:" << a << endl;
    cout << "Roll no:" << b << endl;
    cout << "Aggregate:" << c << endl;
    cout << "section:" << d << endl;
}