#include <iostream>

using namespace std;

int main() 
{
    int x;
    int y;
    cin >> x;
    cin >> y;
    if (x == y){
        cout << "The first and second numbers are the same";
    } else if (x > y) {
        cout << "The first number is greater than the second";
    } else {
        cout << "The second number is greater than the first";
    }
    return 0;
}