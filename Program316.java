/*  
    copy a file into destination file form existing file.
*/
import java.util.*; // for scanner
import java.io.*;   //for file handling

class Program316
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name of sources file which is existing :");
        String SourceFile = sobj.nextLine();

        System.out.println("Enter the name of destination file that we want to create :");
        String DestFile = sobj.nextLine();

        File fobj = new File(SourceFile);
        if(! fobj.exists())
        {
            System.out.println("Source file not existing...");
            return;
        }

        File fobj1 = new File(DestFile);
        fobj1.createNewFile();

        FileInputStream fiobj = new FileInputStream(SourceFile);
        FileOutputStream foobj = new FileOutputStream(DestFile);

        byte Buffer[] = new byte[1024];  // buffer ghenyach reason apan data 1024 ne mojnar ahot
        int iRet = 0;

        while((iRet = fiobj.read(Buffer)) != -1)  //pahilyanda read kara ani joparynt read kara toparyant thambat nahi
        {
            foobj.write(Buffer,0,iRet);
        }

        fiobj.close();
        foobj.close();
    }
}