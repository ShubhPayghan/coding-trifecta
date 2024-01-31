/* 
    In the given Java code, a program is implemented to check whether a 
    specific bit is ON or OFF at a given position in a binary 
    representation of a decimal number.

   (bit position hould be between 1 to 32)
*/
import java.util.*;
class Program282
{
    public static boolean CheckBit(int iNo, int iPos)
    {
        int iMask = 0x00000001;
        int iResult = 0;

        iMask = iMask << (iPos-1);
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        boolean bRet = false;

        System.out.println("Enter number :");
        iNo = sobj.nextInt();

        System.out.println("Enter Position :");
        iPos = sobj.nextInt();
        
        bRet = CheckBit(iNo, iPos);

        if(bRet == true)
        {
            System.out.println("Bit is ON at the given position.");
        }
        else
        {
            System.out.println("Bit is OFF at the given position.");
        }
    }
    
}