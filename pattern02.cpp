#include<iostream>
using namespace std;

//Program to print a right angled triangle with *.

void Rtriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
<<<<<<< HEAD

=======
>>>>>>> 898a91336a102308716996d7704c0794d16136df
int main() {
    int n;
    cin >> n;
    Rtriangle(n);
    return 0;
}