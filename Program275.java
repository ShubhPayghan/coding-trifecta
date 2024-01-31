/* 
   Q. Accpet number from user and OFF the 4th bit.
*/
import java.util.*;
class Program275
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number :");
        iNo = sobj.nextInt();
        
        iRet = OffBit(iNo);

       System.out.println("Updated number is :"+iRet);
    }
    public static int OffBit(int iNo)
    {
        int iMask = 0x00000008;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask)  // 4th bit is ON
        {
            return (iNo ^ iMask);
        }
        else                  // 4th bit is OFF
        {
            return iNo;
        }
    }
}