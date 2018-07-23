#include <iostream>
using namespace std;

//int main() {
//    int m,n;
//    int arr[100][100];
//    while(cin>>m>>n){
//        for(int i=0; i<m; i++)
//            for(int j=0; j<n; j++)
//                cin >> arr[i][j];
//
//        for(int i=0; i<m; i++){
//            int sum = 0;
//            for(int j=0; j<n; j++)
//                sum+=arr[i][j];
//            int maxx=arr[i][0];
//            int index = 0;
//            for(int j=1; j<n; j++){
//                if(arr[i][j]>maxx){
//                    maxx = arr[i][j];
//                    index = j;
//                }
//            }
//            arr[i][index] = sum;
//            for(int j=0; j<n-1; j++)
//                cout<<arr[i][j]<<" ";
//            cout<<arr[i][n-1]<<endl;
//        }
//    }
//    return 0;
//}
