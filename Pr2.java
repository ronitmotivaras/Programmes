class Pr2{
    public static void main(String[] args) {
        //Switch as an Expression
        int day=5;
        String res;
        res = switch(day){
            case 1 -> "7am";
            case 2 -> "7am";
            case 3 -> "7am";
            case 4 -> "7am";
            case 5 -> "7am";
            case 6 -> "7am";
            default -> "9am";
        };//Semicolon is necessary and default also

        System.out.println(res);
    }
}