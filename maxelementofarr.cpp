#include <iostream>

using namespace std ;

//  this function finds the maximum element of an array 
int getMax (int num[],int n){
    int maxi = INT_MIN;
    for (int i = 0 ;i<n;i++){
        maxi = max(maxi,num[i]);
        // if(num[i]>max){
        //     max = num[i];
        // }
    }
    return maxi;
}
//  this  function finds the minimum element of an array
int getMin (int num[],int n){
    int mini = INT_MAX;
    for (int i = 0 ;i<n;i++){
        mini = min(mini,num[i]);
        // if(num[i]<min){
        //     min = num[i];
        // }
    }
    return mini;
}
int main (){

    int size ;
    cin >> size ;

    int num[size];

    for (int i =0 ; i <size ;i++){
        cin >> num[i];
    }
    cout<< "Maximum value is "<< getMax(num,size)<<endl;
    cout<< "Minimum value is "<< getMin(num,size)<<endl;
}