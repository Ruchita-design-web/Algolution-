#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if( i == 0 or i == n-1 or j == 0 or j == n-1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl; 
    }
    
    return 0;
}
