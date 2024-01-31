class Program409
{
    public static void main(String arg[])
    {
        SignlyLL obj = new SignlyLL();   

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
    }
}

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
    
    public void InsertFirst(int no){}
    public void InsertLast(int no){}
    public void InsertAtPos(int no, int ipos){}
    public void DeleteFirst(){}
    public void DeleteLast(){}
    public void DeleteAtPos(int ipos){}
    public void Display(){}
    public int Count(){return Count;}
}
