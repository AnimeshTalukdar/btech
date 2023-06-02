interface Shape {
    double area();
    void draw();
    void rotate();
    void move(Position newPosition);
}

class Circle implements Shape {
     double radius;
     Position position;

    public Circle(double radius, Position position) {
        this.radius = radius;
        this.position = position;
    }

    public double getRadius() {
        return radius;
    }

    public double area() {
        return 3.14159 * radius * radius;
    }

    public void draw() {
        System.out.println("Drawing a circle at position (" + position.getX() + ", " + position.getY() + ")");
    }

    public void rotate() {
        System.out.println("Rotating a circle at position (" + position.getX() + ", " + position.getY() + ")");
    }

    public void move(Position newPosition) {
        System.out.println("Moving a circle from position (" + position.getX() + ", " + position.getY() + ") to position (" + newPosition.getX() + ", " + newPosition.getY() + ")");
        position = newPosition;
    }
}

class Rectangle implements Shape {
     double length;
     double width;
     Position position;

    public Rectangle(double length, double width, Position position) {
        this.length = length;
        this.width = width;
        this.position = position;
    }

    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;
    }

    public double area() {
        return length * width;
    }

    public void draw() {
        System.out.println("Drawing a rectangle at position (" + position.getX() + ", " + position.getY() + ")");
    }

    public void rotate() {
        System.out.println("Rotating a rectangle at position (" + position.getX() + ", " + position.getY() + ")");
    }

    public void move(Position newPosition) {
        System.out.println("Moving a rectangle from position (" + position.getX() + ", " + position.getY() + ") to position (" + newPosition.getX() + ", " + newPosition.getY() + ")");
        position = newPosition;
    }
}

class Position {
     double x;
     double y;

    public Position(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }
}

public class q15 {
    public static void main(String[] args) {
        Position position1 = new Position(1, 2);
        Position position2 = new Position(3, 4);
        Position position3 = new Position(5, 6);

        Circle[] circles = { new Circle(5, position1), new Circle(3, position2) };
        Rectangle[] rectangles = { new Rectangle(4, 6, position3), new Rectangle(2, 8, position1), new Rectangle(7, 3, position2) };

        System.out.println("Details before moving:");
        System.out.println("Circles:");
        for (Circle circle : circles) {
            System.out.println("Radius: " + circle.getRadius());
            System.out.println("Area: " + circle.area());
            circle.draw();
            circle.rotate();
            System.out.println();
        }

        System.out.println("Rectangles:");
        for (Rectangle rectangle : rectangles) {
            System.out.println("Length: " + rectangle.getLength());
            System.out.println("Width: " + rectangle.getWidth());
            System.out.println("Area: " + rectangle.area());
            rectangle.draw();
            rectangle.rotate();
            System.out.println();
        }

        Position newPosition = new Position(7, 8);

        for (Circle circle : circles) {
            circle.move(newPosition);
        }

        for (Rectangle rectangle : rectangles) {
            rectangle.move(newPosition);
        }

        System.out.println("Details after moving:");
        System.out.println("Circles:");
        for (Circle circle : circles) {
            System.out.println("Radius: " + circle.getRadius());
            System.out.println("Area: " + circle.area());
            circle.draw();
            circle.rotate();
            System.out.println();
        }

        System.out.println("Rectangles:");
        for (Rectangle rectangle : rectangles) {
            System.out.println("Length: " + rectangle.getLength());
            System.out.println("Width: " + rectangle.getWidth());
            System.out.println("Area: " + rectangle.area());
            rectangle.draw();
            rectangle.rotate();
            System.out.println();
        }
    }
}

