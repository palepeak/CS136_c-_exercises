//
// Created by bobby on 2018-02-09.
//

#include "Q1.h"
#include <iostream>

int x = 0;
int y = 0;
int dir = 0;
int speed = 1;
using namespace std;

void print_state() {
    cout << "Position: (" << x << "," << y << ") | Speed: " << speed << " | Direction: ";
    if (dir == 0) {cout << "North" << endl;}
    else if (dir == 1) {cout << "East" << endl;}
    else if (dir == 2) {cout << "South" << endl;}
    else {cout << "West" << endl;}
}

void turn_right() {
    dir++;
    if (dir == 4) {dir = 0;}
}

void turn_left() {
    dir--;
    if (dir == -1) {dir = 4;}
}

void set_speed(int n) {
    speed = n;
}

void move() {
    if (dir == 0) {y += speed;}
    else if (dir == 1) {x += speed;}
    else if (dir == 2) {y -= speed;}
    else {x -= speed;}
}
