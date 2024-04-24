#include<iostream>
using namespace std;

// Copy Constructor

class myClass {
        int *data;
    public:
        myClass() {cout << endl << "Empty Constructor";}
        myClass(int i) {cout << endl << "Constructor"; data = new int(i);}

        // Error: invalid constructor; you probably meant 'myClass (const myClass&)'
        // myClass(const myClass obj) { ... }

        // Why Copy Constructor? Shallow Copy / Bitwise vs Deep Copy !
        myClass(const myClass &obj) { cout << "Copy Constructor"; data = new int(*(obj.data));}        

        ~myClass() { cout << endl << "Destructor";}

        void get_data () { cout << endl << "data = " << data << "\t*data = " << *data;}

        void release_data () { delete data;}
};

int main()
{
    myClass obj(9);
    myClass newObj = obj;

    obj.get_data();
    newObj.get_data();


    obj.release_data();

    obj.get_data();
    newObj.get_data();

    return 0;
}

