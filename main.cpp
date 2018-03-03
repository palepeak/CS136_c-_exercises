//
// Created by bobby on 2018-01-13.
//
#include <iostream>
#include "A1/Q1.h"
#include "A1/Q2.h"
#include "A1/Q3.h"
#include "A1/Q4.h"
//test
//branch test
#include "A2/Q1.h"
#include "A2/Q2a.h"
#include "A2/Q2b.h"
#include "A2/Q2c.h"
#include "A2/Q3.h"
#include "A2/Q4.h"
#include <cassert>
using namespace std;

void testA1 (void) {
    assert(pay_duty1(1, 1, false, false));
    assert(pay_duty1(1, 1, false, false));
    assert(pay_duty2(1, 1, false, false) ==
           pay_duty1(1, 1, false, false));
    assert(my_pow(1, 1) == 1);
    assert(count_digits(0) == 1);
    assert(is_prime(2));
    assert(fibonacci(1) == 1);

    assert(median3(1, 1, 1) == 1);
    assert(median3(1, 5, 7) == 5);
    assert(median3(5, 1, 7) == 5);
    assert(median3(5, 5, 7) == 5);
    assert(median3(5, 5, 5) == 5);
    assert(median3(-5, 7, 0) == 0);

    assert(away_div(39, 10) == 4);
    assert(away_div(39, -10) == -4);
    assert(away_div(40, 10) == 4);
    assert(closest_div(39, 10) == 4);
    assert(closest_div(33, 10) == 3);
    assert(closest_div(35, 10) == 4);
    assert(closest_div(30, 10) == 3);

    assert(num_pizzas(39, 10, 1) == 4);
    assert(num_pizzas(33, 10, 1) == 4);
    assert(num_pizzas(35, 10, 2) == 7);

    assert(min_tiles(2, 2, 4, 4) == 4);
    assert(min_tiles(3, 3, 4, 4) == 4);
    assert(min_tiles(1, 3, 3, 4) == 4);
    assert(min_tiles(3, 1, 3, 4) == 4);
    assert(min_tiles(1, 3, 4, 3) == 4);

    print_money(1);
    print_money(12);
    print_money(123);
    print_money(123);
    print_money(1234);
    print_money(103);
    print_money(1003);

    print_reverse(123);
    print_reverse(100);

    print_collatz(1);
    print_collatz(5);
    print_collatz(14);

    print_primes(5);
    print_primes(1);
    print_primes(2);
    print_primes(3);

    print_fibonacci(5);

    print_missing(13, 2);
    print_missing(25, 2);
}

void testA2 (void) {
    assert(my_pow_it(1,100) == 1);
    assert(my_pow_it(2,4) == 16);
    assert(my_pow_it(2,0) == 1);

    assert(count_digits_it(123) == 3);
    assert(count_digits_it(-123) == 3);
    assert(count_digits_it(9999) == 4);
    assert(count_digits_it(1) == 1);
    assert(count_digits_it(0) == 0);

    assert(is_prime_it(2));
    assert(is_prime_it(3));
    assert(!is_prime_it(4));
    assert(!is_prime_it(16));

    assert(fibonacci_it(0) == 0);
    assert(fibonacci_it(1) == 1);
    assert(fibonacci_it(2) == 1);
    assert(fibonacci_it(3) == 2);
    assert(fibonacci_it(4) == 3);
    assert(fibonacci_it(5) == 5);
    assert(fibonacci_it(6) == 8);
    assert(fibonacci_it(7) == 13);
    print_state();
    move();
    turn_right();
    print_state();
    turn_right();
    set_speed(2);
    print_state();
    turn_left();
    turn_left();
    turn_left();
    move();
    print_state();

    draw_border(4);
    printf("\n");
    draw_x(4);
    printf("\n");
    draw_checker(4);
    printf("\n");
    draw_diamond(4);

    cin.ignore();
    reverse_input();
    cin.ignore();
    reverse_input2(0);
    cin.ignore();
    int n = 0;
    cin >> n;
    cout << n - reverse_input3(n) << endl;


}

int main() {
    int assign = 0;

    cin >> assign;

    if (assign == 1) {
        testA1();
    } else if (assign == 2) {
        testA2();
    } else {
        cout << "Invalid input" << endl;
    }
}
