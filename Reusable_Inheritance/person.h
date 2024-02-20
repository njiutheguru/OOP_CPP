
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
class parent{
  
public: 
parent()=default;
parent(int member_var) : m_member_var(member_var){

}
~parent()=default;
//void parent::print_var() const
void print_var() const {
    std::cout <<"The Value in parent is: "<<m_member_var<<std::endl;
}
protected:
int m_member_var{100};
};
#endif