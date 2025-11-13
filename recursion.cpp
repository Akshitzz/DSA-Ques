//  when a function call itself
//  until a specified condition is met 
//  staack overflow -> memory where function is stored in stack is filled 

//  basic recursion problems 
//  print name 5 times
//  print linearly from 1 to N
//  pint linearly from 1 to N (backtracck)
//  print from n to 1 (backtrack)

#include <iostream>
using namespace std;

int counter =1 ;
void f(){
    if(counter == 4) return ;
    cout <<counter <<endl;
    counter++;
    f();
}

void printname(int i, int n){
    if(i>n) return ;
    cout << "akshit "<<endl;
    printname(i+1,n);
}


void printNum (int i ){
    if(i<1) return ;
    cout << i <<endl;
    printNum(i-1);
}
//  by backtrack i to N
void printNum2(int i ){
    if(i<1) return;
    printNum2(i-1);
    cout << i <<endl;
}
//  by backtrack n to 1
void printNum3(int i ,int n ){
    if(i>n) return;
    printNum3(i+1,n);
    cout << i <<endl;
}

//  sum of first n numbers using paramter and functional way 


int main(){
f();
int i ;
cin >> i;
printname(i,5);
printNum(7);
 printNum2(5);
 printNum3(1,7);
}