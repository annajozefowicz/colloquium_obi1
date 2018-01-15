#ifndef __ITEM_H__
#define __ITEM_H__

#include <string>


class Item
{
    public:
        virtual std::string name() const = 0; 
        virtual unsigned thickness() const = 0;
        virtual std::string info() const = 0; 
        virtual ~Item() { }
};

#endif /* __ITEM_H__ */
