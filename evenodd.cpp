#include <iostream>
using namespace std;

bool isEven(int a){
    // odd case 
    if(a&1){
        return 0;
    }
    else{
        // even case 
        return 1;
    }
}



int main(){

int num;
cout<<"Enter the number"<<endl;
cin>>num;

if(isEven(num)){
    cout<<"number is even"<<endl;
}else{
    cout<<"number is odd"<<endl;
}


}