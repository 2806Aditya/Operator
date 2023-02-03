#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int first=num/100;
    num%=100;
    int second=num/10;
    int third=num%10;
    
    int sum=first+second+third;
    cout<<sum;
    return 0;
}