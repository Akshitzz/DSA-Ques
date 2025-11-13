
#include <iostream>
using namespace std;
void triangle(int x){
    
         for( int i =x ;i>0;i--){
             for(int j =1;j<i;j++){
                 cout<<" ";
             }
             for(int z =x;z>=i;z--){
                 cout<<"*";
             }
             for(int y =x;y>i;y--){
                 cout<<"*";
             }
             
             cout<<endl;
         }
}
int main() {
    
        triangle(8);
}