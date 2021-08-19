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


    {
        Machine* axe = MachineFactory::createAxe();
        axe->show();
        delete axe;
    }

    std::cout << "end \n";

    return 0;    
}
