#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initCounter();
    void displayPrice(void);
    void setPrice(void);
};
void shop::initCounter()
{
    counter = 0;
}

void shop::setPrice(void)
{
    cout << "enter id of your item" << endl;
    cin >> itemId[counter];
    cout << "enter Price of your Item " << endl;
    cin >> itemprice[counter];
    counter++;
};

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "ther price of item with id  " << itemId[i] << endl;
        cout << itemprice[i] << endl;
    }
};
int main()
{
    shop dukkan;
    dukkan.initCounter();
    dukkan.setPrice();
    dukkan.setPrice();

    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.displayPrice();

    return 0;
}