/*
    problems on string 
    Accpet the string from user trim that string and remove the remaining
    extra white spaces. Remove more than 2 white spaces and replace it with
    one white space. also use split method. also find the number of words in given 
    sentence
    {for refrence see the diagramatic reprensentation of this program on page no.71
    of LB notebook}
    instead of using for loop, foreach loop is used
 */

import java.util.*;
import java.io.*;

class Program344
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

        String words[] = str.split(" ");

        System.out.println("Number of words in the sentence are :"+words.length);

        for(String s : words)  // foreach loop 
        {
            System.out.println(s);
        }
    }
}