#include <exception>

class MyExceptions : public std::exception
    {
        const char* what_arg;
        public:
            MyExceptions(const char* what_arg) throw()
                {this->what_arg = what_arg;}

        ~MyExceptions() throw() {};

        const char* what() const throw()
                {return this->what_arg;}
};
