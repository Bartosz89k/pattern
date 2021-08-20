//simple_factory.hpp


class SimpleTool {
    public:
    string type;

    SimpleTool() : type("") {}

    SimpleTool* getTool(const string &_type) ;

    virtual void show() {
        cout << "type: " << type << endl;
    }

};

class SimpleHammer : public SimpleTool {
    public:

    SimpleHammer() {
        type = "Hammer";
    }

    void show() {
        cout << "type: " << type << endl;
    }
};

class SimpleAxe : public SimpleTool {
    public:
    SimpleAxe() {
        type = "Axe";
    }

    void show() {
        cout << "type: " << type << endl;
    }
};


  SimpleTool* SimpleTool::getTool(const string &_type) {
    if("Hammer" == _type) {
        return new SimpleHammer;
    } 
    else if("Axe" == _type ){
        return new SimpleAxe;
    }
}