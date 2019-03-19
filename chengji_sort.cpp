#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    int grade;
};

void stu_sort(Student stu[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(stu[i].grade > stu[j].grade){
                Student temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
            if(stu[i].grade == stu[j].grade){
                if(stu[i].name > stu[j].name){
                    Student temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
                if(stu[i].name == stu[j].name){
                    if(stu[i].age > stu[j].age){
                    Student temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                    }
                }
            }
        }
    }
}

//int main()
//{
//    int n;
//    Student stu[1000];
//    while(cin >> n){
//        for(int i=0; i<n; i++){
//            cin >> stu[i].name >> stu[i].age >> stu[i].grade;
//        }
//        stu_sort(stu, n);
//        for(int j=0; j<n; j++){
//            cout<<stu[j].name<<" "<<stu[j].age<<" "<<stu[j].grade<<endl;
//        }
//    }
//    return 0;
//}
