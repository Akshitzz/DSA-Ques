// searching an element in 2d array
#include <iostream>
using namespace std;

bool isPresent(int arr[][4],int target, int row , int col){
    for(int i=0; i <3; i++){
        for (int j=0;j<4;j++){
            if(arr[i][j]==target){
             return 1;
            }
           
        }
    }
        return 0;
}

int main(){
int arr[3][4]={11,115,4,3,12,17,44,55,66,77,33,123};

cout << "Enter the element to search";
 int target;
 cin>>target;
if(isPresent(arr,target,3,4)){
    cout<<"Element found";
}
else{
    cout<<"Element not found";
}
}
// complexity m*n or nsqure when row=col
