/*  
    Read data from file using method i.e FileInputStream
    if we write ((char)b) it will display a single byte
*/
import java.util.*; // for scanner
import java.io.*;   //for file handling

class Program314
{
    public static void main(String arg[]) 
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the new of file :");
        String FileName = sobj.nextLine();  

        try
        {
            FileInputStream fobj= new FileInputStream(FileName);
            
            int b= fobj.read();

            System.out.println((char)b);

            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}