//
// Created by Admin on 28.02.2021.
//

#ifndef CONNECTIVITY_ITEM_H
#define CONNECTIVITY_ITEM_H

#include <iostream>
#include <set>
#include "Category.h"
#include "Order.h"

class Order;
class Category;

class Item {
private:
    std::string name;
    std::set<int>* orders;
    Category* categoryPtr;
public:
    Item(const std::string& name, Category* categoryPtr);
    ~Item();

    std::string& getName();
    std::set<int>& getOrders();
    Category& getCategory();
    void addOrder(Order* ptr);
    void deleteInOrder(Order* ptr);
    void init();
};

std::ostream& operator<<(std::ostream& out, Item& item);

#endif //CONNECTIVITY_ITEM_H
