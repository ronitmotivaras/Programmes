class Mobile{
    String Brand;
    int price;
    static String type;

    public void show(){
        System.out.println(Brand + " : " + price + " : "+ type);
    }
}
public class static_keyword {
    public static void main(String[] args) {

        Mobile m1 = new Mobile();
        m1.Brand = "Apple";
        m1.price = 1500;
        Mobile.type = "Smart  phone";

        Mobile.type = "not a  phone";

        Mobile m2 = new Mobile();
        m2.Brand = "Samsung";
        m2.price = 1700;
        Mobile.type = "phone";

        m1.show();
        m2.show();

    }
}
