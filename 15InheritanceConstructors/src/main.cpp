#include <iostream>

using namespace std;

class Base
{
private:
    int Value;
public:
    Base():Value{0}{cout << "Base no-args constructor" << endl;}
    Base(int x):Value{x}{cout << "Base overloaded constructor" << endl;}
    Base(const Base &other) : Value{other.Value} {cout << "Base copy constructor" << endl;}
    ~Base(){cout << "Base destructor" << endl;}

    Base &operator= (const Base &rhs){
        cout << "Base operator" << endl;
        if (this == &rhs)
            return *this;
        Value = rhs.Value;
        return *this;
    }
};

class Derrived: public Base
{
    using Base::Base;
private:
    int DoubledValue;
public:
    Derrived()
        :Base{},DoubledValue{0}{
            cout << "Derrived no-args constructor" << endl;}

    Derrived(int x)
        :Base{x},DoubledValue{2*x}{
            cout << "Derrived overloaded constructor" << endl;}
    
    Derrived (const Derrived &other) 
        :Base(other), DoubledValue{other.DoubledValue} {
            cout << "Derrived copy constructor" << endl;
    }

    Derrived &operator= (const Derrived &rhs){
        cout << "Derrived = operator" << endl;
        if (this == &rhs)
            return *this;
        Base::operator=(rhs);
        DoubledValue = rhs.DoubledValue;
        return *this;
    }
            
    ~Derrived(){cout << "Derrived destructor" << endl;}
};

int main() {

    Derrived d {1000};
    Derrived c {d};
    Derrived a;
    a = c;
    return 0;
}