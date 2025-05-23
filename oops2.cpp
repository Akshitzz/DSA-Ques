// lec 43 

// encapsulation abstraction polymorphism


// encapsulation -: wrapping up data memebers and functions (data hiding or information hiding )
// class can be marked read only 
// code can be reused 
// helps in unit testing
//  implementation 
// properties or state and methods (behaviour) wrapping in single entity

// fully encapsulated class contains all data members which are private marked
// can be used in same class no other class can acess it 
// inheritance -:  one class can inherit properties of another class
// public mode 

# include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight = w;
    }
};
class Student {

    private:
    std::string name;
    int age ;
    int height;


    public:
    int getAge(){
        return this->age;
    }
    void setAge(int a){
        this->age = a;
    }


};
class Male :public Human {
    public:
    int color;
    int sleep(){
        cout << "Male sleeping" <<endl;
    }
    int getColor(){
        return this->color;
    }
};

int main (){
    Male object1;
    cout << object1.age <<endl;
    cout << object1.weight <<endl;
    cout << object1.height <<endl;
    cout << object1.color <<endl;
    Student first ;
    cout << "Sb shi clhra hai "<<endl;

}