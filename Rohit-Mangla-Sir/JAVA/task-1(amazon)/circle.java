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