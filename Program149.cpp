//accept number from user and calculate its factorial using OOP approach
#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:
        Number(int x)  //parameterised constructor
        {
            iNo = x;
        }
        
        int Factorial()
        {
            int iFact = 1, iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
             iFact = iFact * iCnt;
            }
            return iFact;
        }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number:"<<endl;
    cin>>iValue;

    Number *nobj= new Number(iValue); //dynamic memory allocation

    iRet = nobj->Factorial(); //indirect accessing operator

    cout<<"Factorial is :"<<iRet<<endl;
    delete nobj;
    return 0;
}