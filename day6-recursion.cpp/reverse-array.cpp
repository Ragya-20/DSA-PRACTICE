//reverse an array using recursion
#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
}
void reverseArray(int arr[], int start, int end) {
    if (start < end) {
       swap(arr[start], arr[end]);
       reverseArray(arr, start + 1, end - 1);
    }
}
int main() {
    int n = 5;
    int arr[] = { 5, 4, 3, 2, 1 };
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}

//using vector(array)
#include<bits/stdc++.h>
class Solution {
    public:
      void reverseArray(vector<int> &arr) {
          int start = 0;
          int end = arr.size() - 1;
  
          while (start < end) {
              swap(arr[start], arr[end]);
              start++;
              end--;
          }
      }
  };