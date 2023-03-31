import java.io.*;
class Room
{
int height=0;
int width=0;
int breath=0;
Room(int height,int width,int breath)
{
this.height=height;
this.breath=breath;
this.width=width;
}
int volume()
{
return height*width*breath;
}
}
class RoomDemo
{
public static void main(String []args)
{
int height=1,width=2,breath=3;
System.out.println("Height= "+height+" Width= "+width+" Breath "+breath);
Room ob = new Room(height,width,breath);

System.out.println("Volume:"+ob.volume());
}
}

