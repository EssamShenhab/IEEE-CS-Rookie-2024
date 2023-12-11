#include<bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,q;
    cin>>a>>b>>q;
    long long result = q % 3;
    if(res == 1){
        cout<<a;
    } else if (result == 2){
        cout<<b;
    } else {
        cout<<(a ^ b)<<endl;
    }
}
