//git remote add origin git@github.com:Bartosz89k/pattern.git

#include <iostream>

using namespace std;

// factory design pattern
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

    static Machine* createAxe() {
        return new Axe();
    }

    ~MachineFactory() {
        cout << "destructor MachineFactory" << endl;
    }

    // static Machine* createHummer() { return new Hummer(); }
};

int main(int, char**) {
    
    std::cout << "Hello, world! df4 \n";
    
    {
        Machine * mech = new Axe();

        mech->show();
        delete mech;

        Machine mech2;
        mech2.show();

        Axe axe;
        axe.show();
    }


    std::cout << "last part \n" << endl;
    {
        Machine* axe = MachineFactory::createAxe();
        axe->show();
        delete axe;
    }

    std::cout << "end \n";

    return 0;    
}
