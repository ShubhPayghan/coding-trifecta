// check wehether the file is present or not 

import java.util.*;  // for scanner
import java.io.*; //for file handling

class Program309
{
    public static void main(String arg[]) 
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the new of file :");
        String FileName = sobj.nextLine();  

        try
        {
            File fobj = new File(FileName); //hyat barych goshti astat filenme path file info etc

            boolean bret = false;

            bret = fobj.exists();
            if(bret == true)
            {
                System.out.println("file is present");
            }
            else
            {
                System.out.println("There is no such file");
            }
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}