//creatung interface for shape

interface Shape{
    double area();
    int numberOfSides();
    String shapeName();
}
class Circle implements Shape{
    private double radius;
    public Circle(double radius){
        this.radius = radius;
    }
    @Override
    public double area(){
        return Math.PI*radius*radius;
    }
    @Override
    public int numberOfSides(){
        return 0;
    }
    @Override
    public String shapeName(){
        return "Circle";
    }
}


abstract class Quadrilateral implements Shape {
    public int numberOfSides() {
        return 4;
    }
}


//square

class Square extends Quadrilateral{
    private double side;
    public Square(double side){
        this.side = side;
    }
    @Override
    public double area(){
        return side*side;
    }
    @Override
    public String shapeName(){
        return "Square";
    }
}


//rectangle
class Rectangle extends Quadrilateral{
    private double length;
    private double breadth;
    public Rectangle(double length, double breadth){
        this.length = length;
        this.breadth = breadth;
    }
    @Override
    public double area(){
        return length*breadth;
    }
    @Override
    public String shapeName(){
        return "Rectangle";
    }
}

abstract class Triangle implements Shape {
    @Override
    public int numberOfSides() {
        return 3;
    }
}

class Isosceles extends Triangle{
    private double base;
    private double height;

    public Isosceles(double base, double height){
        this.base = base;
        this.height = height;
    }
    @Override
    public double area(){
        return 0.5*base*height;
    }
    @Override
    public String shapeName(){
        return "Isosceles Triangle";
    }

}

//scalene
class Scalene extends Triangle{
    private double base;
    private double height;

    public Scalene(double base, double height){
        this.base = base;
        this.height = height;
    }
    @Override
    public double area() {
        return (base * height) / 2;
    }

    @Override
    public String shapeName() {
        return "Scalene Triangle";
    }
}

//equilateral
class EquilateralTriangle extends Triangle {
    private double side;

    public EquilateralTriangle(double side) {
        this.side = side;
    }

    @Override
    public double area() {
        return (Math.sqrt(3) / 4) * side * side;
    }

    @Override
    public String shapeName() {
        return "Equilateral Triangle";
    }
}

public class Main{
    public static void main(String[] args) {
        Shape circle=new Circle(5);
        System.out.println(circle.shapeName()+"has area:"+circle.area()+" and number of sides:"+circle.numberOfSides());
    }
}