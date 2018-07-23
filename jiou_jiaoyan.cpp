#include <iostream>
#include <cstring>
using namespace std;

void jiou_jiaoyan(int arr[], char ch){
    memset(arr, 0, 8*sizeof(int));
    int asc_num = ch - '\0';
    int index = 0;
    while(asc_num){
        arr[index] = asc_num % 2;
        asc_num /= 2;
        index++;
    }
    int counter = 0;
    for(int i=0; i<7; i++){
        if(arr[i]==1)
            counter++;
    }
    if(counter % 2 == 0)
        arr[7] = 1;
}

//int main()
//{
//    int arr[8] = {0};
//    string str;
//    while(cin>>str){
//        for(int i=0; i<str.size(); i++){
//            jiou_jiaoyan(arr, str[i]);
//            for(int j=7; j>=0; j--){
//                cout<<arr[j];
//            }
//            cout<<endl;
//        }
//    }
//    return 0;
//}
