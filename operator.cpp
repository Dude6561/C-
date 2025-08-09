// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Exp{
    int inch;
    int meter;
    public:
     Exp() {
        inch = 0;
        meter = 0;
    }
    Exp(int a, int b){
        inch = a;
        meter = b;
    }
    Exp operator + (Exp e){
        Exp temp;
        temp.inch = inch + e.inch;
        temp.meter = meter + e.meter;
        return temp;
    }
    void display(){
        cout <<"inch"<< inch << endl;
        cout <<"meter"<< meter << endl;
    }
};

int main() {
    Exp e1(5,6), e2(5,8), e3;
    e3 = e1+e2;
    e3.display();

    return 0;
}