#include<iostream>
using namespace std;

//Diamond shape with stars
void pattern7(int n){
    for(int i=0; i<n ; i++){
        //space 
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        //star
        int star= 2*i+1;
        for(int j=0;j<star ; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern8(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0;j<i; j++){
            cout << " " ;
        }
        //stars 
        int stars=2*n-(2*i+1);
        for(int j=0; j<stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern7(n);
    pattern8(n);

    return 0;
}