#include <cstdlib>
#include <iostream>

using namespace std;

class someClass
{
    int myInt;
    
    public:
        void Set( int n );
        int Get();
};

void someClass::Set( int n )
{
    myInt = n;
}

int someClass::Get()
{
    return myInt;
}

int main(int argc, char *argv[])
{
    someClass c;
    c.Set(16);
    cout<<c.Get()<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
