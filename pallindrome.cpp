#include <iostream>
using namespace std;
int main(){
    int number;
    int copied;
     int reversedNumber = 0;
    cout<<"enter number";
    cin>>number;
    number=copied;
    while(number>0){
    
            int remainder = number% 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number/= 10;
        }

       if(copied == reversedNumber){
          cout<<"yes this is a palindrome number";
    }
    else {
        cout<<"not a palindrome";
    }
    return 0;
}
