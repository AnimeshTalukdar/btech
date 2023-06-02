import java.util.*;


class complexnumber
{
    double real;
    double img;
    complexnumber()
    {
        real=0;
        img=0;
    }
    complexnumber(double d)
    {
        real=d;
        img=0;
    }
    complexnumber(double a,double b)
    {
        real = a;
        img = b;
    }
    complexnumber add(complexnumber other)
    {
        return new complexnumber(real+other.real,img+other.img);
    }

    complexnumber multiply(complexnumber other)
    {
        return new complexnumber(real*other.real+img*other.img,other.img*real+img*other.real);
    }
    void print() { 
        System.out.println("Real:"+real+"  Img:"+img);
    }
}
class q6{
    public static void main(String []args)
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter two complex numbers");
        complexnumber ob = new complexnumber(sc.nextDouble(),sc.nextDouble());
        complexnumber ob1= new complexnumber(sc.nextDouble(),sc.nextDouble());
        complexnumber t =ob.add(ob1);
        System.out.println("Addition");
        t.print();
        System.out.println("Multiplication");
        t=ob.multiply(ob1);
        t.print();

    }

}
