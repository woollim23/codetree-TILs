#include <iostream>
using namespace std;

void Test(int n)
{
    if(n == 0) return;

    Test(n - 1);

    for(int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
}


int main() {
    int n;
    cin >> n;

    Test(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}