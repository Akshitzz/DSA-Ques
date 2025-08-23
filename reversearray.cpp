#include <iostream>
using namespace std;


void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
}

int main() {
    int arr1[10] = {1, 2, 3, 4, 55, 6, 7, 8, 9, 10};
    int size = 10;

   
    cout << "Original array: ";
    printArr(arr1, size);

 
    reverse(arr1, size);

    
    cout << "Reversed array: ";
    printArr(arr1, size);

    return 0;

}













