#include <iostream>
#include <string>

using namespace std;

class alpha
{
    private:
    int a1;
    public:
    alpha (int arg=0)
    {
        a1=arg;
    }
    friend void fun();
    
   

};
class beta
{
    private:
    int b1;

    public: 
       beta (int arg=0)
       {
          b1=arg;
       }
       friend void fun(); //the keyterm friend acts as a bridge between two classes

};
void fun()
{
    alpha a(2);
    beta b(8);
    int x=a.a1 + b.b1;
    cout <<" sum is: "<< x << endl;

}

int main()
{
    fun();
    return 0;
}