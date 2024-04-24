#include<iostream>
using namespace std;

// Pure Virtual Function

class convert {
  protected:
    double val1;
    double val2;;
  public:
    convert(double x) { val1 = x;}

    double getInitial() { return val1;}
    double getConverted() { return val2; }

    virtual void compute() = 0;     //Pure
};

class l_to_g : public convert {
    public:
        l_to_g(double x) : convert(x) {};
        void compute () { val2 = val1 / 3.7854; }
};

class f_to_c : public convert {
    public:
        f_to_c(double x) : convert(x) {};
        void compute () { val2 = (val1-32)/1.8; }
};

int main()
{
    convert * ptr;

    l_to_g lgObj(100);

    f_to_c fcObj(100);

    ptr = &lgObj;
    ptr->compute();

    std::cout << "\n" << ptr->getInitial() << " lt in grams is " << ptr->getConverted();

    ptr = &fcObj;
    ptr->compute();

    std::cout << "\n" << ptr->getInitial() << " farenhite Temperature in centigrade is " << ptr->getConverted();
    return 0;   
}
