public class Demo {
    public static void main(String[] args) {
        AdvCalc obj = new AdvCalc();
        int r1= obj.add(5,4);
        int r2= obj.sub(5,4);
        int r3= obj.mul(5,4);
        int r4= obj.div(5,4);
        
        System.out.println(r1);
        System.out.println(r2);
        System.out.println(r3);
        System.out.println(r4);
    }
}