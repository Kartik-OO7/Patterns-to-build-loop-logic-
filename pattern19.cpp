#include<iostream>
using namespace std;


void pattern19(int n){
    int initial=0;
    for(int i=0 ; i<n; i++){
        // star
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        //Space 
        for(int j=0;j<initial;j++){
            cout << " ";
        }
        // Star 
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        initial+=2;
        cout <<endl;
    }
    initial=8;
    for(int i=0;i<n;i++){
        // star
        for(int j=0; j<=i; j++){  // Can write j<i+1 also.
            cout << "*";
        }
        //Space 
        for(int j=0;j<initial;j++){
            cout << " ";
        }
        // Star 
        for(int j=0; j<=i; j++){  // Can write j<i+1 also.
            cout << "*";
        }
        initial-=2;
        cout <<endl;
    }
}


int main() {
    int n;
    cin >> n;
    pattern19(n);
    return 0;
}