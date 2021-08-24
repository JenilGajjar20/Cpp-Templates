#include <iostream>
using namespace std;

template <class T1, class T2, class T3, class T4>
class myClass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    T4 data4;

    myClass(T1 d1, T2 d2, T3 d3, T4 d4)
    {
        data1 = d1;
        data2 = d2;
        data3 = d3;
        data4 = d4;
    }
    void display()
    {
        cout << "Value of data1: " << data1 << endl;
        cout << "Value of data2: " << data2 << endl;
        cout << "Value of data3: " << data3 << endl;
        cout << "Value of data4: " << data4 << endl;
    }
};

int main()
{
    myClass<int, char, float, double> obj(1, 'a', 4.5, 23.45);
    obj.display();
    return 0;
}