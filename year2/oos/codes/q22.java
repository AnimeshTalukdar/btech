import java.io.File;
import java.util.Scanner;
import java.io.FileNotFoundException;
public class q22{
    public static void main(String [] args) throws InterruptedException{

        Producer p = new Producer();
        Consumer c = new Consumer();
        c.start();
        p.start();
        p.join();
        int cnt = 999;
        while(p.hasVal && cnt > 0){
            cnt-=1;
            p.join();
            c.join();
            c.accumulate(p.val);
            //System.out.println(p.val);
            p.nextVal();
        }
        c.join();
        System.out.println("Final Value :"+ c.acc);
    }
}


class Producer extends Thread{
    File file;
    Scanner myReader;
    boolean hasVal = true;
    int val =0;

    public void run(){
        try {
            file = new File("file.txt");
            myReader = new Scanner(file);
        }
        catch (FileNotFoundException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }

        hasVal = myReader.hasNextInt();


    }
    public void nextVal(){
        if (myReader == null){
            System.out.println("Myreader null");
        }
        else if (myReader.hasNextInt()){
            hasVal = myReader.hasNextInt();
            val = myReader.nextInt();
        }
        else{
            hasVal = false;
        }
    }
}
class Consumer extends Thread{
    int acc = 0;
    public void run(){

    }
    public void accumulate(int val){
        acc+= val;
    }
}
