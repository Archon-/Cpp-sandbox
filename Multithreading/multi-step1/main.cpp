#include <cstdlib>
#include <iostream>
#include <process.h>
#include <windows.h>

using namespace std;
unsigned int g_Counter = 0;


void __cdecl ThreadProc( void * Args )
{
    while( g_Counter < 1000 )
         g_Counter++;
    
    _endthread();
}

int main(int argc, char *argv[])
{
    HANDLE hThread =( HANDLE ) _beginthread( ThreadProc, 0, NULL );
    Sleep( 5000 );
    
    char buffer[ 1024 ];
    sprintf( buffer, "g_Counter: %d\n", g_Counter );
    OutputDebugString( buffer );

    system("PAUSE");
    return EXIT_SUCCESS;
}
