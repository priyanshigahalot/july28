#include <iostream>
using namespace std;
int main(){
    int number;
    int reversedNumber=0;
    cout<<"enter a number";
    cin>>number;
    while(number>0){
    
            int remainder = number% 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number/=10;
        }
        cout<<reversedNumber;
}