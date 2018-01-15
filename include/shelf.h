#ifndef __SHELF_H__
#define __SHELF_H__

#include <stdexcept>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <iostream>

#include "item.h"


class Shelf
{
    private:
        unsigned capacity;
        unsigned occupied;
        std::vector<std::shared_ptr<Item>> shelf;
    public:
    explicit Shelf(unsigned _capacity):
        capacity(_capacity),
        occupied(0)
    {}
    void push(std::shared_ptr<Item> item) {
        if (capacity - item->thickness() < 0)
            throw std::runtime_error("Brak miejsca");
        shelf.emplace_back(std::move(item));
    }
    void print_all() {
        std::string s;
        for (auto& item : shelf) {
           s +=item->info();
        }
        std::cout << s;
    }
    void remove(std::string name)
    {
            shelf.erase(std::remove_if(shelf.begin(), shelf.end(),
                        [&name](std::shared_ptr<Item> const& item) {
                            return (item->name() == name); 
                            }),
                        shelf.end());
    }
    std::size_t size() const {
        return shelf.size();
    }
};
        


#endif /* __SHELF_H__ */
