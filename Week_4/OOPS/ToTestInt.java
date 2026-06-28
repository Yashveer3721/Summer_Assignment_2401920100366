interface test {
    int square(int x);
}
class arithmetic implements test {
    public int square(int x) {
        return x * x;
    }
}

class ToTestInt {
    public static void main(String[] args) {
        arithmetic obj = new arithmetic();
        int num = 5;
        System.out.println("Square of " + num + " is: " + obj.square(num));
    }
}
