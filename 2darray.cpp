// how 2d array stored in memory 
//  stored like a linear array in memory  how to find index  
//  formula c*i +j where i = row and j = column

#include <iostream>
using namespace std;
int main(){
     // creation of 2d array
     int arr[4][3]; // where 4 is the the no of rows and 3 is the no of columns
    //  taking input
// cin>> arr[i][j]
// output
// cout<<arr[i][j]
// taking input row wise
//  for (int i =0 ; i <4 ; i++){
//     for (int j=0 ; j<3;j++){
//         cin >> arr[i][j];
//     }
//  }
int arr1[3][4]={2,3,4,5,6,7,8,9,0,1,11,10};
int arr2[3][4]={{2,22,222,22222},{3,33,333,3333},{4,44,4444,444444}};
//  taking input col wise
 for (int i =0 ; i <4 ; i++){
    for (int j=0 ; j<3;j++){
        cin >> arr[i][j];
    }
 }
// print
 for (int i =0 ; i <4 ; i++){
    for (int j=0 ; j<3;j++){
        cout << arr[i][j]<< " ";
    }
    cout<<endl;
 }
 return 0;
}