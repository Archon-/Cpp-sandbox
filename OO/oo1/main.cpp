#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("PAUSE");
    return EXIT_SUCCESS;
}

class someClass
{
    int priv1; // default private
    
    public: // from now to down, public
        int pub1;
        int pub2;
        
    protected: // from now to down, protected
        int prot1;
        
        int prot2;
        
    private:
        int priv2;
        
    public: // specifier can be repeated
        int pub3;
        
    protected:
        int chronione3, chronione4;
};
