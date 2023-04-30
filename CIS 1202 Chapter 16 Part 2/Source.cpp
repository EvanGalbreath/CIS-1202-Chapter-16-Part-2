//Evan Galbreath
//CIS 1202
//April 30th, 2023

#include <iostream>

using namespace std;

template <typename T>
T half(T value)
{
    return value / 2;
}

int half(int value)
{
    if (value % 2 == 0)
    {
        return value / 2;
    }
    else if (value >= 0)
    {
        return value / 2 + 1;
    }
    else
    {
        return value / 2 - 1;
    }
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}