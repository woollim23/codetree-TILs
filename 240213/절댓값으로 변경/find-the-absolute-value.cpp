#include <iostream>
#include <string>
using namespace std;

void Test(int* arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
            arr[i] *= (-1);
    }
}

int main() {
    int n;
    int arr[50];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Test(arr, n);


    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}