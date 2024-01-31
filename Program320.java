/*  
    check whether the directory is present or not. using isDirectory() method
    use listFiles(); method to get count of all contents present in the entered 
    directory.similarly interate the contents and print all list present in that directory.
    also prints the size of the all files 
*/
import java.util.*; // for scanner
import java.io.*;   //for file handling

class Program320
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name of Directory :");
        String DirectoryName = sobj.nextLine();
        
        boolean bret = false;
        File fobj = new File(DirectoryName);

        bret = fobj.isDirectory();
        if(bret)  // if(bret == true)
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();
            System.out.println("Number of files in the directory are :"+Arr.length);

            for(int i = 0; i< Arr.length; i++)
            {
                System.out.println("File name : "+ Arr[i].getName() +" File size :" + Arr[i].length());  //just like ls command
            }
        }
        else
        {
            System.out.println("There is no such directory");
        }
    }
}