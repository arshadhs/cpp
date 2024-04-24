#include <iostream>
using namespace std;

class node
{
    int data;
    class node * next;

    public:
    node()
    {  data = 55;
      next = NULL;  
    }

    node(int i)
    {
      this->data = i;
      next = NULL;  
    }

    int get() {return data;}

} ;

int main()
{
    cout << "Hello World";
  
    node n[3] = {1, 4, 8};
    node *ptr = n;

    cout << endl;
    for (int i = 0; i< 3; i++)
    {
        cout <<  "\t" << ptr->get();
        ptr++;
    }

    cout << endl;
    // for (int i = 0; i< 8; i++)
    //     cout << "\t" << n[i].get();

    cout << endl;
    return 0;
}