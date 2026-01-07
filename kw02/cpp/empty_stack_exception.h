#include <stdexcept>
#include <string>

using namespace std;

class empty_stack_exception: public domain_error{
    public:
    empty_stack_exception(string info): domain_error{info}{};
};