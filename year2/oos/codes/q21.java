public class q21 {
    public static void main(String[] args) {
        int numTerms = 5;

        double[] fractions = new double[numTerms];

        Thread thread = new Thread(new FractionGenerator(fractions));
        thread.start();

        try {
            thread.join();
        } catch (InterruptedException e) {

        }

        double sum = 0.0;
        for (double fraction : fractions) {
            sum += fraction;
        }

        System.out.println("Sum of the series: " + sum);
    }
}



class FractionGenerator implements Runnable {
    double[] fractions;

    FractionGenerator(double[] fractions) {
        this.fractions = fractions;
    }

    public void run() {
        for (int i = 0; i < fractions.length; i++) {
            fractions[i] = 1.0 / calculateFactorial(i);
        }
    }

    int calculateFactorial(int n) {
        if (n <= 1) {
            return 1;
        }
        int factorial = 1;
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
    }
}

