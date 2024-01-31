class Program410
{
    public static void main(String arg[])
    {
        int iRet = 0;
        SignlyLL obj = new SignlyLL();   

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);
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
    public void InsertFirst(int no)
    {
        node newn = new node(no);  //created a new node named newn is the refrence, refers to class node

        if(first == null)  //LL is empty
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        Count++;
    }


    public void InsertLast(int no){}
    public void InsertAtPos(int no, int ipos){}
    public void DeleteFirst(){}
    public void DeleteLast(){}
    public void DeleteAtPos(int ipos){}


    public void Display()
    {
        node temp = first;

        System.out.println("Elements of the Linked list are : ");
        while(temp != null)
        {
            System.out.print("| "+temp.data +" |->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public int Count()
    {
        return Count;
    }
}
