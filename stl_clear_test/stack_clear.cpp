#include <ctime>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <stack>

clock_t reset_with_redeclaration( uint64_t elem_size, int repetition )
{
    clock_t start;
    clock_t end;
    start = clock();

    for ( int i = 0; i < repetition; ++ i ) {
        std::stack<uint64_t> v;
        for ( uint64_t i = 0; i < elem_size; ++ i ) {
            v.push( i );
        }
    }
    end = clock();
    return end - start;
}

clock_t reset_with_pop( uint64_t elem_size, int repetition )
{
    clock_t start;
    clock_t end;
    start = clock();
    std::stack<uint64_t> v;
    for ( int i = 0; i < repetition; ++ i ) {
        for ( uint64_t i = 0; i < elem_size; ++ i ) {
            v.push( i );
        }
        while ( ! v.empty() ) {
            v.pop();
        }
    }
    end = clock();
    return end - start;
}

int main( void )
{
    uint64_t elem_size = 32;
    int repetition = 100;
    clock_t ret;
    for ( int i = 0; i < 20; ++ i ) {
        std::cout << std::setw( 10 ) << std::left << "Element size : " << elem_size << ", repetition : " << repetition << std::endl;
        ret = reset_with_redeclaration( elem_size, repetition );
        std::cout << std::setw(10) << std::right << ret << "clock, " << ( double ) ( ret ) / CLOCKS_PER_SEC << "s : redecl" << std::endl;
        ret = reset_with_pop( elem_size, repetition );
        std::cout << std::setw(10) << std::right << ret << "clock, " << ( double ) ( ret ) / CLOCKS_PER_SEC << "s : pop" << std::endl;
        std::cout << "------------------" << std::endl;
        elem_size *= 2;
    }

    return 0;
}