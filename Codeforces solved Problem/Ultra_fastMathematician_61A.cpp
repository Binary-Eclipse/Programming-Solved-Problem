#include <iostream>
using namespace std;
// long long supports up to 18-19 digit

int main() {
string as, bs;
    cin >> as;
    cin>> bs;

    // Make lengths equal by padding with zeros at the start
    while (as.size() < bs.size()) as= '0' + as;
    while (bs.size() < as.size()) bs= '0' + bs;

    for (int i = 0; i < as.size(); i++) {
        if (as[i] == bs[i])
            cout << 0;
        else
            cout << 1;
    }
    cout << endl;

    return 0;
}
