#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class myClass
{
public:
    T1 a;
    T2 b;
    T3 c;
    myClass(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
    }
};

int main()
{
    myClass<> obj1(4, 5.6, 'a');
    obj1.display();
    cout << endl;
    myClass<float, char, char> obj2(4.5, 'b', 'd');
    obj2.display();
    return 0;
}