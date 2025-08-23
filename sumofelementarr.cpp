//  sum of all elements of arr 

#include <iostream>
using namespace std ;

int sumofEle (int num [],int n){
    int sum =0 ;
    for (int i =0;i<n;i++){
        sum+=num[i];
    }
    return sum;
    
}


int main (){
    
    int size;
     cin >>size ;
     cout << "size of arr"<<size;
    int num1[size];
    for (int i =0;i<size;i++){
        cin >> num1[i];
    }
    //  traversing the array 
    for (int i=0;i<size;i++){
        cout<< num1[i]<<" ";
    }
        cout << "array printed" << " ";
        
        cout << "Sum of elements of array "<<sumofEle(num1,size)<<endl;
    
    
    
}