// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Base1; //forward declaration
class Base{
    int length;
    public:
    Base(int a=0 ){
        length = a;
    }
    friend Base1 addTwo(Base b1 , Base1 b2);
   
};
class Base1{
    int length;
    public:
   friend Base1 addTwo(Base b1 , Base1 b2);
   void display(){
       cout<<"the added length is"<<length<<endl;
   }
   Base1(int b=0 ){
        length = b;
    }
    
};
Base1 addTwo(Base b1 , Base1 b2){
    Base1 temp;
    temp = b1.length + b2.length;
    return temp;
    
};


int main() {
Base b1(10);
Base1 b2(10);
Base1 tempp;

tempp = addTwo(b1,b2);
tempp.display();
  

    return 0;
}