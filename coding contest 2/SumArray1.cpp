#include <iostream>
using namespace std;
int main(){
    int N,A[101],sum=0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        sum += A[i];
        cout << sum << " ";
    }
}
