#include<iostream>
#include<cmath>

using namespace std;



int main() {
    long n, q;
    cin >> n >> q;
    long companies[n] = {0};
    for (long i = 0; i < n; i++) {
        cin >> companies[i];
    }

    for (long i = 0; i < q; i++) {
        long input, input1, input2;
        cin >> input >> input1 >> input2;
        if (input == 1) {
            companies[input1 - 1] = input2;
        } else {
            cout << abs(companies[input2 - 1] - companies[input1 - 1]) << endl;
        }
    }
    return 0;
}