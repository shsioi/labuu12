#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int N){
    
    
    if (N==0){
        
        return 0;
    
    }else if (N==1){
        
        return 1;
        
    }else {
        N = fibonacci(N-1) + fibonacci(N-2);
        return N;
        
    }
    
}