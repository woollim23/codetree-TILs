#include <iostream>
using namespace std;

int main() {
    int n, cnt = 65;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << (char)cnt++;
            if(cnt == 90) cnt = 65;
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}