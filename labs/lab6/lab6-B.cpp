#include <iostream>

using namespace std;

void difference(int n){
    int curr;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        arr2[i] = abs(arr1[i] - curr);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    difference(n);
    return 0;
}