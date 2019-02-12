/**
 * g++ BasicExcpt.cpp -o BasicExcpt
 * */

#include <iostream>
using namespace std;

void mightGoWrong(){
    bool error1 = false;
    bool error2 = true;

    if(error1){
        throw "Something :(";
    }
    if(error2){
        throw string("string wrong :(");
    }
}

int main(){

    try{
        mightGoWrong();
    }
    catch(int e){
        cout << "Error code: " << e << endl;
    }
    catch(char const * e){
        cout << "Error message: " << e << endl;
    }
    catch(string &e){
        cout << "Error string: " << e << endl;
    }


    cout << "Still running ..." << endl;

    return 0;
}
