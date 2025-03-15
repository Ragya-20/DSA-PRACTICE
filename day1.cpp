#include <string>
#include <iostream>

using namespace std;
class Solution {
    public:
      string compareNM(int n, int m){
          if (n < m) 
              return "lesser";
          else if (n == m) 
              return "equal";
          else 
              return "greater";
      }
};
int main() {
    Solution obj;
    cout << obj.compareNM(5, 10) << endl;  
    return 0;
}
  