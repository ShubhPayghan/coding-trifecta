/*  
    Read data from file using method i.e FileInputStream
    
*/
import java.util.*; // for scanner
import java.io.*;   //for file handling

class Program315
{
    public static void main(String arg[]) 
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the new of file :");
        String FileName = sobj.nextLine();  

        try
        {
            FileInputStream fobj= new FileInputStream(FileName);
            byte Arr[] = new byte[100];

            fobj.read(Arr);
            String str = new String(Arr);

            System.out.println(str);

            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}