//////////////////////////////////////////////////////////////////////////////////
//
// Function Name :Display
// Description   :Used to Display the value given number of times
// Input         :M, 7              11, 3         3.7, 6
// Output        :M M M M M M M     11,11,11      3.7   3.7  3.7  3.7  3.7  3.7
// Date          :19/06/22
// Author        :Ashwini Prakash Naiknaware
//
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
void Display(T value, int Number)
{
    int i = 0;

    for (i = 0; i < Number; i++)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}
