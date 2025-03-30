// Function to return the number of digits in 'n' that evenly divide 'n'
#include <iostream>
using namespace std;
int countDigits(int n){
	int count = 0;
    int num = n; 
	while (num > 0) {
        int rem = num % 10;
		if (rem != 0 && n % rem == 0) {
            count++;
        }
		num=num/10;
	}
	return count;
}
int main() {
    int n;
    cin>> n; // Input from user
    cout<< countDigits(n) << endl; // Output the result
    return 0;
}