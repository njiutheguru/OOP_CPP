#include <iostream>
#include <string>
using namespace std;
//#include <vector>
//#include <string_view>
/*
The six characteristics of OOPS in cpp
-class
-object 
-Abstraction
-encapsulation
-Polymorphism
-Inheritance

*/
class person
{
    private:
    //writing the member variable s
    //int length=0,breadth=0;
    string name;
    int age;
    float height;

    public:
     /*void setdata(int x,int y)
     {
      //  length=x;
        breadth=y;
     }*/
   
     void getdata()
     {
      cout <<"name: " << name <<endl;
      cout <<"age: " << age << endl;
       cout << " height: " << height<< endl;
     }
     person(string name_a="NULL", int age_a=0, float height_a=0.0f)
     {
      name=name_a;
      age=age_a;
      height=height_a;

     }
     
     person(person &obj2)
     {
      name=obj2.name;
      age=obj2.age;
      height=obj2.height;
     }
     /*

     void area()
     {
        std::cout << "area of the house is " <<length*breadth << std::endl;

     }
     */
     
};

int main()
{
    std::cout << "hello" << std::endl;
    /*house gini;
    gini.setdata(300,500);
    //gini.length=80;
    gini.area();*/
    person obj;
    obj.getdata();
    person obj2 ("Stephen Njiu",49,5.3);
    obj2.getdata();
    person obj3(obj2);
    obj3.getdata();
    return 0;
}
/*
in oop we combine functions and data variables together
memory is created when we create objecct form that class
 //access specifiers are used to hide data
 private class provide tht onjects can only managed in that class
 //polymortphism works like funtion overloading
 abstraction means hiding complicated data from the users 
 Inheritance refers to inheriting certain features from the parent class
 constructors 
 destructores 
*/
//implementing the copy constructor in cpp