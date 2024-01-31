/*
     problems on string 
 */

import java.util.*;
import java.io.*;

class Program337
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String str = "     Hello   World  Demo     ";

        str = str.replaceAll(" ","");

        System.out.println(str);

        System.out.println("Length of str is :"+str.length());
    }
}