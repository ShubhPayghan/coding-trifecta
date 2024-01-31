

class node   
{
    public int data;
    public node next;    

    public node(int no)
    {
        data = no;
        next = null;
    }
}

class SignlyLL
{
    private node first;
    private int Count; 

    public SignlyLL()
    {
        first = null;
        Count = 0;
    }
}
class Program408
{
    public static void main(String arg[])
    {
        SignlyLL obj = new SignlyLL();   
    }
}