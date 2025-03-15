#include <iostream>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for (int row = 1; row <= n; row++) {  
            for (int space = 1; space <= (n - row); space++) {
                cout << " ";
            }
            for (int star = 1; star <= (2 * row - 1); star++) {
                cout << "*";
            }
            cout << endl;  
        }
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.printTriangle(n);
    return 0;
}
