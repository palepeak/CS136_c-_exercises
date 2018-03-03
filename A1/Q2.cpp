//
// Created by bobby on 2018-01-12.
//

#include "Q2.h"


bool pay_duty1(int duration, int goods, bool alcohol, bool diplomat) {
    if (diplomat)
        return false;
    else if (duration < 24)
        return (goods > 0);
    else if (duration <= 48)
        return (goods > 800);
    else if (goods <= 200)
        return alcohol;
    else
        return true;
}

bool pay_duty2(int duration, int goods, bool alcohol, bool diplomat) {
    return (!diplomat and (((duration < 24) and (goods > 0)) or
                           ((duration < 48) and ((goods > 200) or alcohol)) or
                           (goods > 800)));
}

int my_pow(int n, int k){
    if (k == 0)
        return 1;
    else
        return (n * my_pow(n, k-1));
}

int count_digits (int n){
    if (n < 10)
        return 1;
    else
        return (1 + count_digits(n/10));
}

bool is_prime_core(int k, int n) {
    if (k == 1)
        return true;
    else if(n%k == 0)
        return false;
    else
        return is_prime_core(k-1, n);
}

bool is_prime (int n){
    return is_prime_core ((n-1), n);
}

int fibonacci_countup (int f2, int f1, int k, int n){
    if (n == k)
        return (f2 + f1);
    else
        return fibonacci_countup(f1, f2+f1, k+1, n);
}

int fibonacci (int n){
    if (n < 2)
        return n;
    else
        return fibonacci_countup (0, 1, 2, n);
}

int median3 (int a, int b, int c){
    if (((a >= b) && (a <= c)) || ((a <= b) && (a >= c)))
        return a;
    else if (((b >= a) && (b <= c)) || ((b <= a) && (b >= c)))
        return b;
    else if (((c >= b) && (a >= c)) || ((c <= b) && (a <= c)))
        return c;
}

