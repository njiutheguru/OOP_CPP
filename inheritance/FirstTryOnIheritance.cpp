#include "person.h"
person::person() {

}
person::person(std::string first_name_param, std::string last_name_param)
 : first_name(first_name_param), last_name(last_name_param)
 {}
 std::ostream & operator <<(std::ostream & out)