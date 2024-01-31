/*
    problems on string 
    Accpet the string from user trim that string and remove the remaining
    extra white spaces. Remove more than 2 white spaces and replace it with
    one white space.
 */

import java.util.*;
import java.io.*;

class Program341
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string:");
        String str = sobj.nextLine();

        str = str.trim();

        System.out.println("After trim :"+str);

        str = str.replaceAll("\\s+", " "); // \\s+ means more than 2 white spaces

        System.out.println("After replace all :"+str);
    }
}