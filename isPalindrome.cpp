#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = 0;
    if (n % 2 == 0)
    {
        size = n / 2;
    }
    else
    {
        size = (n + 1) / 2;
    }
    bool isPalindrome = true;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }
    cout << isPalindrome;
    return 0;
}