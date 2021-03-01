//
// Created by Admin on 28.02.2021.
//

#ifndef CONNECTIVITY_ORDER_H
#define CONNECTIVITY_ORDER_H

#include <iostream>
#include <map>
#include "Item.h"
#include "Customer.h"

class Customer;
class Item;

class Order {
private:
    int orderId;
    Customer* client;
    std::set<std::string>* items;
public:
    Order(int orderId, Customer* client);
    ~Order();

    int getId();
    Customer& getClient();
    std::string& getClientName();
    std::set<std::string>& getItems();
    void addItem(Item* item);
    void deleteItem(Item* item);
};

std::ostream& operator <<(std::ostream& out, Order& order);

#endif //CONNECTIVITY_ORDER_H
