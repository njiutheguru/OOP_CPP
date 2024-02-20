#include <iostream>

using namespace std;

class alpha
{
private:
int a;
int b;
public:
alpha()
{
    a=5;
    b=5;
    stat++;

}
 static int stat;
 static int getstat()
 {
    stat++;
    return stat;
 }

};
int alpha :: stat=0;//global declaration

int main()
{
  alpha a1;
  cout <<" Value using object is " << a1.getstat()<< endl;
  cout <<" Value using class name is: "<< alpha::getstat()<< endl;
  cout <<" Value of a1 obj is:" << a1.stat << endl;
  //cout <<" Value of a2 obj is:" << a2.stat<< endl;
  cout <<" Value of class name is: " << alpha::stat<< endl;

    return 0;
}