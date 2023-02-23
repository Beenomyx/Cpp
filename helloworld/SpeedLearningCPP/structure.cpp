#include <iostream>

using namespace std;

struct num
{
    int x;
    double y;
};


int main(){
    num nums;
    num nums2;

    nums.x = 1;
    nums.y = 0.001;

    nums2.x = 3;
    nums2.y = 0.21412;

    cout << nums.x;
}