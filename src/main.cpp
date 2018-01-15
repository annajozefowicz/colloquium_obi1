//
// Created by Marcin Kwapisz on 2017-01-02.
//

#include <iostream>
#include "Template.h"
#include "shelf.h"
#include "book.h"
#include "magazine.h"

using namespace std;

int main() {
    Shelf shelf(4);
    shelf.push(std::make_shared<Book>("Pan Tadeusz", "Adam"));
    shelf.push(std::make_shared<Magazine>("Świat motocykli"));
    shelf.print_all();
    return EXIT_SUCCESS;
}
