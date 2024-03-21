#include <iostream>
// #include <utility>
// #include <memory>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int x, int y) : x(x), y(y)
    {
        std::cout << " create a point with" << x << "and" << y << std::endl;
    };
    ~Point()
    {
        std::cout << "point delete" << std::endl;
    };
};

int main(int argc, char const *argv[])
{
    // list<char> coll;
    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     coll.push_back(i);
    // }

    // list<char>::const_iterator pos;
    // for (pos = coll.begin(); pos != coll.end(); pos++)
    // {
    //     std::cout << *pos << std::endl;
    // }
    // pos = max_element(coll.begin(), coll.end());
    // std::cout << "max element is " << *pos << std::endl;

    list<int> coll1;
    for (int i = 0; i <= 9; i++)
    {
        coll1.push_back(i);
    }

    vector<int> coll2 = { 9, 9 };
    copy(coll1.begin(), coll1.end(), back_inserter(coll2));

    vector<int>::const_iterator cur;
    for (cur = coll2.begin(); cur != coll2.end(); ++cur)
    {
        std::cout << "element is " << *cur << std::endl;
    }

    return 0;
}
