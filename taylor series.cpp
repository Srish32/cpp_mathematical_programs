/* Following is an equation of Taylor Series to compute 
e^x

e^x = 1 + x + (x^2)/2! + (x^3)/3! + (x^4)/4! + ... + (x^n)/n! + ...

Write a program to approximately compute 
e^x by adding first 16 terms of the series */


#include<iostream>
using namespace std;

int main(){
    double x, term = 1.0, sum = 1.0;
    cin >> x;

    for(int i=1; i<=15; i++){
        term= term*x/i;
        sum+=term;
    }
    cout << sum;
    
    return 0;
}
