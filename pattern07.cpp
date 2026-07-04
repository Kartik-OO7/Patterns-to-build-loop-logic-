#include<iostream>
using namespace std;

//Triangle pattern 
void pattern07(int n){
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
    
        // star
        for(int j=0; j<(2*i+1);j++){
            cout << "*";
        }

        //Space 
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern07(n);
    return 0;
}