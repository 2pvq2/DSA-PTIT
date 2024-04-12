#include <iostream>
using namespace std;

int main() {
    long long T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        if (N == 1) {
            cout << "1" << endl; 
        } else if (N == 2) {
            cout << "2" << endl; 
        } else {
            cout << 2*(N - 1) << endl; 
        }
    }
    return 0;
}