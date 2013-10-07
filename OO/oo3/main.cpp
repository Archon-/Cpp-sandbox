#include <cstdlib>
#include <iostream>

using namespace std;

class someClass
{
    static int privStat;
    
    public:
        static int PubStat;
        static int PubStatMethod()
        {
            return 2;
        }
    
    static int PubStatMethod2();
};

int someClass::PubStatMethod2() //pomijamy static
{
    return 3;
}

int someClass::privStat = 0;

int main(int argc, char *argv[])
{
    cout<<someClass::PubStatMethod()<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
