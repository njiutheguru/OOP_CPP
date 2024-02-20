#include <iostream>
#include <string>
 using namespace std;

 class base
 {
    //private:
    public:
       base()
       {
        cout << " this is a default constructor" << endl;
       }
       base (int b)
       {
        cout << "this is a parameterized constructor" <<b<<  endl;
       }
    

 };
 class derived : public base 
    {

    };

  int main()
  {

   derived d;

   //derived d(34); this results in an error


    return 0;

  }





