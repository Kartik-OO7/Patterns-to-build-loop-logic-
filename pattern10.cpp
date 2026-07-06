#include<iostream>
using namespace std;

//Program to print half diamond 
void pattern10(int n){
    for(int i=0; i<2*n-1; i++){
        int stars=i+1;
        if(i>=n) stars=2*n-i-1;
        for(int j=0; j<stars ;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern10(n);
    return 0;
}   