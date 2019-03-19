#include <iostream>
#include <cmath>
using namespace std;

bool isShouxing(int a){
    int aa = a*a;
    int counter = 0;
    int sum = 0;
    while(aa > 10){
        sum += (aa % 10) * pow(10, counter);
        aa /= 10;
        counter++;
    }
    if(sum == a)
        return true;
    return false;
}

//int main(){
//    int a;
//    while(cin>>a){
//        if(isShouxing(a))
//            cout<<"Yes!"<<endl;
//        else
//            cout<<"No!"<<endl;
//    }
//    return 0;
//}
