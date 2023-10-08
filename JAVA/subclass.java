class Shape {
    public double getArea() {
        return 0;
    }
}

class Rectangle extends Shape {
    double width;
    double height;

    public Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    @Override
    public double getArea() {
        return this.width * this.height;
    }
}
public class subclass{
    public static void main(String[] args) {
        Rectangle in=new Rectangle(10, 30);
        System.out.println("The area of the rectangle is:"+in.getArea());
    }
}