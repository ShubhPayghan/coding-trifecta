class node   //struct node
{
    public int data;
    public node next;    //struct node *next;
}
class Demo
{
    public int i, j;
}

class Program406
{
    public static void main(String arg[])
    {
        Demo obj = null;
        obj = new Demo();

        obj.i = 11;
        obj.j = 21;
    }
}