#include <iostream>
using namespace std;

template <class T>
class vector
{
    int size;

public:
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
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
    vector <float>v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 6.3;
    v1.arr[2] = 8.1;

    vector <float>v2(3);
    v2.arr[0] = 3.3;
    v2.arr[1] = 5.2;
    v2.arr[2] = 7.1;

    float a = v1.dotProduct(v2);
    cout << a;
    return 0;
}