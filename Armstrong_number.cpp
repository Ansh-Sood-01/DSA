#include<iostream>
using namespace std;
int main(){
    int num ,num2;
    cout<<"enter a number"<<endl;
    cin>>num;
    num2=num;
    int arm=0;

    while(num){
        int temp =num%10;
        arm = arm+ (temp*temp*temp);
        num =num/10;

    }
    if(arm==num2) cout<<"Armstrong Number yeahhhhh!!";
    else cout<< "Broo you failed!!";
}