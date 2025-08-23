#include <iostream>
using namespace std;

int factorial(int n){
    int fact =1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n, int r){
    int  numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);
    return numerator/denominator;
}


int main(){
    int n;
    int r;

    cin >>n>>r;
    cout << "The answer is"<<ncr(n,r)<<endl;


}