#include "../std_lib_facilities.h"

void sus(vector<int>& vec, int s)
{
    int* p = new int[s];
    int* q = new int[s];

    try{
    vector<int> v1;
    vector<double> v2;

    delete[] p;
    delete[] q;
    }

    catch(exception& e){
    cerr << "Error!\n";
    delete[] p;
    delete[] q;
    throw;
    }
}

//unique_ptr<vector<int>> make_vec()
//{
//    unique_ptr<vector<int>> p{new vector<int>};
//    try{
//        return p/*.release()*/;
//    }
//    catch(exception& e){
//        cerr<<"Error in make_vec()";
//        delete p.release();
//        throw;
//    }
//}

vector<int> make_vec(int n)
{
    vector<int> res(n);
    for (int i=0; i<n; i++)
    {
        res[i] = 0;
    }
    return res;
}

void f(vector<int>& vec, int s)
{
    vector<int> p(s);
    vector<int> q(s);
}

int main()
{
    make_vec(5);

    return 0;
}
