#include <iostream>
#include <string>

using namespace std;

class base {
    public:
    virtual void show()=0; //this is converted into a pure virtual function...
   // {
   //     cout << " This is a base class" << endl;
    //}

};
class deriv1: public base {
    public:
       void show()
       {
            cout << " This is a derived class 1 " << endl;
       }

};
class deriv2: public base 
{
 public:
    void show()

        {
           cout <<" Derived Class 2 " <<endl;
        }
};

int main()
{

base *ptr;
ptr=new deriv1();
ptr->show();
ptr=new deriv2();
ptr->show();


    return 0;
}