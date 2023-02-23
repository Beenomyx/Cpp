#include <iostream>

using namespace std;

int main() {
    string s;
    int x;
    int y;
    cout << "Please enter an action you want to do\n\n";
    cin >> s;
    if (s == "add"){
        cout << "What would you like to add together?\n";
        cin >> x;
        cin >> y;
        cout << x+y;
    } else if (s == "subtract"){
        cout << "What would you like to subtract from?\n";
        cin >> x;
        cout << "What would you like to subtract?\n";
        cin >> y;
        cout << x-y;
    } else if (s == "muliply"){
        cout << "What would you like to multiply together?\n";
        cin >> x;
        cin >> y;
        cout << x*y;
    } else {
        cout << "What would you like to divide\n";
        cin >> x;
        cin >> y;
        cout << x/y;
    }
}