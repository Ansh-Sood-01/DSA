#include<iostream>

using namespace std;

class Students{
public:
    string name;
    

    void display(){
        cout<<name<<endl;
    }

};

int main(){
    Students s1;
    Students s2;
    cout<<"Enter name of first student: "<< endl;
    cin>>s1.name;
    cout<<"Enter name of second student: "<<endl;
    cin>>s2.name;


    s1.display();
    s2.display();


}

