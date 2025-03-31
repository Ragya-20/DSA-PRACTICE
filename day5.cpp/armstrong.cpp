#include <cmath>
bool checkArmstrong(int n){
	int sum=0;
	int og=n;
	int numDigits = log10(n) + 1;
	while(n>0){
		int ldig=n%10;
		sum += pow(ldig, numDigits);
		n=n/10;
	}
	return(sum==og);
}
