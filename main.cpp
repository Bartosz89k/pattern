//git remote add origin git@github.com:Bartosz89k/pattern.git

#include <iostream>
#include "factory.hpp"

using namespace std;

int main(int, char**) {
    
    std::cout << "Hello, world! \n";
    
    {
        Machine * mech = new Axe();

        mech->show();
        delete mech;

        Machine mech2;
        mech2.show();

        Axe axe;
        axe.show();
    }

    cout << endl << "old: \n" << endl;
    {
        Machine* axe = MachineFactory::createAxe_old();
        axe->show();
        delete axe;
    }

    cout << endl << "new: \n" << endl;
    {
        //shared_ptr <Machine> axe = MachineFactory::createAxe();
        shared_ptr <Machine> axe =  MachineFactory::create_specific("Axe");

        axe->show();
    }

    {
        shared_ptr <Machine> humm =  MachineFactory::create_specific("Hummer");
        humm-> show();
    }
    
    {
        shared_ptr <Machine> axe =  MachineFactory::create_specific("Axe");
        axe->show();

        shared_ptr <Machine> humm =  MachineFactory::create_specific("Hummer");
        humm-> show();
    }
    
    std::cout << "end \n";

    return 0;    
}
