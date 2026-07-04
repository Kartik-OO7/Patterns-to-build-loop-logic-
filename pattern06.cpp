#include<iostream>
using namespace std;

//Printing upside down right angled triangle using numbers 
void pattern05(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern05(n);
    return 0;
}