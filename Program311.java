/*  
    write data into file using FileWriter() method
*/
import java.util.*; // for scanner
import java.io.*;   //for file handling

class Program311
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

            FileWriter fwobj = new FileWriter(FileName);
            fwobj.write(Data);
            fwobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}