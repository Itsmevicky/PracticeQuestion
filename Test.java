class Test {
    public static void main(String[] args) {
        int num = 3;
        // Scanner scan = new Scanner(System.in);
        // num = scan.nextInt();
        System.out.print(num + " ");
        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
                System.out.print(num + " ");
            } else {
                num = num * 3 + 1;
                System.out.print(num + " ");
            }
        }

    }
}