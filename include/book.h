#ifndef __BOOK_H__
#define __BOOK_H__

#include <string>
#include <sstream>
#include "item.h"

using std::string;



class Book: public Item
{
    public:
    Book(string _title, string _author):
        m_title(_title),
        m_author(_author)
    { }
    string name() const 
    {
        return m_title;
    }
    string info() const 
    {
        std::ostringstream ss;
        ss << "Książka[" << m_author << ',' << m_title << "]\n";
        ss << "Thickness: " << THICKNESS << '\n'; 
        return ss.str();
    }
    unsigned thickness() const 
    {
        return THICKNESS;
    }
    private:
        string m_title, m_author;
        static constexpr int THICKNESS = 2;
};



#endif /* __BOOK_H__ */
