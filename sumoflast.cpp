#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int first=num/10000;
    num%=10000;
    int second=num/1000;
    num%=1000;
    int third=num/100;
    num%=100;
    int fourth=num/10;
    int fifth=num%10;
    int sum=fourth+first;
    cout<<sum;
    return 0;
}