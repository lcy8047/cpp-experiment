#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>

void check( uint64_t count )
{
    clock_t start;
    clock_t end;
    std::vector<uint64_t> v;
    std::cout << std::setw( 10 ) << std::left << count << " : ";
    start = clock();
    for ( uint64_t i = 0; i < count; ++ i ) {
        v.push_back( i );
    }
    end = clock();
    std::cout << std::setw(10) << std::right << end - start << "clock, " << ( end - start ) / CLOCKS_PER_SEC << "s" << std::endl;
}

void check_resize( uint64_t count )
{
    clock_t start;
    clock_t end;
    std::vector<uint64_t> v;
    v.resize( count );
    std::cout << std::setw( 10 ) << std::left << count << " : ";
    start = clock();
    for ( uint64_t i = 0; i < count; ++ i ) {
        v.push_back( i );
    }
    end = clock();
    std::cout << std::setw(10) << std::right << end - start << "clock, " << ( end - start ) / CLOCKS_PER_SEC << "s : resize" << std::endl;
}

int main( void )
{
    check_resize(100000);
    check(100000);
    std::cout << "------------------" << std::endl;
    check_resize(200000);
    check(200000);
    std::cout << "------------------" << std::endl;
    check_resize(400000);
    check(400000);
    std::cout << "------------------" << std::endl;
    check_resize(800000);
    check(800000);
    std::cout << "------------------" << std::endl;
    check_resize(1600000);
    check(1600000);
    std::cout << "------------------" << std::endl;
    check_resize(3200000);
    check(3200000);
    std::cout << "------------------" << std::endl;
    check_resize(6400000);
    check(6400000);
    std::cout << "------------------" << std::endl;
    check_resize(12800000);
    check(12800000);
    std::cout << "------------------" << std::endl;
    check_resize(51200000);
    check(51200000);
    std::cout << "------------------" << std::endl;
    check_resize(102400000);
    check(102400000);
    std::cout << "------------------" << std::endl;
    check_resize(204800000);
    check(204800000);
    std::cout << "------------------" << std::endl;
    check_resize(409600000);
    check(409600000);
    std::cout << "------------------" << std::endl;
    check_resize(614400000);
    check(614400000);
    std::cout << "------------------" << std::endl;
}