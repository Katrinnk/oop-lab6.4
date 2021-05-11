#include <iostream>
#include <math.h>
#include <string>

using namespace std;

template <typename T>
bool Poriv(T arr, size_t t);
template <typename T>
void Print(T arr, size_t t);
int main()
{
    int arr1[] = { 1,2,3,4,5,6,6,7,8,9 };
     Print(arr1, size(arr1));
    if (Poriv(arr1, size(arr1)))
        cout << "masyv ne mistyt odnakovykh sysidnikh elementiv" << endl;
    else
        cout << "masyv mistyt odnakovi susidni elementy" << endl;
    int arr2[] = { 1,2,3,4,5,6,7,6,8,9 };
    Print(arr2, size(arr2));
    if (Poriv(arr2, size(arr2)))
        cout << "masyv ne mistyt odnakovykh sysidnikh elementiv" << endl;
    else
        cout << "masyv mistyt odnakovi susidni elementy" << endl;
    int arr3[] = { 1,2,3,4,5,6,7,8,9 };
    Print(arr3, size(arr3));
    if (Poriv(arr3, size(arr3)))
        cout << "masyv ne mistyt odnakovykh sysidnikh elementiv" << endl;
    else
        cout << "masyv mistyt odnakovi susidni elementy" << endl;
    return 0;
}
template <typename T>
bool Poriv(T arr, size_t t)
{
    for (int i = 0; i < t; i++)
    {
       if (arr[i] == arr[i+1])
       {
           cout << "povtoriuvanyi element [" << arr[i] << "]" << endl;
           return false;
       }
    }
    return true;
}
template <typename T>
void Print(T arr, size_t t)
{
    for (int i = 0; i < t; i++)
        cout << arr[i] << "  ";
    cout << endl;
}