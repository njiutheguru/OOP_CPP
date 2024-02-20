#include <iostream>
#include <string>

using namespace std;
int main()
{
    size_t size =0;
    long int sum=0;
    for(size=0;size<1000000000;size++)
    {
        sum=sum+1;
       // if(sum==1000000)
        //{
      //      break;
      //  }
    }
    cout<<"sum: "<<sum<<endl;
}