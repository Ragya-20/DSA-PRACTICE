bool palindrome(int n){
    int og=n;
    int revnum;
    while(n>0){
        int lastdig=n%10;
        revnum=(revnum*10)+lastdig;
        n=n/10;
    }
    return revnum==og;
}