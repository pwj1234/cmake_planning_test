#include "hello.h"

void HELLO::say_hello()
{
    cout << "HELLO WORLD" << endl;
}

int main()
{
    HELLO my_hello;
    //for(int i=0; i<100000000;){
        my_hello.say_hello();
    //}
   

    system("pause");
    return 0;
}