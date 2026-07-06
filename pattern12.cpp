#include<iostream>
using namespace std;

void pattern12(int n){
    for(int i=0; i<n; i++){
        //num
        for(int j=0; j<=i; j++){
            cout<< j+1;
        }
        //space
        for(int j=0; j<(2*n-2*i-2);j++){
            cout << " ";
        }
        //Num
        for(int j=i+1; j>0; j--){
            cout << j;
        }
        cout <<endl;
        
    }
}
int main() {
    int n;
    cin >> n;
    pattern12(n);
    return 0;
}