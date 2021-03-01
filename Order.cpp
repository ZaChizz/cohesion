//
// Created by Admin on 28.02.2021.
//

#include "Order.h"

Order::Order(int orderId, Customer* client): orderId(orderId), client(client) {
    items = new std::set<std::string>();
}

Order::~Order() {}

int Order::getId() {
    return orderId;
}

std::set<std::string>& Order::getItems() {
    return *items;
}

Customer& Order::getClient() {
    return *client;
}

std::string& Order::getClientName() {
    return client->getName();
}

void Order::addItem(Item* item) {
    items->insert(item->getName());
    item->addOrder(this);
    client->addOrder(this);
}

void Order::deleteItem(Item* item) {
    items->erase(item->getName());
    item->deleteInOrder(this);
}

std::ostream& operator << (std::ostream& out, Order& order) {
    out << "Order Id: " << order.getId() << std::endl;
    out << "Order Items: " << order.getItems() << std::endl;
    out << "Order Client: " << order.getClientName() << std::endl;
    return out;
}
