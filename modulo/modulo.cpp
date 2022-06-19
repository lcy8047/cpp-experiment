#include <iostream>

int main( void )
{
    std::cout << "-- negative modulo --" << std::endl;
    std::cout << "-1 % 10 = " << -1 % 10 << std::endl;
    std::cout << "-11 % 10 = " << -11 % 10 << std::endl;
    for ( int i = 1; i <= 5; ++ i ) {
        std::cout << "-"<< i << " % 3 = " << -i % 3 << std::endl;
    }
    return 0;
}