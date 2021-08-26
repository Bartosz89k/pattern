// Adapter

class RoundPeg { // target
    public:

    int Radius;
    
    RoundPeg() {
        Radius = 4;
    }

    virtual int getRadius() {
        return Radius;
    }

};

// useful but not compatible
class SquarePeg{

    public:

    int Width;
    
    SquarePeg( )  {
        Width = 6;
    }

    int getWidth() {
        return Width;
    }
};

class HoleAdapter: public RoundPeg {
    
    public:
    SquarePeg * square_peg;
    HoleAdapter(SquarePeg * sqpg ) : square_peg(sqpg)   {}

    int getRadius(){
        int tmp = square_peg->getWidth();
        tmp = (tmp/2 ) ; // * sqrt(2); 
        return tmp;
    }

};

// Target
class RoundHole  { 
    int hole = 5;

    public:
    RoundHole(int h) : hole(h) {}

    int checkRadius(RoundPeg * roundPeg) {
        cout << "roundPeg->getRadius() = " << roundPeg->getRadius() << endl;;
        cout << "hole = " << hole << endl;

        if (roundPeg->getRadius() < hole) {
            return 1;
        }
        else 
            return 0;
    }
};