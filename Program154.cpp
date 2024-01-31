//  pattern printing in c++
#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        Pattern(int X, int Y)  //parameterised constructor
        {
            iRow = X;   //for Row
            iCol = Y;   //for column
        }

        void Display()
        {
            //Logic
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number of rows :"<<endl;
    cin>>iValue1;

    cout<<"Enter number of column :"<<endl;
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1, iValue2);

    pobj->Display();

    delete pobj;

    return 0;
}