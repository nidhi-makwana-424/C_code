#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max;
    if (a > b && a > c)
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;
   
    int min;
    if (a < b && a < c)
        min = a;
    else if (b < c)
        min = b;
    else
        min = c;

    cout << "Maximum number is: " << max << endl;
    cout << "Minimum number is: " << min << endl;

    return 0;
}
