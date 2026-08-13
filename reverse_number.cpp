#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number to reverse"<<endl;
    cin>>num;
    int reverse=0;

    while(num){
        int temp= num%10;
        reverse =reverse*10 + temp;
        num = num/10;

    }
    cout<<reverse<<endl;
}