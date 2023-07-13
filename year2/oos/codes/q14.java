class q14{
    public static void main(String[] args){
        Automobile a[] = new Automobile [2];
        a[0]=new Track(
                "punjabitruck",
                "truck",
                "40",
                "140000",
                "500",
                "#####",
                "5 ton",
                "full",
                "12"
                );
        a[1]= new Car(
                "sedan",
                "family car",
                "100",
                "400000",
                "300",
                "####",
                "2",
                "4"

                );
        for(int i = 0;i <a.length;i++){
            a[i].printDetails();
            System.out.println();
        }

    }
}

class Automobile {
    String make, 
           type,
           maxSpeed, 
           price,
           mileage,
           registrationNumber;
    Automobile(){
        make = "";
        type = "";
        maxSpeed = "";
        price = "";
        mileage = "";
        registrationNumber = "";

    }
    Automobile(String make, String type, String maxSpeed, String price, String mileage, String registrationNumber){
        this.make = make; 
        this.type = type ;
        this.maxSpeed = maxSpeed;
        this.price = price;
        this.mileage = mileage;
        this.registrationNumber = registrationNumber;
    }

    void printDetails(){
        System.out.println("Make:"+make);
        System.out.println("Type:"+type);
        System.out.println("MaxSpeed:"+maxSpeed);
        System.out.println("Price:"+price);
        System.out.println("Mileage:"+mileage);
        System.out.println("RegistrationNumber:"+registrationNumber);
    }

    String getMake(){
        return make;
    }
    void setMake(String make){
        this.make = make;
    }

    String getType(){
        return type;
    }
    void setType(String type){
        this.type = type;
    }

    String getMaxSpeed(){
        return maxSpeed;
    }
    void setMaxSpeed(String maxSpeed){
        this.maxSpeed = maxSpeed;
    }

    String getPrice(){
        return price;
    }
    void setPrice(String price){
        this.price = price;
    }

    String getMileage(){
        return mileage;
    }
    void setMileage(String mileage){
        this.mileage = mileage;
    }

    String getRegistrationNumber(){
        return registrationNumber;
    }
    void setRegistrationNumber(String registrationNumber){
        this.registrationNumber = registrationNumber;
    }
}

class Track extends Automobile{
    String capacity,
           hoodType,
           noOfWheels;

    Track(){
        super();
        capacity = "";
        hoodType = "";
        noOfWheels = "";

    }

    Track(String make, String type, String maxSpeed, String price, String mileage, String registrationNumber,String capacity,String hoodType, String noOfWheels){
        super(make,type,maxSpeed, price,mileage,registrationNumber);
        this.capacity = capacity;
        this.hoodType = hoodType;
        this.noOfWheels = noOfWheels;
    }

    void printDetails(){
        super.printDetails();

        System.out.println("Capacity:"+capacity);
        System.out.println("HoodType:"+hoodType);
        System.out.println("NoOfWheels:"+noOfWheels);
    }

    String getCapacity(){
        return capacity;
    }
    void setCapacity(String capacity){
        this.capacity = capacity;
    }

    String getHoodType(){
        return hoodType;
    }
    void setHoodType(String hoodType){
        this.hoodType = hoodType;
    }

    String getNoOfWheels(){
        return noOfWheels;
    }
    void setNoOfWheels(){
        this.noOfWheels = noOfWheels;
    }
}
class Car extends Automobile{
    String noOfDoors,
           seatingCapacity;

    Car(){
        super();
        this.noOfDoors = "";
        this.seatingCapacity = "";

    }

    Car(String make, String type, String maxSpeed, String price, String mileage, String registrationNumber,String noOfDoors,String seatingCapacity){

        super(make,type,maxSpeed, price,mileage,registrationNumber);
        this.noOfDoors = noOfDoors;
        this.seatingCapacity = seatingCapacity;
    }
    void printDetails(){
        super.printDetails();

        System.out.println("NoOfDoors:"+noOfDoors);
        System.out.println("SeatingCapacity:"+seatingCapacity);
    }

    String getNoOfDoors(){
        return noOfDoors;
    }
    void setNoOfDoors(String noOfDoors){
        this.noOfDoors = noOfDoors;
    }

    String getSeatingCapacity(){
        return seatingCapacity;
    }
    void setSeatingCapacity(String seatingCapacity){
        this.seatingCapacity = seatingCapacity;
    }

}

