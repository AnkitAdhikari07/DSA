#include<iostream>
#include<string>
using namespace std; 


// // -------- Making a constructor ----------

// class Hero{
//     public:

//         Hero(){
//             cout<<"This is constructor";
//         }
// };


// int main(){

//     cout<<"Hi"<<endl;
//     Hero ramesh;
//     cout<<endl<<"This is simple";

//     return 0;
// }





// --------------Parameterised constructor and this keyword use ------------

// class Hero{
//     int health;

//     public: 

//     Hero(int health){
//         cout<<"This -> "<<this<<endl;
//         this -> health = health;
//     }

//     int getHealth(){
//         return health;
//     }

// };


// int main(){

//     Hero ramesh(10);
//     cout<<"Address of ramesh " << &ramesh <<endl;
//     ramesh.getHealth();


//     return 0;
// }




// ----------- copy constructor -----------------

// Create a demo class
// class A{
//     public:
//         int x;
// };

// int main(){
//     A a1;
//     a1.x = 10;
//     cout<<"a1 x value is : "<<a1.x<<endl;

//     // Copy constructor calling
//     A a2(a1);
//     cout<<"a2 x value is : "<<a2.x<<endl;

//     return 0;
// }





// ----------- user defined copy constructor --------------

// class A{
//     public:
//         int x;

//         A(){

//         };

//         // user defined copy constructor
//         A(A& t){
//             x = t.x;
//             cout<<"Calling copy constructor"<<endl;
//         }
// };

// int main(){
//     A a1;
    
//     a1.x = 10;
//     cout<<"a1 x value is : "<<a1.x<<endl;

//     A a2(a1);
//     cout<<"a2 x value is : "<<a2.x<<endl;

//     return 0;
// }





// -------- Destructor----------------

// class Hero{
//     public:
//         Hero(){
//             cout<<"Simple constructor called"<<endl;
//         }

//         ~Hero(){
//             cout<<"Destructor bhai called"<<endl;
//         }
// };

// int main(){
//     // Static 
//     Hero a;

//     // Dynamic
//     Hero *b = new Hero();
//     // manually destructor call
//     delete b;

//     return 0;
// }




//---------- Static keyword as a class variable -------

// class Hero{
//     public:
//         static int TimetoComplete;
// };

// int Hero :: TimetoComplete = 10;

// int main(){
//     // Right way because no need to make an object 
//     cout<<Hero::TimetoComplete<<endl;
    
//     // This method is not recommended although it give right answer
//     Hero a;
//     cout<<a.TimetoComplete;

//     return 0;
// }





//--------------- Static function -------------

// class Hero{
//     public:
//         static int TimeToComplete;

//         static int random(){
//             return TimeToComplete;
//         }
// };

// int Hero::TimeToComplete = 50;

// int main(){
//     cout<<Hero::random()<<endl;

//     return 0;
// }







// --------- Encapsulation ---------

// class Student{
//     private:
//         int age;
//         string name;

//     public:
//         int getAge(){
//             return this->age;
//         }
// };

// int main(){
//     Student s;
//     cout<<"Sab sahi chal raha hai";

//     return 0;
// }





// --------- Inheritance -------------

// class Human{
//     public:
//         int height;
//         int weight;
//         int age;

//     public:
//         int getAge(){
//             return this->age;
//         }
//         void setWeight(int w){
//             this->weight = w;
//         }
// };

// class Male: public Human{
//     public:
//         string color;

//         void sleep(){
//             cout<<"Male Sleeping"<<endl;
//         }
// };

// int main(){

//     Male object1;
//     cout<<object1.age<<endl;
//     cout<<object1.weight<<endl;
//     cout<<object1.height<<endl;
//     cout<<object1.color<<endl;
//     object1.sleep();
//     cout<<endl;
//     object1.setWeight(180);
//     cout<<object1.weight;

//     return 0;
// }






// -------------- Multiple Inheritance ----------------

// class Vehicle{
//     public:
//         Vehicle(){
//             cout<<"This is a Vehicle"<<endl;
//         }
// };

// class FourWheeler{
//     public:
//         FourWheeler(){
//             cout<<"This is a 4 Wheeler"<<endl;
//         }
// };

// class Car:public Vehicle, public FourWheeler{
//     public:
//         Car(){
//             cout<<"This 4 Wheeler Vehical is a Car";
//         }
// };

// int main(){

//     Car c;

//     return 0;
// }






// ------------- Inheritance Ambiguity -------------

// class A{
//     public:
//         void fun(){
//             cout<<"I am class A"<<endl;
//         }
// };

// class B{
//     public:
//         void fun(){
//             cout<<"I am class B";
//         }
// };

// class C : public A, public B{

// };

// int main(){
//     C obj;

//     obj.A::fun();
//     obj.B::fun();

//     return 0;
// }






// --------- Method Overriding -----------

class Animal{
    public:
    void speak(){
        cout<<"Inside animal";
    }
};

class Dog: public Animal{
    public:
    void speak(){ 
        cout<<"Outside Animal";
    }
};

int main(){
    Dog d;
    d.speak();

    return 0;
}