/* The Collatz Conjecture is a famous unsolved problem in mathematics. The conjecture states:
Take any positive integer n.

If n is even, divide it by 2.
If n is odd, multiply it by 3 and add 1.
Repeat this process. No matter what number you start with, you will always eventually reach 1. 

Let the number of steps you need to reach 1 starting from a given number X be denoted by N. Given input X, output N. A step is counted each time you apply one of the rules above.

Input:
A single positive integer X on one line
4 <= X <= 10000. */


#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int steps = 0;

    while(x != 1){
        if(x % 2 == 0){
            x = x / 2;
        }
        else{
            x = 3*x + 1;
        }
        steps++;
    }

    cout << steps;

    return 0;
}