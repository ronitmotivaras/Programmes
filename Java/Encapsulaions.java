class Human {
    private int age;
    private String name;

    public int getAge() {
        return age;
    }

    public void setAge(int a) {
        age = a;
    }

    public String getName() {
        return name;
    }

    public void setName(String n) {
        name = n;
    }
}

public class Encapsulaions {
    public static void main(String[] args) throws ClassNotFoundException {
        Human h1 = new Human();
        h1.setAge(30);
        h1.setName("Ronit");

        System.out.println(h1.getName() + " : " + h1.getAge());
    }
}
