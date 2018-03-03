//
// Created by bobby on 2018-01-13.
//
#include <iostream>
#include <iomanip>
#include "Q2.h"
#include "Q4.h"
using namespace std;
void print_money (int n){
    cout << "$" << setfill('0')  << setw(1) << n/100 << "." << setw (2) << n%100 << endl;
}

void print_reverse (int n){
    if (n < 10)
        cout << n << endl;
    else{
        cout << n%10;
        print_reverse (n/10);
    }
}

void print_collatz (int n){
    if (n == 1)
        cout << n << "." << endl;
    else if (n%2 == 0){
        cout << n << " ";
        print_collatz(n/2);
    }
    else{
        cout << n << " ";
        print_collatz(n*3+1);
    }
}

void print_primes_core (int k, int n){
    if (k > n)
        cout << "." << endl;
    else if (is_prime(k)){
        cout << " " << k;
        print_primes_core (k+1, n);
    }
    else
        print_primes_core (k+1, n);
}

void print_primes (int n){
    if (n < 2)
        cout << "." << endl;
    else{
        cout << "2";
        print_primes_core(3, n);
    }

}

void print_fibonacci_core (int n){
    if (n <= 0)
        ;
    else{
        print_fibonacci_core(n-1);
        cout << " " << fibonacci(n);
    }
}

void print_fibonacci(int n){
    if (n < 0)
        ;
    else{
        cout << "0";
        print_fibonacci_core (n);
    }
    cout << "." << endl;
}

void proc_num (int num, int digit){
    if ((num < 10) && (num != digit))
        cout << num;
    else if (num < 10)
        cout << "*";
    else if (num%10 == digit){
        proc_num(num/10, digit);
        cout << "*";
    }
    else {
        proc_num(num / 10, digit);
        cout << num % 10;
    }
}

void print_missing_core (int acc, int n, int digit){
    if (acc == n){
        proc_num(acc, digit);
        cout << "." << endl;
    }
    else{
        proc_num(acc, digit);
        cout << " ";
        print_missing_core(acc + 1, n, digit);
    }
}

void print_missing (int n,int digit){
    if (n < 1)
        cout << "." << endl;
    else
        print_missing_core(1, n, digit);
}