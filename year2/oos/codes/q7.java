import java.util.*;
class Date
{
    int day,month,year;
    Date(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }

    Date(int d)
    {
        day=d;
        month=1;
        year=1970;
    }

    Date (int d,int m)
    {
        day=d;
        month=m;
        year=1970;
    }

    Date()
    {
        day=1;
        month=1;
        year=1970;
    }

    void prev()
    {
        day=day-1;
        if (day==0)
        {
            day=31;
            month-=1;
            if(month==0)
            {
                month=12;
                year-=1;
            }
        }
    }

    void next()
    {
        day=day+1;
        if(day==32)
        {
            day=1;
            month+=1;
            if (month==13)
            {
                month=1;
                year+=1;
            }
        }
    }

    void print()
    {
        System.out.println(day+","+month+","+year);
    }

}
class q7{
    public static void main(String args[])
    {
        Date ob = new Date();
        ob.next();
        ob.print();
        ob.prev();
        ob.prev();
        ob.print();
    }


}
