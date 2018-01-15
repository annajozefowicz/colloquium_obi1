#ifndef __MAGAZINE_H__
#define __MAGAZINE_H__

#include <string>
#include <sstream>
#include "item.h"

using std::string;

class Magazine: public Item
{
    public:
    Magazine(string _name):
        m_name(_name)
    { }
    
    string name() const 
    {
        return m_name;
    }
   
    unsigned  thickness() const
    {
        return THICKNESS;
    }

    string info() const 
    {
        std::ostringstream ss;
        ss << "Magazyn [" << m_name << "]\n";
        ss << "Thickness: " << THICKNESS << '\n'; 
        return ss.str();
    }

    private:
        string m_name;
        static constexpr int THICKNESS = 2;
};



#endif /* __MAGAZINE_H__ */
