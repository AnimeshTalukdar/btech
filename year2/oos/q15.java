
class q15{
    public static void main(String [] args){
        Shape [] arr = 
    }

}


interface Shape {
    double area();
    //void draw();
    //void rotate();
    void move(double a,double b);
    void printDetails();

}
class Circle implements Shape{
    double centre_x, centre_y;

    double radius;

    Circle (double centre_x,double centre_y,double radius){
        this.centre_x = centre_x;
        this.centre_y = centre_y;
        this.radius = radius;
    }

    public double area(){
        return 3.14*radius*radius;
    }
    public void move(double changeInX,double changeInY ){
        this.centre_x+=changeInX;
        this.centre_y+= changeInY;
    }
    public void printDetails(){
        System.out.println("Centre:" + centre_x+","+centre_y);
        System.out.println("Radius:" + radius);
    }
}
class Rectangle implements Shape{
    double p1x,p1y,p2x,p2y,p3x,p3y,p4x,p4y;
    public double area(){
        return Math.sqrt((p1x-p2x)*(p1x-p2x))*Math.sqrt((p2x-p3x)*(p2x-p3x));

    }

    public void move(double changeInX,double changeInY){
        p1x+=changeInX;
        p2x+=changeInX;
        p3x+=changeInX;
        p4x+=changeInX;
        p1y+=changeInY;
        p2y+=changeInY;
        p3y+=changeInY;
        p4y+=changeInY;
    }
    public void printDetails(){
        System.out.println("Point 1 :"+"("+p1x+","+p1y+")");
        System.out.println("Point 2 :"+"("+p2x+","+p2y+")");
        System.out.println("Point 3 :"+"("+p3x+","+p3y+")");
        System.out.println("Point 4 :"+"("+p4x+","+p4y+")");
    }

}
