#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include <string_view>  

using namespace std;

class person
{
    friend ostream& operator <<(ostream & out, const person & person);
    public:
    person();
    person(string &first_name_param,string &last_name_param);
    ~person();

    //getters
    string GetFirstName() const {
        return first_name;
    }
    string get_last_name() const {
        return last_name;
    }
    private:
    string first_name{"Mysterious"};
    string last_name{" Person"};
};
#endif