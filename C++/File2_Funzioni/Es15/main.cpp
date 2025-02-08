#include <algorithm>
#include <iostream>
using namespace std;

int get_sum_min_max(int num1, int num2, int num3)
{
    int max, min;
    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
        if (num2 >= num3)
        {
            min = num3;
        }
        else
        {
            min = num2;
        }
    }
    else if (num2 >= num3)
    {
        max = num2;
        if (num1 >= num3)
        {
            min = num3;
        }
        else
        {
            min = num1;
        }
    }
    else
    {
        max = num3;
        if (num1 >= num2)
        {
            min = num2;
        }
        else
        {
            min = num1;
        }
    }
    return max + min;
}

int main()
{
    int num1, num2, num3, h, k;

    cout << "Enter h and k (k > h):";
    cin >> h >> k;
    while (k <= h)
    {
        cout << "Renter h and k (k > h):";
        cin >> h >> k;
    }

    do
    {
        cout << "Enter num1:";
        cin >> num1;
    }
    while (num1 > k || num1 < h);

    do
    {
        cout << "Enter num2:";
        cin >> num2;
    }
    while (num2 > k || num2 < h);

    do
    {
        cout << "Enter num3:";
        cin >> num3;
    }
    while (num3 > k || num3 < h);

    cout << "The sum of max and min is: " << get_sum_min_max(num1, num2, num3);

    return 0;
}
