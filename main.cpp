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
int main() {

    int m, n;          // INPUT - two integers the user wants to find the GCD of.
    ofstream outFile;  // OUTPUT - the GCD of the two integers.

    // Initialize the output file
    outFile.open("OFile.txt");

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
        cout << "Enter the first integer (0 to exit): ";
        cin >> m;

        if (m == 0) break;

        cout << "Enter the second integer:            ";
        cin >> n;

        outFile << "The GCD for " << m << " & " << n << " = " << gcd(m, n) << endl << endl;

        cout << endl;
    } while (m != 0);

    cout << "\n\nThank you for using my GCD calculator!\n";
    return 0;
}
