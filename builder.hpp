//#pragma once

// builder

class Head {
    public:
    int weight;
};

class Handler {
    public:
    int length;
};

class Hammer2 {
    public:
    Head* hd;
    Handler* hand;

    void spec_info(void) {
        cout << "Head weight: " << hd->weight << endl;
        cout << "Handler length: " << hand->length << endl;
    }
};

class Builder{
    public:

    virtual Head* getHead(void) = 0;
    virtual Handler*  getHandler(void) = 0;

    virtual ~Builder () = 0;
};
Builder::~Builder()
{
    std::cout << "Builder pure virtual destructor is called";
}


class Director {
    public:

    Builder *builder;

    void setBuilder (Builder * new_builder) {
        builder = new_builder;
    }

    Hammer2* getTool() {
        Hammer2 *new_hammer = new Hammer2(); 
        new_hammer->hd = builder->getHead(); 
        new_hammer->hand = builder->getHandler();
        return new_hammer;
    }
    ~Director() {
        cout << "Destructor Director \n" << endl;
        // delete 
    }
};

class WarHammer : public Builder {
    public:

    Head* getHead(void) {
        Head * head = new Head();
        head->weight = 5;
    }

    Handler* getHandler(void) {
        Handler * hand = new Handler();
        hand->length = 15;
    }
    ~WarHammer() {
        cout << "Destructor WarHammer \n" << endl;
    }
};

class ConstructionHammer : public Builder {
    public:

    //virtual Head* getHead(void) = 0;
    //virtual Handler*  getHandler(void) = 0;
    Head* getHead(void) {
        Head * head = new Head();
        head->weight = 1;
    }
    
    Handler* getHandler(void) {
        Handler * hand = new Handler();
        hand->length = 5;
    }

    ~ConstructionHammer() {
        cout << "Destructor ConstructionHammer \n" << endl;
    }
};
