#include <iostream>
#define max 100000000
using namespace std;

int main() {
    int arr[max];
    int n, cnt = 0;;
    cin >> n;

    while(1)
    {
        if(n < 2)
        {
            arr[cnt++] = n;
            break;
        }

        arr[cnt++] = n % 2;
        n /= 2;
    }

    for(int i = (cnt-1); i >= 0; i--)
    {
        cout << arr[i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}