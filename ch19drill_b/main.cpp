#include "../std_lib_facilities.h"

template <typename T, typename A>
struct vector_base{
    A alloc;
    T* elem;
    int sz;
    int space;

    vector_base(const A& a, int n):alloc{a},elem{alloc.allocate(n)},sz{n},space{n}{}
    ~vector_base(){alloc.deallocate(elem.space);}
};

template <class T,class A>
void vector<T,A>::reserve(int newalloc)
{
    if(newalloc<=capacity()) return;

    vector_base<T,A> b {this->alloc,newalloc};
    uninitialized_copy(this->elem,this->elem+size(),b.elem);
    for (int i=0; i<size(); i++)
    {
        this -> alloc.destroy(&this->elem[i]);
    }
    swap<vector_base<T,A>>(*this,b);
}

int main()
{

    return 0;
}
