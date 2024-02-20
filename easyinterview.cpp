#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*class Person
{
     private:
     public:
};*/

int main()
{
    static int x=1;
     x++;
     if(x<11)
        {
            main();
        }
        
       
     
        cout<< "The value of x is " << x << endl;
     
    /*int integer;
            cout<<" Enter an integer" << endl;
            cin>> integer;
            cout<<integer<<endl;
            */

    return 0;
}