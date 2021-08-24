#include <iostream>
using namespace std;

template <typename T1, class T2, typename T3>
float funcAverage(T1 a, T2 b, T3 c)
{
    float avg = (a + b + c) / 3;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(4, 8.5, 23.45);
    printf("The average of these numbers is %.3f", a);
    return 0;
}