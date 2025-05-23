// class is a user defined data type
// object is an intance of a class
//  class is a type of template 
// in memory a block is created for storing object thats  why it took 4 byte space 
// it stores a grabage value if value of object is no defined 
// empty class -> not property what is size ? -> 1 byte memeory 
//  access of property of data memeber using dot operator 
//  access modifier - > private ,public ,protected 
//  public -> data memebers can be access from anywhere 
// private -> can be accessed within class only 
//  protected ->
// copy contructor ->used in object creation time 
// deep and shallow copy 
// default copy contructor do shallow copy 
// shallow copy changes the orginal product also 
// deep copy -> points to orginal but doesnt change original one
// copy assignment operator -> hero a (10,'c') hero b (20,'b')
// a=b
// destructor -> used to dellocate memory (free memory) same name as class name also doenst have input param and return type
// static keyword -> a data membor which belongs to class access krne ke liye no need to make object 
// first initalize the static member outside main function
// scope resolution operator
// static functions no need to create object do not have this keyword
// pointer to current object
// static functions can access static members only
#include "hero.cpp" // including class from other file 
#include <iostream>
using namespace std;











    
    class Hero {


    // properties
   public:
    int health ;
    static int timeToComplete;
    char level ;
    int fr;
    char fr2;
    char *name;

    private:
    char level2;
    void print (){
        cout << "health" <<endl;
        cout << level2 << endl;

    }
    static int random(){
        return health;
    }
    void print(){
        cout <<endl;
        cout << "Name:" <<this->name<<",";
        cout <<"health" <<this->health<<endl;
        cout <<"level" <<this->level<<endl;
    }
    // copy contructor 

    // Hero(Hero &temp) {
    //     this->health=temp.health;
    //     this->level =temp.level;
    // }
    //     int getHealth(){  //getter
    //         return level2 ;
    //     }

    //     int setLevel(){ // setter 
    //             level2 = ch;
    //     }

        Hero(){
            cout << "Constructor called" <<endl ;
        }
        Hero(int health){
            cout << "this->" <<this <<endl ;
          this-> health = health;
        }


        void setName(char name()){
            strcpy(this->name,name);
        }
        ~Hero(){
            cout << "Destructor bhai called" <<endl ;
        }
};

int Hero :: timeToComplete =5;



int main (){
    cout <<Hero::random()<<endl;
 cout << Hero ::timeToComplete <<endl;
// static
    Hero a;
    cout <<a.timeToComplete<<endl; // not recommended
    // dynamic
    Hero *b =new Hero()
    // manually call destructor
    delete b;

    Hero b ;
    b.timeToComplete =10
    cout << a.timeToComplete <<endl;
    cout << b.timeToComplete <<endl;







     Hero hero1;
     hero1.setHealth(12);
     hero.setLevel('D');
     char name[7]="Babbar";
     hero1.setName(name);

     hero1.print();
    //   use default copy contructor
    Hero hero2(hero1);
    hero2.print();

    // Hero hero2 =hero1;
    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();



   Hero S(78,'c');
   S.print();

//    Copy contructor
Hero R(S);
R.print();
   




    hero1 =hero2;
    hero1.print();
    hero2.print();




    cout << "Hi" <<endl;
    Hero ramesh2(10);
    cout <<  "Address of ramesh is  " <<  &ramesh2 <<endl;
    cout << "hello" <<endl ;
    // bts -> when we create an object a constructor is called 
    //  what is constructor it is invoked during object creation doesnt have any return type and params
    // this keyword->  refering to nearest scope
    // current object address stores in this keyword this is  a pointer points at current object 
    // default contructor -> by default name  of class 
    // paramterized constructor ->  contructor having parameters
    // copy contructor ->
    //  static allocation 
    // creation of an object 
    Hero ramesh ;
    // dynamic allocate memory (heap memory)
     Hero *b = new Hero;

     b.setLevel('A');
     b.setHeath(80);

     cout << "level is " << (*b).level << endl;
     cout << "health is " << (*b).getHealth() << endl;


     cout << "level is " << b->level << endl;
     cout << "health is " << b->getHealth() <<endl;

    cout << "Size of ramesh is " << sizeof(ramesh) << endl ;
    cout << "Health of ramesh is " << ramesh.getHealth() <<endl ;
    ramesh.setLevel(70);
    ramesh.health = 70;
    ramesh.level ='A';
    Hero h1 ;
    cout << "size of :" << sizeof(h1) <<endl ;
    cout << "health is :" <<ramesh.health <<endl;
    cout << "level is :" <<ramesh.level <<endl ; 
    return 0;
}

// difference between contructor and destructor
// ~Hero(){
// }
// getter and setter 
//  function inside a class to access data members of a class
// if you create an object statically destructor will be called automatically
// not in the case of dynamic allocation
// homework - > padding greedy alignment
// hw -> constant keyword and how it is used in object keyword constant object creation initialization list 