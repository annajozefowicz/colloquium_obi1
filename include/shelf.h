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
    bool push(std::shared_ptr<Item> item) {
        if (occupied + item->thickness() > capacity)
            return false;
        shelf.emplace_back(std::move(item));
        return true;
    }
    void print_all() {
        std::string s;
        for (auto& item : shelf) {
           s +=item->info();
        }
        std::cout << s;
    }

    bool remove(std::string name)
    {
        std::size_t orig_size = shelf.size();
        shelf.erase(std::remove_if(shelf.begin(), shelf.end(),
                        [&name](std::shared_ptr<Item> const& item) {
                            return (item->name() == name); 
                            }),
                        shelf.end());
        return (orig_size - self.size());
    }

    std::size_t size() const {
        return shelf.size();
    }
};
        


#endif /* __SHELF_H__ */
