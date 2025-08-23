//  what is an array 
//  a list which contaon same type of elements 
//  it can be character , class,integer primitiv or non -primitive
//  it stores data at contigous location
//  elements of an array can be accessed by index 
//  why array -> 10k values can be stored in one array variable instead od storing in different 10k variables
//  it can store multiple values
//  implementation
#include <iostream> // For using cout
#include <algorithm> // For using std::fill_n (optional)

// Note: It's common practice to avoid "using namespace std;" in header files,
// but it's okay in .cpp files for small projects.
//  passing array in function 
void printArray (int arr[],int size){
    cout << " printing the array " <<endl;
    // print the array
     for (int i =0; i<size;i++){
        cout << arr[i] << " ";
     }
     cout << "Printing done" <<endl;

}
int main() {
    // Declaring an array of size 10
    int arr2[10];

    // To fill a C-style array,  use a loop or std::fill_n
    // filling the first 5 elements with the value 4
    for (int i = 0; i < 5; ++i) {
        arr2[i] = 4;
    }
    // Alternatively, using std::fill_n:
    // std::fill_n(arr2, 10, 4); // Fills the entire array with 4

    // Initializing an array with values
    int arr[4] = {1, 3, 4, 4};
    int char[5]={'a','b','c','d','r'}
    int j =5;
    for(int i =0;<j-1;++i){
        cout << ch[j];
    }
    double firstDouble[5];
    bool firstbool[4];
    float lol[4];
    // size of a C-style array
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Traversing arr:" << std::endl;
    // Traversing the 'arr' array
    // Loop should go from 0 to n-1 (i.e., i < n)
    for (int i = 0; i < n; i++) {
        // Print the element at the current index 'i', not 'n'
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; 

    std::cout << "Traversing arr2 (first 5 elements):" << std::endl;
    // Traversing the 'arr2' array
    for (int i = 0; i < 5; i++) { // Only printing the 5 elements we filled
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0; 
}


// homework -> how to initialize entire array with any value 