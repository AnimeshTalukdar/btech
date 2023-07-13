class q23{
    public static void main(String [] args){
        //System.out.println("main");
        Odds odd = new Odds();
        Evens even = new Evens();
        odd.start();
        even.start();
        try{
            odd.join();
            even.join();
        }
        catch(InterruptedException e){

        }
        System.out.println("sum of series: "+(odd.getVal()+even.getVal()));
    }
}
class Odds extends Thread{
    int val = 0;
    public int getVal(){
        return val;
    }
    public void run(){
        int s= 0;
        for (int i=1;i<=100;i+=2){
            s+=i;
        }
        val = s;
    }
}
class Evens extends Thread{
    int val = 0;
    public int getVal(){
        return val;
    }

    public void run(){
        int s= 0;
        for (int i = 2;i<=100;i+=2){
            s+=i;
        }
        val = s;
    }
}
