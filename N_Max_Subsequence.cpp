#include <iostream>

using namespace std;
void solve(){
    int num;
    cin>>num;
    string s;
    cin>>s;
    int l = s.size();
    int c=1;
    for(int i=0;i<l-1;i++){
        if(s[i]!=s[i+1]) {
            c++;
        }
    }
    cout<<c<<endl;
}
int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}
