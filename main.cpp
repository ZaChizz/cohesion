#include <iostream>
#include "Category.h"
//#include "Customer.h"
//#include "Order.h"

int main() {
    std::cout << "Hello, Connectivity!" << std::endl;

    auto bakery = new Category("bakery");
    //Category* vegetables = new Category("vegetables");
    Item* cake = new Item("cake", bakery);
    //cake->init();
    //bakery->addItem(cake);
    Item* bun = new Item("bun", bakery);
    std::cout << *bakery << std::endl;
    //bun->init();
    //bakery->deleteItem(cake);
    //Item* potato = new Item("potato", vegetables);
    Customer* Vasy = new Customer("Vasy");
    //std::set<Item*>* items = new std::set<Item*>(cake, bun);
    Order* order1 = new Order(1, Vasy);
    order1->addItem(cake);

    //std::cout << *cake << std::endl;
    std::cout << *bakery << std::endl;
    std::cout << *order1 << std::endl;

    return 0;
}
