//
// Created by bobby on 2018-02-09.
//

#include "Q2a.h"
#include <iostream>
using namespace std;
void reverse_input () {
    int n = 0;

    if (cin.peek() != '\n') {
        cin >> n;
        cout << n << endl;
        reverse_input();
        cout << n << endl;
    }
}