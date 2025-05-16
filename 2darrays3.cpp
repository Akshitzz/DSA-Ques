// row wise sum
#include <iostream>
using namespace std;
void printSum( int arr[][4],int i , int j){
        cout<<"Printing the sum";
    for (int i =0; i<3 ; i++){
        int sum =0;
        for (int j =0; j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}
//  col wise sum
// void printColSum( int arr[][4],int i , int j){
//         cout<<"Printing the sum";
//     for (int j =0; j<4 ; i++){
//         int sum =0;
//         for (int i =0; i<3;i++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
// }
int largestrowSum(int arr[][4],int i , int j ){
        int maxi = INT8_MIN;
        int rowindex = -1;
         for (int i =0; i<3 ; i++){
        int sum =0;
        for (int j =0; j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex = i;

        }
     }
     cout << "The maximun sum is" << maxi;
     return rowindex;
}
int main(){
    int arr[3][4];
    for (int i =0; i<3 ; i++){
        for (int j =0; j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the 2d array";
    for (int i =0; i<3 ; i++){
        for (int j =0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printSum(arr,3,4);
   int ansIndex = largestrowSum(arr,3,4);
   cout<<ansIndex<<" ";
}