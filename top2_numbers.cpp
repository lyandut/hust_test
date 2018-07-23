#include <iostream>
using namespace std;

void top2(int arr[], int n, int &max_index, int &sec_index){
    int Max, second;
    if(arr[0] > arr[1]){
        Max = arr[0];
        max_index = 0;
        second = arr[1];
        sec_index = 1;
    }
    else
    {
        Max = arr[1];
        max_index = 1;
        second = arr[0];
        sec_index = 0;
    }
    for(int i=0; i<n; i++){
        if(Max < arr[i]){
            second = Max;
            sec_index = max_index;
            Max = arr[i];
            max_index = i;
        }
        else if(arr[i]<Max && arr[i]>second){
            second = arr[i];
            sec_index = i;
        }
    }
}

//int main(){
//    int col = 5;
//    int row = 4;
//    int arr[4][5];
//    int res[2][5];
//    while(1){
//        for(int i=0; i<row; i++){
//            for(int j=0; j<col; j++)
//                cin >> arr[i][j];
//        }
//        int temp[4];
//        for(int i=0; i<col; i++){
//            for(int j=0; j<row; j++){
//                temp[j] = arr[j][i];
//            }
//            int max_index, sec_index;
//            top2(temp, 4, max_index, sec_index);
//            if(max_index < sec_index){
//                res[0][i] = temp[max_index];
//                res[1][i] = temp[sec_index];
//            }
//            else{
//                res[0][i] = temp[sec_index];
//                res[1][i] = temp[max_index];
//            }
//        }
//        for(int i=0; i<2; i++){
//            for(int j=0; j<col; j++)
//                cout << res[i][j]<<" ";
//            cout<<endl;
//        }
//    }
//    return 0;
//}
