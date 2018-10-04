#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll T,N,sum;
    cin >> T;
    while(T--){
        cin >> N;
        sum =0;
        while(N){
            sum += N%10;
            N /= 10;
        }
        cout << sum << endl;
    }
}
