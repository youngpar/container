#ifndef NULLPTR_HPP
#define NULLPTR_HPP

namespace ft
{
struct nullptr_t
{
private:
    void operator&(void) const;
public:
    template<typename T> operator T*(void) const { return 0; }
    template<typename T, typename U> operator T U::*() const { return 0; }
};

static const nullptr_t    _nullptr = {};

}

#endif //NULLPTR_HPP