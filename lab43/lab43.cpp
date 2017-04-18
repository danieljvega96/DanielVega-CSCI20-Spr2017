//Daniel Vega
//4/18/17
//Creating an online shopping cart using classes with constructor, mutators
//and accessors, input/output in the main, and an array of objects
#include <iostream>
using namespace std;

class ShoppingCart {
    public:
        Inventory();
        string ItemName     [10]{"Basketball", "Skateboard", "Surfboard","Tent", "Pants", "Sweater", "Boots", "Socks" "Helmet", "Shorts"};
        double ItemPrice    [10]{20.00, 65.00, 125.00, 75.00, 30.00, 35.00, 50.00, 7.50, 12.00, 45.00};
        double CartTotPrice;

    private:
        string name_;
        double price_;
};

Inventory::Inventory(){
    name_   = "Please enter valid input";
    price_  = 0.0;
}

int main(){
    
    Inventory Item1;
    cout << Item1.ItemName;
    
    cout << "Welcome to my online shop!" << endl;
    cout << 
        
 return 0;       
    
}