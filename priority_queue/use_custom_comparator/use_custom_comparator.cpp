#include <iostream>
#include <functional>
#include <queue>
#include <vector>

using namespace std;

bool Compare1( int &n1, int &n2 )
{
    return n1 > n2; // min pq
}

class Compare2 { // or you can also use struct
public:
    bool operator() ( int &n1, int &n2 )
    {
        return n1 < n2; // max pq
    }
};

int main( void )
{
    std::priority_queue<int, std::vector<int>, std::function<bool(int&, int&)> > pq1(Compare1);
    pq1.push( 1 );
    pq1.push( 2 );
    pq1.push( 3 );

    while ( ! pq1.empty() ) {
        cout << pq1.top() << endl;
        pq1.pop();
    }

    
    std::priority_queue<int, std::vector<int>, Compare2> pq2;
    pq2.push( 1 );
    pq2.push( 2 );
    pq2.push( 3 );

    while ( ! pq2.empty() ) {
        cout << pq2.top() << endl;
        pq2.pop();
    }

    auto Compare3 = [](int &n1, int &n2) { return n1 > n2; }; // min pq
    std::priority_queue<int, std::vector<int>, decltype(Compare3)> pq3(Compare3);
    pq3.push( 1 );
    pq3.push( 2 );
    pq3.push( 3 );

    while ( ! pq3.empty() ) {
        cout << pq3.top() << endl;
        pq3.pop();
    }

    return 0;
}