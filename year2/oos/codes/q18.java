interface Fruit {
    boolean hasAPeel();
}

interface Vegetable {
    boolean hasARoot();
}

class Tomato implements Fruit, Vegetable {
     public boolean hasAPeel() {
        return false;
    }
    public boolean hasARoot() {
        return true;
    }
}

 class q18 {
     public static void main(String[] args) {
        Tomato tomato = new Tomato();

        System.out.println("Tomato details:");
        System.out.println("Has a peel? " + tomato.hasAPeel());
        System.out.println("Has a root? " + tomato.hasARoot());
    }
}

