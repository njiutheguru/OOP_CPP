#include <iostream>
#include <string>

using namespace std;

class base
{
    public:
    virtual ~base()
    {
        cout <<" Base class destructor" << endl;
    }

};
class derived : public base
    {
        public:
        ~derived()
        {
            cout <<" the derived class destructor" << endl;
        }
        
    };
    
 int main()
 {

    base *ptr=new derived;
    delete ptr;
    return 0;
 }