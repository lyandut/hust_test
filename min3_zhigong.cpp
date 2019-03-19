#include <iostream>
#include <string>
using namespace std;

struct Employee{
    int id;
    string name;
    int age;
};

void min3(Employee* emp, int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(emp[i].age > emp[j].age){
                Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
            if(emp[i].age == emp[j].age){
                if(emp[i].id > emp[j].id){
                    Employee temp = emp[i];
                    emp[i] = emp[j];
                    emp[j] = temp;
                }
                if(emp[i].id == emp[j].id){
                    if(emp[i].name > emp[j].name){
                        Employee temp = emp[i];
                        emp[i] = emp[j];
                        emp[j] = temp;
                    }
                }
            }
        }
    }
}

//int main(){
//    int n;
//    Employee emp[100];
//    while(cin >> n){
//        for(int i=0; i<n; i++)
//            cin>>emp[i].id>>emp[i].name>>emp[i].age;
//        min3(emp, n);
//        if(n>3)
//            n=3;
//        for(int j=0; j<n; j++){
//            cout<<emp[j].id<<" "<<emp[j].name<<" "<<emp[j].age<<endl;
//        }
//    }
//    return 0;
//}
