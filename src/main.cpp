#include <iostream>
#include "functions.cpp"
using namespace std;


int main()
{
    srand((unsigned)time(0));
    int *t;
    create(t, 20, -14, 7 );
    cout << "Початковий масив :  ";
    print(t , 20);

    cout << "\nCount : " << calculateCount(20) << endl;
    cout << "Sum : " << calculateSum(t, 20) << endl;
    cout << "Відформатований  масив :  ";
    replace(t , 20);
    print(t , 20);


    delete [] t;
    return 0;
}
