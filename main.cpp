//git remote add origin git@github.com:Bartosz89k/pattern.git

#include <iostream>
#include "factory.hpp"
#include "simple_factory.hpp"
#include "builder.hpp"

using namespace std;

int main(int, char**) {
    
    std::cout << "Hello, world! \n";
    {
        Hammer2 * hammer;
        Director direct;
        WarHammer warHammer;
        direct.setBuilder(&warHammer);

        hammer = direct.getTool();

    }
    {
        SimpleTool toolFact;

        SimpleTool * hammer = toolFact.getTool("Hammer"); //SimpleTool::getTool("Hammer"); (static fcj. only!)
        hammer->show();
        
        SimpleTool * axe = toolFact.getTool("Axe");
        axe->show();
    }

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
        shared_ptr <Machine> hammer =  MachineFactory::create_specific("Hammer");
        hammer-> show();
    }
    
    {
        shared_ptr <Machine> axe =  MachineFactory::create_specific("Axe");
        axe->show();

        shared_ptr <Machine> hammer =  MachineFactory::create_specific("Hammer");
        hammer-> show();
    }

    std::cout << "end \n";

    return 0;    
}
