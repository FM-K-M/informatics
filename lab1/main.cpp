#include <iostream>

using namespace std;

int main(){

    int price;   
    int quantity;
    float total;
    float discount;

    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "\n===================";

    total = price * quantity;

    cout << "\nPrice: " << price << "\nQuantity: " 
    << quantity << "\nTotal: " << total << '\n';

    if (total >= 1000){
        discount = total * .1;
        cout << "Discount: " << discount << '\n';
        total -= discount;
    }

    cout << "Final price: " << total << '\n';
    cout << "===================";


    return 0;
}
