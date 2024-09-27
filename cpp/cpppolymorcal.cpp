#include<iostream>
using namespace std;
class calculator{
	public:
		void add(){};
		void subtract(){};
		void multiply(){};
		void divide(){};
};
class Intcalculator : public calculator {
    int a, b;
public:
    Intcalculator(int x, int y) : a(x), b(y) {}
    void add(){
        cout<<"\nInteger Addition:- "<<a + b ;
    }
    void subtract(){
        cout<<"\nInteger Subtraction:- "<<a - b;
    }
    void multiply(){
        cout<<"\nInteger Multiplication:- "<<a * b ;
    }
    void divide(){
        if (b != 0) {
            cout<<"\nInteger Division:- "<<a / b<<"\n" ;
        } else {
            cout<<"\nError: Division by zero\n";
        }
    }
};
class Floatcalculator : public calculator {
    float a, b;
public:
    Floatcalculator(float x, float y) : a(x), b(y) {}
    void add() {
        cout<<"\nFloat Addition:- "<<a + b;
    }
    void subtract() {
        cout<<"\nFloat Subtraction:- "<<a - b;
    }
    void multiply(){
        cout<<"\nFloat Multiplication:- "<<a * b;
    }
    void divide(){
        if (b != 0.0) {
            cout<<"\nFloat Division:- "<<a / b ;
        } else {
            cout<<"\nError: Division by zero";
        }
    }
};
int main() {
    Intcalculator intcalc(9, 5);
    Floatcalculator floatcalc(19.5, 15.2);

    cout<<"Integer Operations: \n";
    intcalc.add();
    intcalc.subtract();
    intcalc.multiply();
    intcalc.divide();

    cout<<"\nFloat Operations: \n";
    floatcalc.add();
    floatcalc.subtract();
    floatcalc.multiply();
    floatcalc.divide();

    return 0;
}
