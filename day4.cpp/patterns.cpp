#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;

    }
}
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;

    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i+1);k++){
            cout<<"*";
        }
        for(int l=0;l<n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++ ){
            cout<<" ";
        }
        for(int k=0;k<(n-2*i+4);k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i+1);k++){
            cout<<"*";
        }
        for(int l=0;l<n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++ ){
            cout<<" ";
        }
        for(int k=0;k<(n-2*i+4);k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0)start=1;
        else start=0;
        for(int j=0;j<i+1;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}





