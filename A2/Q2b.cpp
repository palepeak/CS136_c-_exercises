//
// Created by bobby on 2018-02-09.
//

#include "Q2b.h"
#include "iostream"
using namespace std;

int reverse_input2(int count) {
    int n = 0;
    if (cin.peek() != '\n'){
        cin >> n;
        count = reverse_input2(count + 1);
        cout << (n + count) << endl;
    }
    return count;
}