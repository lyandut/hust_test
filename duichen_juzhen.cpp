#include <iostream>
using namespace std;

bool is_duicheng(int arr[][100], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[i][j] != arr[j][i])
                return false;
        }
    }
    return true;
}

//int main(){
//    int n;
//    int arr[100][100];
//    while(cin >> n){
//        for(int i=0; i<n; i++){
//            for(int j=0; j<n; j++)
//                cin >> arr[i][j];
//        }
//        if(is_duicheng(arr, n))
//            cout<<"Yes!"<<endl;
//        else
//            cout<<"No!"<<endl;
//    }
//    return 0;
//}
