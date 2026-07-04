#include<iostream>
using namespace std;

//Inverted triangle 
void pattern8(int n){
    for(int i=0; i<n;i++){
        //space
        for(int j=0; j<i ; j++){
            cout << " ";
        }

        //start
        int star = 2*n -(2*i+1);
        for(int j=0; j<star;j++){
            cout << "*";

        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern8(n);
    return 0;
}