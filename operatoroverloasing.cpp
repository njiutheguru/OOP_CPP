#include <iostream>
#include <string>
 using namespace std;

 class person
 {
     private:
     int weight;
     public:
     person(int w=0)
     {
        weight = w;
     }
     friend bool operator > (person x, person y);
     friend bool operator < (person x, person y);
 };

  bool operator > (person x, person y)

   {
     return x.weight > y.weight;
   }
  bool operator < (person x, person y)
  {
     return x.weight < y.weight;
  }

 int main()
 {
   int w1, w2;
   cout <<"enter weight of John: " << endl;
   cin>>w1;
   cout <<" enter weight of Steve: " <<endl;
   cin >>w2;

person john(w1);
person steve(w2);
if(john>steve)
{
    cout << "John is heavy than steve" << endl;

}
else 
{
    cout <<" Steve is heavy than John" << endl;
}

    return 0;

 }