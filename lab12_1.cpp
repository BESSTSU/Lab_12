#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    if(x>1){
        int i=1;
        return fibonacci(x-i) + fibonacci(x-(i+1));
        i++;
    }else return x;
}