// factory
#include <iostream>

using namespace std;

static int statI = 0;

class Machine {
public:

    Machine () {
        cout << "constructing Machine" << statI << endl;  
    }

    virtual ~Machine() { 
        cout << "destructing Machine" << statI << endl;       
    }

    virtual void show(void) {
        cout << "hiho mech: " << statI <<  endl;
    }
};

class Axe: public Machine{
    public:

    Axe () {
        cout << "constructing Axe" << statI << endl;  
    }
    
    void show(void) {
        cout << "hiho axe: " << statI << endl;
    }

    ~Axe() {
        cout << "destructing Axe" << statI << endl;
    }
};

class MachineFactory {
    public:
    
    MachineFactory() {
        cout << "constructor MachineFactory" << endl;
    }

    // a nonstatic member reference must be relative to a specific objectC/C++(245)
    static Machine* createAxe() {
        return new Axe();
    }

    ~MachineFactory() {
        cout << "destructor MachineFactory" << endl;
    }

    // static Machine* createHummer() { return new Hummer(); }
};