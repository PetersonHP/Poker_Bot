#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> fibNums = {0, 1};

// recursive fibonacci number function
int fib(int n) {
    if (n < fibNums.size()) {
        return fibNums.at(n);
    }
    else {
        fibNums.push_back(fib(n - 1) + fib(n - 2));
        return fibNums.at(n);
    }
}

// main loop
int main() {
    const string msg = "Fibonacci number to calculate (enter '-1' to stop): \n";
    const int endSeq = -1;

    int n = 0;

    cout << msg;
    cin >> n;
    while (n != endSeq) {
        cout << "Result: " << fib(n) << "\n";

        cout << msg;
        cin >> n;
    }

    return 0;
}