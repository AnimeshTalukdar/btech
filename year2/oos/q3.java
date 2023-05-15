class Box
{
int height,width,breadth;
Box(int height,int width,int breadth)
{
this.height=height;
this.width=width;
this.breadth=breadth;
}
double getVolume()
{
return height*width*breadth;
}
double getArea()
{
return 2*height*width+2*width*breadth+2*breadth*height;
}
public static void main(String []args)
{
Box box1=new Box(1,2,3);
Box box2=new Box(2,3,4);
System.out.println("Box 1");
System.out.println("Volume"+box1.getVolume());
System.out.println("Surface Area"+box1.getArea());
System.out.println("Box 2");
System.out.println("Volume"+box2.getVolume());
System.out.println("Surface Area"+box2.getArea());

}
}
