// CPP_CT FIBONACCI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n < 0) {
        return -1;
    }
    else if (n == 0 || n == 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int i;
    cout << "15 so dau tien cua day so Fibonacci: \n";
    for (i = 0; i < 15; i++) {
        cout << fibonacci(i) << " ";
    }
}
   