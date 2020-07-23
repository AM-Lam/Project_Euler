#include <iostream>

using namespace std;

int sum_of_even (int n) {
    long sum = 0, first = 0, last = 1, next = 1;

    while ((first + last) < n) {
        last += first;
        first = last - first;
        if (last % 2 == 0) sum += last;
    }

    return sum;
}

int main() {
    int t;
    cout << "Please enter the range below:" << '\n';
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout << sum_of_even(n) << endl;
    }

    return 0;
}

