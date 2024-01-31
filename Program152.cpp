//  addition of even intergers
#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr; 
        int iSize;

    public:
        Array(int X)
        {
            iSize = X;
            Arr = new int[iSize];
        }
        ~Array()  //destructor
        {
            delete []Arr; //Arr alikade square braket nahi kela tr ekach element deallocate hoto
        }
        //accepting input from user and stores it into array(Member function)
        void Accept() 
        {
            int iCnt = 0;
            cout<<"Please enter the elements :"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display() // to display array  (Member function)
        {
            cout<<"Elements of the array are:"<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }

        //Logics

        int AdditionEven()
        {
            int iSum = 0, iCnt = 0;

            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout << "Enter the number of elements that you want to enter :" << endl;
    cin >> iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    iRet = aobj->AdditionEven();

    cout<<"Addition of even elements is:"<<iRet<<endl;

    delete aobj;
    return 0;
}