#include <iostream>
using namespace std;
int maxProfit(int price[], int n)
{
    if (n <= 0)
        return 0;

    int minPrice = price[0];
    int maxprofit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] < minPrice)
        {
            minPrice = price[i];
        }
        else if ((price[i] - minPrice) > maxprofit)
        {
            maxprofit = price[i] - minPrice;
        }
    }
    return maxprofit;
}
int main()
{
    // int price[] = {7, 1, 5, 3, 6, 4};

    int price[] = {3, 5, 1, 7, 4, 9, 3};
    cout << maxProfit(price, 6);
    return 0;
}