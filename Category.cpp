//
// Created by Admin on 28.02.2021.
//

#include "Category.h"

Category::Category(const std::string& name) : name(name){
    items = new std::set<std::string>();
}
Category::~Category() {}

std::string& Category::getName() {
    return name;
}

const std::set<std::string>& Category::getItems() const {
    return *items;
}


void Category::addItem(Item* ptr) {
    items->insert(ptr->getName());

}

void Category::deleteItem(Item* ptr) {
    items->erase(ptr->getName());
    delete(ptr);
}


std::ostream& operator<<(std::ostream& out, Category& category) {
    out << "Category: " << category.getName() << std::endl;
    out << "Category items: " << category.getItems() << std::endl;

    return out;
}
