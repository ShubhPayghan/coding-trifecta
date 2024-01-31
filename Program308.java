import java.util.*;  // for scanner
import java.io.*; //for file handling

class Program308
{
    public static void main(String arg[]) 
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the new of file :");
        String FileName = sobj.nextLine();  

        try
        {
            File fobj = new File(FileName); 

            boolean bret = false;  

            bret = fobj.createNewFile(); 

            if(bret == true)
            {
                System.out.println("File get successfully created...");
            }
            else
            {
                System.out.println("Unable to create file...");
            }
        }
        catch(IOException obj)
        {
            System.out.println("Exception occured");
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}