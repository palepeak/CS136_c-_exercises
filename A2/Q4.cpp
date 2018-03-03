//
// Created by bobby on 2018-02-09.
//

#include "Q4.h"
#include <iostream>
using namespace std;

void draw_border(int n) {
    for (int i = 0; i < 2*n + 1; i++) {
        for (int k = 0; k < 2*n+1;k++) {
            if ((i == 0) || (k == 0) || (i == 2*n) || (k == 2*n)) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

void draw_x(int n) {
    for (int i = 0; i < 2*n + 1; i++) {
        for (int k = 0; k < 2*n+1;k++) {
            if ((i == k) || (i + k == 2*n)) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

void draw_checker(int n) {
    for (int i = 0; i < 2*n + 1; i++) {
        for (int k = 0; k < 2*n+1;k++) {
            if ((k + i) % 2 == 0) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

void draw_diamond (int n) {
    for (int i = 0; i < 2*n + 1; i++) {
        for (int k = 0; k < 2*n+1;k++) {
            if (((i + k) == n) || (i - k) == n || (k - i) == n || (i + k) == 3*n) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}