//
// Created by Jawad Khadra on 11/18/24.
//

#include "header.h"

/*
 * gcd
 *
 * This function takes two integers as input and returns
 * the greatest common divisor of the two integers.
 */
int gcd(int m, int n)
{
    if (m % n == 0) return n;
    else return gcd(n, m % n);
}