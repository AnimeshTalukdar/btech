class Tollbooth {
     int carsWithoutPayment;
     int totalCarsPassed;
     int totalCashCollected;

     Tollbooth() {
        carsWithoutPayment = 0;
        totalCarsPassed = 0;
        totalCashCollected = 0;
    }

     void carPassed(boolean hasPaid) {
        totalCarsPassed++;
        if (!hasPaid) {
            carsWithoutPayment++;
        } else {
            totalCashCollected += 50;
        }
    }

     int getCarsWithoutPayment() {
        return carsWithoutPayment;
    }

     int getTotalCarsPassed() {
        return totalCarsPassed;
    }

     int getTotalCashCollected() {
        return totalCashCollected;
    }
}

 class q17 {
     public static void main(String[] args) {
        Tollbooth tollbooth = new Tollbooth();

        
        tollbooth.carPassed(true);  
        tollbooth.carPassed(false); 
        tollbooth.carPassed(true);  

        
        System.out.println("Total number of cars passed by without paying: " + tollbooth.getCarsWithoutPayment());
        System.out.println("Total number of cars passed by: " + tollbooth.getTotalCarsPassed());
        System.out.println("Total cash collected: Rs. " + tollbooth.getTotalCashCollected());
    }
}

