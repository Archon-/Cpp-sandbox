// aplikacja wielow�tkowa Dev C++--------------
//#include <cstdlib>
#include <iostream>
#include <process.h>
#include <time.h>
#include <windows.h>
using namespace std;

//pierwszy w�tek ------------------
void myFunction( void * dummy ) {
    
    cout << "w�tek nr 1 \n";
    _endthread(); // zako�czenie w�tku
}
//drugi w�tek ------------------
void myFunction1( void * dummy ) {
    
    cout << "w�tek nr 2\n";
    _endthread(); // zako�czenie w�tku
    
}
//trzeci w�tek ------------------
void myFunction2( void * dummy ) {
    system( "taskmgr" );
    _endthread(); // zako�czenie w�tku
}
//czwarty w�tek ------------------
void myFunction3( void * dummy ) {
     long int before = GetTickCount();
    //    int sekudny = 240;
    clock_t koniec_czekania;
    koniec_czekania = clock() + 12000 * CLOCKS_PER_SEC;
    while( clock() < koniec_czekania ) { 
        //cout<<"w�tek nr 3\n";       
    }
    long int after = GetTickCount();
    cout<<"x diff time: "<<(after-before)<<endl;
    _endthread(); // zako�czenie w�tku
}
//pi�ty w�tek ------------------
void myFunction4( void * dummy ) {
    //    int sekudny = 240;
    clock_t koniec_czekania;
    koniec_czekania = clock() + 120 * CLOCKS_PER_SEC;
    while( clock() < koniec_czekania ) { 
        //cout<<"w�tek nr 4\n";       
    }
    
    _endthread(); // zako�czenie w�tku
}
int main()
{
    int liczba;
    long int before;
    long int after;
    
    cout << "Podaj ile masz procesorow(liczbe rdzeni) w systemie: ";
    cin >> liczba;
    if( liczba > 0 && liczba < 5 ) {
        if( liczba == 1 ) {
            //uruchomienie w�tku
            _beginthread( myFunction, 0, 0 );
            _beginthread( myFunction1, 0, 0 );
            _beginthread( myFunction2, 0, 0 );
        }
        if( liczba == 2 ) {
            //uruchomienie w�tku
            _beginthread( myFunction, 0, 0 );
            _beginthread( myFunction1, 0, 0 );
            _beginthread( myFunction2, 0, 0 );
            // I w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
            // II w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
        }
        if( liczba == 3 ) {
            _beginthread( myFunction, 0, 0 );
            _beginthread( myFunction1, 0, 0 );
            _beginthread( myFunction2, 0, 0 );
            // I w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
            // II w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
            // III w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
        }
        if( liczba == 4 ) {
            before = GetTickCount();
            
            _beginthread( myFunction, 0, 0 );
            _beginthread( myFunction1, 0, 0 );
            _beginthread( myFunction2, 0, 0 );
            // I w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
            // II w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
            // III w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
            // IV w�tek dla obci��enia procesora
            _beginthread( myFunction3, 0, 0 );
            
            after = GetTickCount();
            cout<<"diff time: "<<(after-before)<<endl;
        }
    } else cout << "Podano bledna liczbe" << endl;
    
    system( "PAUSE" );
    return 0;
}
