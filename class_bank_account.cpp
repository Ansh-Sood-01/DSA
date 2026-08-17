#include<iostream>
using namespace std;
class BankAccount{
public:
    int accountNumber;
    string accountHolder;
    float balance;

    int deposit(int amount){
        balance =balance+ amount;
    }

    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder name: "<<accountHolder<<endl;
        cout<<"Account balance: "<<balance<<endl;
    }

};
int main(){
    BankAccount A1;
    cout<<"enter name of account holder "<<endl;
    cin>>A1.accountHolder;
    cout<<"enter account number "<<endl;
    cin>>A1.accountNumber;
    cout<<"enter account balance "<<endl;
    cin>>A1.balance;

    A1.display();
    int amount;
    cout<<"enter amount to add"<<endl;
    cin>>amount;
    A1.deposit(amount);

    A1.display();


}
