
#include <iostream>
#include <algorithm> 
using namespace std;

void findGCD(int n1, int n2) {
    int gcd = 1;
    
    for (int i = 1; i <= min(n1, n2); i++) { 
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    
    cout << "GCD: " << gcd << endl; 
}

int main() {
    int num1,num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    findGCD(num1, num2);  
}
