#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    else return fibo(n-1)+fibo(n-2);
}
int main(){
    int m;
    cout << "Enter turm number :";
    cin >> m;
    cout <<" Fibonacci sequence :";
    for(int i=0;i<m;i++){
       cout <<" "<< fibo( i);
    } 
     
    
    return 0;
}