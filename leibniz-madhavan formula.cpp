/* Over 600 years ago, the Indian mathematician Madhava of Sangamagrama discovered a powerful formula for calculating the arctangent, centuries before the same series was credited to Leibniz in Europe.

The series is:
______________________________________________
pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...
_____________________________________________
Now we are interested in this because this will act as a good approximation for the constant Pi for x = 1, since arctan(1) = pi/4.

you need to write a program in simplecpp to compute an approximation of pi using Madhava formula for a fixed number of terms. You need to take an integer N as input and you need to calculate the series sum up to N terms. Then you need to print the approximation of the value of Pi. Each addition or subtraction in the given formula is counted as 1 term. Make sure to multiply your output by 4 at the end to get the approximation of pi.

Input:
A single integer with the value of N
For example: 5

Output:
A single float denoting the approximation of Pi
3.33968
*/

#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    double sum = 0;
    int denominator = 1;
    
   for (int i = 0; i < N; i++) {
        if (denominator % 4 == 1) {
            sum = sum + 1.0 / denominator;
        } else {
            sum = sum - 1.0 / denominator;
        }
        denominator += 2;
    }
    cout << 4*sum;

    return 0;
}