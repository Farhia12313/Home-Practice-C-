#include<bits/stdc++.h>
using namespace std;
int main(){
    //char ch;
    int n;
    cout << " Enter number :";
    cin >> n;
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n;j++){
            cout << ch<<" ";
            ch = ch + 1;
            
        }

        cout<<"\n";
    }
    return 0;
}