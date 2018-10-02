#include <iostream>
using namespace std;
int main(){
    int n,k=0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << k << " ";
            k++;
            if(k==n+1)
                return 0;
        }
        cout << endl;
    }
}
