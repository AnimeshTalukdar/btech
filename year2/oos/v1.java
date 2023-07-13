import java.io.*;

public class v1{
    public static void main(String [] args) throws IOException {
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in));

        int m=0,n=0;
        try{
            System.out.println("Enter first Number:");
            m = Integer.parseInt(br.readLine());
            System.out.println("Enter Second Numer: ");
            n = Integer.parseInt(br.readLine());
        }
        catch(IOException e){

        }
        catch ( Exception e ){
            System.out.println("Error Occured");
            System.exit(1);
        }
        if (n <= 0 || m <= 0){
            System.out.println("Number cannot be negative or zero " );
            System.out.println("Exitting...");
            System.exit(1);
        }
        System.out.println("GCD of "+ m + " and " + n + " is " + GCD.cal_gcd(n,m));

        System.out.println("LCM of "+ m + " and " + n + " is " + ((m*n)/GCD.cal_gcd(n,m)));
    }
}
class GCD{
    static int cal_gcd(int m,int n){
        if( m > n){
            int t = m;
            m = n ;
            n = t;
        }
        int gcd = 1;
        for (int i = 1;i<=n;i++){
            if( m%i == 0 && n % i ==0){
                gcd = i;
            }
        }
        return gcd;
    }

}
