/*  
    write data into file using another method i.e 
*/
import java.util.*; // for scanner
import java.io.*;   //for file handling

class Program312
{
    public static void main(String arg[]) 
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the new of file :");
        String FileName = sobj.nextLine();  

        try
        {
            System.out.println("Enter the data that you want to wrtie in the file");
            String Data= sobj.nextLine();  //data ghenyasathi

            FileOutputStream fobj= new FileOutputStream(FileName);

            byte arr[] = Data.getBytes();  //string gets converted into byte array

            fobj.write(arr);
            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}