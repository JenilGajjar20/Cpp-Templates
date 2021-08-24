#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<int> v1(3);
    v1.arr[0] = 2;
    v1.arr[1] = 3;
    v1.arr[2] = 4;
    Vector<int> v2(3);
    v2.arr[0] = 3;
    v2.arr[1] = 4;
    v2.arr[2] = 5;
    int intResult = v1.dotProduct(v2);
    cout << "Int result: " << intResult << endl;

    Vector<float> v3(3);
    v3.arr[0] = 2.5;
    v3.arr[1] = 3.2;
    v3.arr[2] = 4.3;
    Vector<float> v4(3);
    v4.arr[0] = 3.7;
    v4.arr[1] = 4.4;
    v4.arr[2] = 5.5;
    float floatResult = v3.dotProduct(v4);
    cout << "Float result: " << floatResult << endl;
    return 0;
}