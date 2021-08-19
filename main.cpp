//git remote add origin git@github.com:Bartosz89k/pattern.git

#include <iostream>

using namespace std;

// factory design pattern

class Machine {
public:
    ~Machine() { 
        cout << "destructing Machine" << endl;       
    }
    void show(void) {
        cout << "hiho mech" << endl;
    }
};

class Robot: public Machine{
    public:
    
    void show(void) {
        cout << "hiho rob" << endl;
    }

    ~Robot() {
        cout << "destructing Robot" << endl;
    }
};

int main(int, char**) {
    std::cout << "Hello, world! df4 \n";

    Machine * mech = new Robot();

    mech->show();

    return 0;    
}
