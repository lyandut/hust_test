#include <iostream>
using namespace std;

int fib(int n){
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

//·ÇµÝ¹é
int fib2(int n){
    int arr[90];
    arr[0] = 1;
    arr[1] = 2;
    for(int i=3; i<=n; i++){
        arr[i-1] = arr[i-2] + arr[i-3];
    }
    return arr[n-1];
}

//int main(){
//    int n;
//    while(cin >> n)
//        cout<<fib2(n)<<endl;
//    return 0;
//}
