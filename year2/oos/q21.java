class DenominatorGenerator implements Runnable {
    double[] denominators;

    DenominatorGenerator(double[] denominators) {
        this.denominators = denominators;
    }

    public void run() {
        for (int i = 0; i < denominators.length; i++) {
            denominators[i] = 1.0 / factorial(i);
        }
    }

    int factorial(int n) {
        if (n <= 1) {
            return 1;
        }
        int fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}

public class q21 {
    public static void main(String[] args) {
        int NUM_TERMS = 5; 

        double[] denominators = new double[NUM_TERMS];

        Thread t1 = new Thread(new DenominatorGenerator(denominators));
        t1.start();

        try {
            t1.join();
        } catch (InterruptedException e) {
            
        }

        double sum = 0.0;
        for (double denominator : denominators) {
            sum += denominator;
        }

        System.out.println("Sum of the series: " + sum);
    }
}

