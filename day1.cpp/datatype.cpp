#include <iostream>
#include <string>

using namespace std;

class Solution {
  public:
    int dataTypeSize(string str) {
        if (str == "Character")
            return sizeof(char);
        else if (str == "Integer")
            return sizeof(int);
        else if (str == "Long")
            return sizeof(long);
        else if (str == "Float")
            return sizeof(float);
        else if (str == "Double")
            return sizeof(double);
        else
            return -1; 
    }
};

int main() {
    Solution obj;
    cout << obj.dataTypeSize("Character") << endl; 
    cout << obj.dataTypeSize("Integer") << endl;   
    cout << obj.dataTypeSize("Long") << endl;      
    cout << obj.dataTypeSize("Float") << endl;     
    cout << obj.dataTypeSize("Double") << endl;    
    return 0;
}
