#include <iostream>
using namespace std;

class Shop
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 1;
    }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter ID of your item no " << counter << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 1; i <= counter; i++)
    {
        cout << "The Price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    for (int j = 0; j < 5; j++)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();

    return 0;
}

