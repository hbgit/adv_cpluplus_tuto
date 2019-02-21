#include <iostream>
using namespace std;

void goesWrong()
{
    bool error1 = true;
    bool error2 = false;

    if(error1)
    {
        throw bad_alloc();
    }
    if(error2)
    {
        throw exception();
    }

}

int main()
{
    try{
        goesWrong();
    }catch(bad_alloc &e)
    {
        cout << "Bad_Alloc: " << e.what() << endl;
    }catch(exception &e)
    {
        cout << "Expection: " << e.what() << endl;
    }



    return 0;
}
