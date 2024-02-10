#include <iostream>
using namespace std;

bool Test(int n)
{
    if(n == 1) return false;
    if(n <= 3) return true;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    
    for(int i = a; i <= b; i++)
    {
        if(Test(i))
        {
            sum += i;
        }
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}