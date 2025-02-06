class Mobile{
    String Brand;
    int price;
    static String type;

    public Mobile(){
        Brand = "Hello";
        price = 200;
        System.out.println("In constructor");
    }

    static{
        type = "Phone";
        System.out.println("In Static Block");
    }
    

    public void show(){
        System.out.println(Brand + " : " + price + " : "+ type);
    }

}
public class static_block {
    public static void main(String[] args) {

        Mobile m1 = new Mobile();
        m1.show();
        m1.Brand = "Apple";
        m1.price = 1500;
        Mobile.type = "Smart  phone";
        m1.show();

        Mobile m2 = new Mobile();

        m2.show();

        m2.Brand="samsung";
        m2.price=15000;

        Mobile.type = "not a  phone";

        m2.show();

        m1.show();
    }
}
