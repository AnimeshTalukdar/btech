import java.util.Scanner;
class stack
{
    int arr[];
    int p;
    int size;
    stack(int size)
    {
        p=0;
        this.size=size;
        arr=new int[size];
        //for(int i =0 ;i<size;i++)
        //System.out.println(arr[i]);
    }
    void push(int n)
    {
        if(p==size)
        {
            System.out.println("Stack full");
            return;
        }
        arr[p]=n;
        p+=1;
    }
    int pop()
    {
        if (p==0)
        {
            System.out.println("Empty Stack");
            return -1 ;
        }
        p-=1;
        return arr[p];

    }




}
class q4{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        stack ob=new stack(12);

        while (true){
            System.out.println("enter 1: to push");
            System.out.println("enter 2: to pop");
            System.out.println("enter 3: to exit");
            System.out.println("Enter your choice");
            int choice = sc.nextInt();
            switch(choice){
                case 1:
                System.out.println("Enter the value to push");
                int val = sc.nextInt();
                ob.push(val);
                System.out.println("pushed successfully");
                break;
                case 2:
                System.out.println("popped successully " +ob.pop());
                break;
                case 3:
                System.out.println("Exitting...");
                System.exit(0);

                break;
                default:
                System.out.println("Wrong choice");


            }
        }
    }

}
