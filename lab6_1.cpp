#include<iostream>
using namespace std;

int main(){
    int x=1
    int even=0, odd=0;
    while(x!=0)
{
cout << "Enter an integer: ";
cin >> x;
if(x%2==0){
    even++;
    }
else{
    odd++;
}
}

    
   
    cout << "#Even numbers = ";
    cout << "#Odd numbers = ";
    return 0;
}
