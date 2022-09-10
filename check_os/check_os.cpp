#include <iostream>

using namespace std;

int main( void )
{
#ifdef __APPLE__
    cout << "This is apple" << endl;
#elif __linux
    cout << "This is linux" << endl;
#endif

    return 0;
}


