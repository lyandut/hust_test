#include <iostream>
#include <cstdio>
using namespace std;

int a[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int b[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

//int main(){
//    int y, n;
//    while(cin >> y >> n){
//        int month = 1;
//        if((y%4==0&&y%100!=0)||y%400==0){
//            while(n>a[month]){
//                n-=a[month];
//                month++;
//            }
//        }
//        else{
//            while(n>b[month]){
//                n-=b[month];
//                month++;
//            }
//        }
//        cout<<y<<"-";
//        printf("%02d-%02d\n", month, n);
//    }
//    return 0;
//}
