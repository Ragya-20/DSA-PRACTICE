#include <iostream>
#include <vector>
#include <cmath>  

using namespace std;

class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        switch (choice) {
            case 1: {
                // Area of Circle: π * R^2
                double R = arr[0];
                return M_PI * R * R;
            }
            case 2: {
                // Area of Rectangle: L * B
                double L = arr[0], B = arr[1];
                return L * B;
            }
            default:
                return -1;  
        }
    }
};

int main() {
    Solution obj;

    int choice;
    cout<<"Choose 1 or 2:";
    cin>>choice;
    if (choice==1){
        vector<double> circleInput = {5};
        cout << obj.switchCase(1, circleInput) << endl;
    } 
    else if(choice==2){
        vector<double> rectangleInput = {5, 10};
        cout << obj.switchCase(2, rectangleInput) << endl; 
    }
    else{
        cout<<"Invalid choice";
    }

    return 0;
}
