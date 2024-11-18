/*
 * AUTHOR : Jawad Khadra
 * STUDENT ID : 1312092 (IVC)
 * LAB #11: Intro to Recursion - GCD
 * CLASS : CS1B
 * SECTION : MW: 7:30p - 9:50p
 * DUE DATE : Nov. 18, 2024
 */
#include "header.h"

using namespace std;

/*
 * Lab 11: Intro to Recursion - GCD
 *
 * This program reads two values from a user and output
 * the greatest common divisor of the two values (through
 * recursion using the Euclidean implementation).
 */

// main
int main()
{

    int m, n;  // INPUT - two integers the user wants to find the GCD of.

    // Print Header
    cout << " * AUTHOR : Jawad Khadra" << endl;
    cout << " * STUDENT ID : 1312092 (IVC)" << endl;
    cout << " * LAB #11: Intro to Recursion - GCD" << endl;
    cout << " * CLASS : CS1B" << endl;
    cout << " * SECTION : MW: 7:30p - 9:50p" << endl;
    cout << " * DUE DATE : Nov. 18, 2024" << endl;
    cout << endl;

    do {
        // Get input
        cout << "Enter ";

        // Call GCD function
        int gcd = gcd(m, n);

        // Print output
        cout << "GCD of " << m << " and " << n << " is " << gcd << endl;

    } while (m != 0);
    return 0;
}
