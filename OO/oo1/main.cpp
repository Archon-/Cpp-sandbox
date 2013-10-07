#include <cstdlib>
#include <iostream>

using namespace std;

class someClass
{
    void privMethod();
      
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
        
    public:
        int pubMethod( int x ){
            return 16 + x;
        }    
};

int main(int argc, char *argv[])
{
    someClass obj;
//    obj.priv1 = 1; // can't access to private attribute
    obj.pub1 = 1;
    obj.pub2 = 1;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
