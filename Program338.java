/*
    problems on string 
    Accpet the string from user trim that string and remove the remaining
    extra white spaces
 */

import java.util.*;
import java.io.*;

class Program338
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string:");
        String str = sobj.nextLine();

        str = str.trim();

        System.out.println("After trim :"+str);
    }
}