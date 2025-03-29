#include<bits/stdc++.h>
using namespace std;

void pattern12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int k=0;k<(n-2*i+2);k++){
            cout<<" ";
        }
        for(int l=i;l>=0;l--){
            cout<<l+1;
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;

    }
}
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<'A'+n-i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;

    }
}
void pattern17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int l=1;l<=2*i+1;l++){
            cout<<ch;
            if(l<=breakpoint) ch++;
            else ch--;

        }
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        cout<<endl;

    }
}
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern18(n);
    }
    