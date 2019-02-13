#include <iostream>
using namespace std;

class CanGoWrong{
    public:
        CanGoWrong(){
            char *pMem = new char[999999999999999999];
            delete[] pMem;
        }
};


int main()
{
    try{
        CanGoWrong wrong;
    }catch(bad_alloc &e){
        cout << "Caught expection: " << e.what() << endl;
    }

    return 0;
}
