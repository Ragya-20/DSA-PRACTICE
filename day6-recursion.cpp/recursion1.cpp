// Print 1 to n using recursion
#include<iostream>
using namespace std;

void printNos(int i, int n) {
    if (i > n) return;  
    cout << i << " ";
    printNos(i + 1, n);  
}
int main() {
    int n;
    cin >> n;
    printNos(1, n);  
    return 0;
}

//Print Name n times 
void printName(int i,int n){
    if(i>=n){
        return;
    }
    cout<<"Ragya"<<endl;
    printName(i+1,n);
}
int main(){
    int n;
    cin>>n;
    printName(0,n);
}

//Print sum of n numbers
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}