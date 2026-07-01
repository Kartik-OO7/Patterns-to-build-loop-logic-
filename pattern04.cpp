#include<iostream>
using namespace std;

//printing 4th pattern of right angled triangle with same numbers as rows 
void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";

        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern4(n);
    return 0;
}