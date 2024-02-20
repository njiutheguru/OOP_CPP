#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

//features
class atm
{ 
    private:
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;
    public:
    void setdata(long int account,string name_a, int PIN_a, double  balance_a, string mobile_a)
    {
        account_No=account;
        name=name_a;
        PIN=PIN_a;
        balance=balance_a;
        mobile_No=mobile_a;

    }
    //writing the getters function
    long int getaccountNumber()
    {
        return account_No;
    }
    string getname()
    {
        return name;
    }
    int getPIN()
    {
        return PIN;

    } 

    double getbalance()
    {
        return balance;

    }

     string getMobileNumber()
     {
        return mobile_No;
     }
     void setMobileNumber(string mobile_prev,string mobile_new)
     {
        if(mobile_prev==mobile_No)
        {
              mobile_No=mobile_new;
              cout<<" Successfully updated the mobile No."<< endl;
              _getch();
        }
        else

            {
            
                cout <<" You entered the wrong mobile Number Please try again..." << endl;

                _getch();
            } 

    }

    void cashwithdrawal(int amount)
    { 
        if(amount > 0 && amount < balance )
        {
            balance-=amount;
            cout << " Please Collect your cash." << endl;
            cout <<" Available balance is: " << balance << endl;
            _getch();
        }
        else{

                cout <<" Invalid output  or insufficient balance." << endl;
                _getch();

        }

    }

  
};


int main()
{
  int choice = 0;
  int enterPin;
  long int enterAccoutNo;
  system ("cls");
  atm user1;
  user1.setdata(1234567,"Stephen", 9999, 60000,"254791294295");
  do
  {
    /* code */
    system("cls");
    cout << endl << endl << "*****Welcome to ATM *****"<<endl;
    cout<<endl<<"Enter your Account Number: ";
    cin >> enterAccoutNo;
    cout <<endl <<" Enter your PIN: ";
    cin >> enterPin;
    if((enterAccoutNo == user1.getaccountNumber())&& (enterPin==user1.getPIN()))
    {
        do
        {
            /* code */
            int amount=0;
            string oldmobile, newmobile;
            system("cls");
            cout << endl << endl << " **** WELCOME TO THE ATM*****" << endl;
             cout << endl << "SELECT OPTIONS ";
             cout <<endl << " 1. CHECK BALANCE:";
             cout << endl << " 2.CASH WITHDRAWAL";
             cout << endl << " 3. SHOW USER DETAILS";
             cout << endl << " 4.UPDATE MOBILE NO.";
             cout << endl << " 5. EXIT " << endl;

             cout << " Enter your choice:" ;
             cin>> choice;
             switch(choice)
             {
                case 1:
                cout << endl << " Your bank balance is "<< user1.getbalance() << endl;
                _getch();
                break;
                case 2:
                cout << endl << " Enter the amount that you want to withdrawal:";
                cin>> amount;
                user1.cashwithdrawal(amount);
                break;

                case 3:
                cout<< endl << " USER DETAILS " << endl;
                cout <<endl << "-> ACCOUNT NUMBER: " << user1.getaccountNumber() << endl;
                cout <<endl << "-> PIN: " << user1.getPIN() << endl;
                cout << endl << "->NAME: " << user1.getname() << endl;
                cout << endl << "->BALANCE: " << user1.getbalance() << endl;
                cout << endl << "-> Mobile No: " << user1.getMobileNumber() << endl;
                getch();
                break;
                case 4:
                cout << endl <<" Enter old mobile Number:" << endl;
                cin>>oldmobile;
                cout << endl << " Enter the new mobile Number:" ;
                cin >>newmobile;
                user1.setMobileNumber(oldmobile, newmobile);
                break;

                case 5:
                exit(0);
                default:
                cout<<endl << "ERROR/ INVALID INPUT...pLEASE ENTER VALID DATA" << endl;
    


             }

        } while (1);
        
       
        
    }
    else{
        cout<< endl << " Wrong PIn or Account Number....Please try again." << endl;
        getch();
    }

  } while (1);
  








    return 0;

}
