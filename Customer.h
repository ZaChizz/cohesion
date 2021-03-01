//
// Created by Admin on 28.02.2021.
//

#ifndef CONNECTIVITY_CUSTOMER_H
#define CONNECTIVITY_CUSTOMER_H

#include <iostream>
#include <set>
#include "Order.h"

class Order;

class Customer {
private:
    std::string name;
    std::set<int>* orders;
public:
    Customer(const std::string& name);
    ~Customer();

    std::string& getName();
    std::set<int>& getOrders();
    void addOrder(Order* order);

};

std::ostream& operator<<(std::ostream& out, Customer& customer);

#endif //CONNECTIVITY_CUSTOMER_H
