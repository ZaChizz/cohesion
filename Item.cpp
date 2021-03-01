//
// Created by Admin on 28.02.2021.
//

#include "Item.h"

Item::Item(const std::string& name, Category* categoryPtr): name(name), categoryPtr(categoryPtr) {
    orders = new std::set<int>();
    categoryPtr->addItem(this);
}

Item::~Item(){}

std::string& Item::getName() {
    return name;
}

std::set<int>& Item::getOrders() {
    return *orders;
}

Category& Item::getCategory() {
    return *categoryPtr;
}

void Item::addOrder(Order *ptr) {
    orders->insert(ptr->getId());
}

void Item::deleteInOrder(Order *ptr) {
    orders->erase(ptr->getId());
}

void Item::init() {
    categoryPtr->addItem(this);
}

std::ostream& operator<<(std::ostream& out, Item& item) {
    out << "Item: " << item.getName() << std::endl;
    out << "Item category: " << item.getCategory() << std::endl;
    return out;
}