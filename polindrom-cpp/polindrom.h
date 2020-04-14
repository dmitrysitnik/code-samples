#include <cstdlib>
#include <string>

class Polindrom
{
private:
    std::string mInput;


    void InputLength();

public:
    Polindrom();
    ~Polindrom();
    

    void Process();

    void SetInput(std::string input);

    void testShow(char* message);
};


