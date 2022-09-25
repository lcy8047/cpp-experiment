# use_custom_comparator

## Methods

### Method1

``` C++
bool Compare( int &n1, int &n2 )
{
    return n1 > n2;
}
...
std::priority_queue<int, std::vector<int>, std::function<bool(int&, int&)>> pq1(Compare);
```

### Method2

``` C++
class Compare {
public:
    bool operator() ( int &n1, int &n2 )
    {
        return n1 < n2;
    }
};
...
std::priority_queue<int, std::vector<int>, Compare> pq;
```

### Method3

``` C++
auto Compare = [](int &n1, int &n2) { return n1 > n2; };
std::priority_queue<int, std::vector<int>, decltype(Compare)> pq3(Compare);
```

## Requirememnt

Compare1, Compare3 : C++ 11 or later
