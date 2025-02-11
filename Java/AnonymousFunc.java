class A{
    public A(){
        System.out.println("Object is created");
    }
    public void show(){
        System.out.println("In show method");
    }
}

public class AnonymousFunc {
    public static void main(String[] args) {

        new A();
        new A().show();;
    }
}
