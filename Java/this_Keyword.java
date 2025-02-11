class Human {
    private int age;
    private String name;
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
}

public class this_Keyword {
    public static void main(String[] args) throws ClassNotFoundException {
        Human h1 = new Human();
        h1.setAge(30);
        h1.setName("Ronit");

        System.out.println(h1.getName() + " : " + h1.getAge());
    }
}
