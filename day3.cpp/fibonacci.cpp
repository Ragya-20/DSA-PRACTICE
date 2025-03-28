#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
        if(n==1|| n==2){
                return 1;
        }
        return fibonacci(n-1)+ fibonacci(n-2);
}
int main(){
        int n;
        cout<<"Enter n:";
        cin>>n;
        cout<<"The"<<n<<"Fibonacci number is:"<<fibonacci(n)<<endl;
        return 0;
        
}