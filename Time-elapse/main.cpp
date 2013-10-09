#include <cstdlib>
#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	// start counting
    long int before = GetTickCount();

    // Perform time-consuming operation
    Sleep(3000);
    cout<<"blablabla"<<endl;
    for(unsigned int i = 0; i < 10000000; i++){                     
    }
    
	// stop counting
    long int after = GetTickCount();
    cout<<"before: "<<before<<", after: "<<after<<endl;
    cout<<"diff time: "<<(after-before)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
