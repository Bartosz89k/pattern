// factory
#include <iostream>
#include <memory>


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

class Hummer: public Machine{
    public:

    Hummer () {
        cout << "constructing Hummer" << statI << endl;  
    }
    
    void show(void) {
        cout << "hiho Hummer: " << statI << endl;
    }

    ~Hummer() {
        cout << "destructing Hummer" << statI << endl;
    }
};

class MachineFactory {
    public:
    
    MachineFactory() {
        cout << "constructor MachineFactory" << endl;
    }

    // a nonstatic member reference must be relative to a specific objectC/C++(245)
    static Machine* createAxe_old() {
        return new Axe();
    }

    // new way! 
    static shared_ptr<Machine> createAxe() {
        return shared_ptr<Axe> (new Axe());
    }

    static shared_ptr<Machine> create_specific(const string& type) {

        if (type == "Axe") {
            return shared_ptr<Axe> (new Axe());
        }

        else if (type == "Hummer") {
            return shared_ptr<Hummer> (new Hummer());
        }
        
    }
    

    ~MachineFactory() {
        cout << "destructor MachineFactory" << endl;
    }

    // static Machine* createHummer() { return new Hummer(); }
};