//git remote add origin git@github.com:Bartosz89k/pattern.git

#include <iostream>
#include "factory.hpp"
#include "simple_factory.hpp"
#include "builder.hpp"
#include "builder_ok.hpp"
#include "builder_smart_ok.hpp"

using namespace std;

int main(int, char**) {
    

    std::cout << "Hello, world! d \n";
    {
        // using namespace guru;
        guru::Director* director= new guru::Director();
        guru::ClientCode(*director);
        delete director;
    }

    {
        guru::Director* director= new guru::Director();
        guru::ConcreteBuilder1* builder = new guru::ConcreteBuilder1();
        director->set_builder(builder);
        std::cout << "Standard basic product:\n"; 
        director->BuildMinimalViableProduct();
        
        Product1* p= builder->GetProduct();
        p->ListParts();
        delete p;

        std::cout << "Standard full featured product:\n"; 
        director->BuildFullFeaturedProduct();

        p= builder->GetProduct();
        p->ListParts();
        delete p;

        // Remember, the Builder pattern can be used without a Director class.
        std::cout << "Custom product:\n";
        builder->ProducePartA();
        builder->ProducePartC();
        p=builder->GetProduct();
        p->ListParts();
        delete p;

        delete builder;
    }

    {
        std::shared_ptr<smart::Director> director (new smart::Director());
        std::shared_ptr<smart::ConcreteBuilder1> builder (new smart::ConcreteBuilder1());
        
        director->set_builder(builder);
        std::cout << "Standard basic product:\n"; 
        director->BuildMinimalViableProduct();
        
        std::shared_ptr<Product1> p = builder->GetProduct();
        p->ListParts();
        

        std::cout << "Standard full featured product:\n"; 
        director->BuildFullFeaturedProduct();

        p = builder->GetProduct();
        p->ListParts();
        

        // Remember, the Builder pattern can be used without a Director class.
        std::cout << "Custom product:\n";
        builder->ProducePartA();
        builder->ProducePartC();
        p=builder->GetProduct();
        p->ListParts();
    }


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
