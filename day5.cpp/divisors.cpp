//by checking for 1 to n
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}
//by checking for 1 to root n by vector method
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printdivisors(int n){
    vector<int>ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls) cout<<it<<" ";
}
int main(){
    int n;
    cin>>n;
    printdivisors(n);
    return 0;
}
