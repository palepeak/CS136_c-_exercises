//
// Created by bobby on 2018-02-09.
//

#include "Q3.h"

int my_pow_it (int n, int p) {
    int orig = n;
    if (p == 0) {
        return 1;
    }
    while (p > 1) {
        n *= orig;
        p--;
    }
    return n;
}

int count_digits_it (int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool is_prime_it (int num) {
    if (num == 2) return true;
    int start = (num/2) + 1;
    while (start > 1) {
        if (num % start == 0) {return false;}
        start--;
    }
    return true;
}

int fibonacci_it (int n) {
    int a = 0;
    int b = 1;
    int temp = 0;
    while (n > 0) {
        temp = a + b;
        a = b;
        b = temp;
        n--;
    }
    return a;
}