#include <iostream>
using namespace std;

bool isPrime(int n){

    for( int i =2;i<n;i++){
        if(n%2 ==0){
            // not a prime
            return 0;
        }else{
            //  is a prime
            return 1;
        }
    }
}


int main(){
int x;
cout << "Enter the number"<<endl;    
cin >>x;
if(isPrime(x)){
    cout <<"The number is prime";
}else{
    cout<< "the number is not prime";
}

}