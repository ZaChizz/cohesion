//
// Created by Admin on 28.02.2021.
//

#include "Customer.h"

Customer::Customer(const std::string& name): name(name) {
    orders = new std::set<int>();
}

Customer::~Customer() {
    delete(orders);
}

std::string& Customer::getName() {
    return name;
}

std::set<int>& Customer::getOrders() {
    return *orders;
}

void Customer::addOrder(Order* order) {
    orders->insert(order->getId());
}

std::ostream& operator<<(std::ostream& out, Customer& customer) {
    out << "Customer: " << customer.getName() << std::endl;
    out << "Customer orders: " << customer.getOrders() << std::endl;

    return out;
}