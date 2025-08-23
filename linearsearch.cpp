#include <iostream>
using namespace std;


bool search(int arr[],int size,int key){
    for (int i =0;i<size;i++ ){
        if(key == arr[i]){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,33};

    cout << "Enter the element to search"<<endl;        
    int key;
    cin >>key;

    bool found =search(arr,10,key);

    if(found){
        cout <<"element found"<<endl;
    }else{
        cout << "element not found " <<endl;
    }

    return 0;
}