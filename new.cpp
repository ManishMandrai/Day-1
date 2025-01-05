#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    bool result = (a > 5 && b < 30);
    cout << "Logical AND (a > 5 && b < 30): "<< result <<endl;

    result = (a > 15 || b < 30);
    cout << "logical OR (a < 15 || b < 30): " <<result <<endl;

    result = !(a<15);
    cout << "Logical NOT(!(a>15)) : " << result <<endl;

    
    return 0;
};
