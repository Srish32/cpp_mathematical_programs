/* The Wallis product is a famous formula from the 17th century discovered by mathematician John Wallis. It is one of the earliest infinite product formulas in mathematics and is closely related to the value of pi.

The formula is: 
pi/2 = (2/1) * (2/3) * (4/3) * (4/5) * (6/5) * (6/7) * ...

You need to write a program in simplecpp to compute an approximation of pi using the Wallis product for a fixed number of terms. You need to take an integer N as input and you need to calculate the Wallis Product up to N terms. Then you need to print the approximation of the value of Pi. Each multiplication in the given formula is counted as 1 term. 

Note: N is even.

Hint: While n is guaranteed to be even for this program, it can also be an odd number for a general program. How would you handle both cases (without any if statements or conditionals)? Remember, integer division returns the floor of the division (eg. 7/2 = 3 and not 3.5). Use floating point division (eg. 7.0/2 = 3.5) if you need the precision.

Input:
A single integer n (1 < n <= 10000). N is even

Output:
The approximate value of Pi returned by the Wallis product. Remember, it calculates pi/2 so please multiply your answer by 2 before printing. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double pi = 1;
    int i = 1;

    for (int j = 0; j < n; j++) {
        pi = pi * (2.0 * ((i + 1) / 2)) / (i + (i + 1) % 2);
        i++;
    }

    cout << 2 * pi;

    return 0;
}