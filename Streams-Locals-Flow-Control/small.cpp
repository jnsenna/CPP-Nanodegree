#include <iostream>

using namespace std;

int main() {
    cout << "Hello!" << "\n" << 2+2;

    int i;
    i=4.9;              // will truncate to turn to int
    cout << i << endl;

    int j=9/5;          // will truncate to turn to int
    cout << j << endl;

    float f = 4.9;
    cout << f << endl;
    f = 9/5;            // since ints in division, produces int
    cout << f << endl;
    f = 9.0/5;
    cout << f << endl;  // since a float in division, produces float

    auto g = 4.5;
    cout << g << endl;

    return 0;
}