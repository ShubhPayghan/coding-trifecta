/*

 */
import java.util.*;

class Program510
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        str = str.trim();
        
        str = str.replaceAll("\\s", " ");

        System.out.println("Upadated string is : "+str);
    }
}