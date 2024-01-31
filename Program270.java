/* 
   Q. Accpet number from user and check whether 3rd bit is ON or OFF
    choose the next program for good programming practice
   (we are going to use the term "mask" here. )
   value of the iMast should be in Hexadecimal form...
*/
import java.util.*;
class Program270
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iMask = 0x00000004;
        int iResult = 0;

        System.out.println("Enter number :");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;
        
        if(iResult == iMask)
        {
            System.out.println("3rd bit is ON");
        }
        else
        {
            System.out.println("3rd bit is OFF");
        }
    }
}