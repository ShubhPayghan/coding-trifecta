/* 
   Q. Accpet number from user and check whether 17th bit is OFF or OFF
    using boolean.
   (we are going to use the term "mask" here. )
*/
import java.util.*;
class Program267
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter number :");
        iNo = sobj.nextInt();
        
        bRet = CheckBit(iNo);

        if(bRet == true)
        {
            System.out.println("17th bit is ON");
        }
        else
        {
            System.out.println("17th bit is OFF");
        }
    }
    public static boolean CheckBit(int iNo)
    {
        int iMask = 65536;
        int iResult = 0;

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
}