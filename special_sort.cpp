#include <iostream>
#include <algorithm>
using namespace std;

void bsort(int n, int* arr){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//int main(){
//    int arr[1001];
//    int n;
//    while(cin>>n){
//        if(n==1){
//            cin >> arr[0];
//            cout<<arr[0]<<endl<<-1<<endl;
//        }
//        else{
//            for(int i=0; i<n; i++){
//                cin >> arr[i];
//            }
//            bsort(n, arr);
//            cout<<arr[n-1]<<endl;
//            for(int j=0; j<n-1; j++){
//                cout<<arr[j]<<" ";
//            }
//            cout<<endl;
//        }
//    }
//    return 0;
//}
