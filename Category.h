//
// Created by Admin on 28.02.2021.
//

#ifndef CONNECTIVITY_CATEGORY_H
#define CONNECTIVITY_CATEGORY_H

#include <iostream>
#include <set>
#include "Item.h"
#include "template.cpp"

class Item;

class Category {
private:
    std::string name;
    std::set<std::string>* items;
public:
    Category(const std::string& name);
    ~Category();
    std::string& getName();
    const std::set<std::string>& getItems() const;
    void addItem(Item* ptr);
    void deleteItem(Item* ptr);
};

std::ostream& operator<<(std::ostream& out, Category& category);

#endif //CONNECTIVITY_CATEGORY_H
