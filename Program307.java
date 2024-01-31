// create a file 

import java.util.*;  // for scanner
import java.io.*; //for file handling

class Program307
{
    public static void main(String arg[])  throws Exception
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the new of file :");
        String FileName = sobj.nextLine();  // user kadun ghetlel name FileName madhe store kel

        File fobj = new File(FileName); //file class cha object create kela

        boolean bret = false;  //CreateNewFile he aplyala return value boolean karnar ahe so

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
}