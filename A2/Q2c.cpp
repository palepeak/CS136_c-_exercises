//
// Created by bobby on 2018-02-09.
//

#include <iostream>
#include "Q2c.h"
using namespace std;

int reverse_input3 (int min) {
    int n = 0;
    if (cin.peek() != '\n') {
        cin >> n;
        if (n < min) {
            min = reverse_input3(n);
        } else {
            min = reverse_input3(min);
        }
        cout << n - min << endl;
    }
    return min;
}