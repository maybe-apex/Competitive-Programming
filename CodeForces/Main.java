import java.util.Arrays;
import java.util.Date;
import java.awt.*;
import java.text.NumberFormat;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // System.out.println("Hello World");
        // int number = 100;
        // int number2 = number;
        // number = 200;
        // System.out.println(number);
        // System.out.println(number2);
        // byte age = 30;
        // int viewsCount = 123_456_789;
        // float price = 10.99F;
        // System.out.println(age + viewsCount + price);
        // Date now = new Date();
        // System.out.println(now);
        // Point point1 = new Point(1, 1);
        // Point point2 = point1;
        // int n = 10;
        // for (int i = 0; i < n; i++) {
        // System.out.println(i);
        // }
        // String message = new String("Hello");
        // String message2 = "World";
        // System.out.println(message + " " + message2);
        // message.endsWith("lo");
        // System.out.println(message.toLowerCase());
        // int[] numbers = new int[5];
        // numbers[0] = 1;
        // numbers[1] = 2;
        // // numbers[10] = 3;
        // Arrays.sort(numbers);
        // System.out.println(Arrays.toString(numbers));
        // String s = "test";
        // int[] newarray = { 1, 2, 3, 4, 5, 6, 7 };
        // System.out.println(newarray.length);
        // int[][] multiarray = { { 1, 2, 3 }, { 4, 5, 6 } };
        // System.out.println(Arrays.deepToString(multiarray));
        // final float PI = 3.14F;
        // double result = 10 / 3;
        // int x = 1;
        // int y = x++;
        // System.out.println(x);
        // System.out.println(y);
        // System.out.println(result);
        // String z = "1";
        // Integer.parseInt(z);
        // int a = Math.round(1.1F);
        // System.out.println((int) (Math.random() * 100));
        // NumberFormat currency = NumberFormat.getCurrencyInstance();
        // String money = currency.format(1234567.899);
        // System.out.println(money);
        // NumberFormat percent = NumberFormat.getPercentInstance();
        // String percentage = percent.format(0.72);
        // System.out.println(percentage);
        // String percentage2 = NumberFormat.getPercentInstance().format(0.69);
        // System.out.println(percentage2);

        // Scanner scanner = new Scanner(System.in);
        // age = scanner.nextByte();
        // System.out.println("You are " + age);

        // System.out.print("Name: ");
        // String name = scanner.next();
        // String lname = scanner.next();
        // name += " " + lname;
        // System.out.println("Your name is " + name);

        // +++++++++++++++++++++++++++++++++++++++++++++++++++//
 
        // Scanner scanner = new Scanner(System.in);
        // System.out.print("Principal : ");
        // int principle = scanner.nextInt();
        // System.out.print("Interest : ");
        // double interest = scanner.nextDouble();
        // System.out.print("Term : ");
        // int time = scanner.nextInt();
        // interest /= 100;
        // // time *= 12;
        // double ans = principle * interest * Math.pow((1 + interest), time) /
        // (Math.pow((1 + interest), time) - 1);
        // System.out.println("Mortgage : $" + (double) principle * interest / 100 /
        // 12);
        // String finalans = NumberFormat.getCurrencyInstance().format(ans);
        // System.out.println("Mortgage : " + finalans);

        // +++++++++++++++++++++++++++++++++++++++++++++++++++//

        // Scanner scanner = new Scanner(System.in);
        // System.out.print("Number: ");
        // int number = scanner.nextInt();
        // String ans = "";
        // ans += number % 5 == 0 ? "Fizz" : "";
        // ans += number % 3 == 0 ? "Buzz" : "";
        // if ((number % 5 != 0) && (number % 3 != 0))
        // System.out.println(number);
        // else
        // System.out.println(ans);

        // +++++++++++++++++++++++++++++++++++++++++++++++++++//

        Scanner scanner = new Scanner(System.in);
        int principle = 0, time = 0;
        double interest = -1, ans = 0;
        while (principle < 1000 || principle > 1_000_000) {
            System.out.print("Principal ($1K-$1M) : ");
            principle = scanner.nextInt();
        }
        while (interest < 0 || interest > 30) {
            System.out.print("Interest : ");
            interest = scanner.nextDouble();
        }
        while (time < 1 || time > 30) {
            System.out.print("Term : ");
            time = scanner.nextInt();
        }
        interest /= 100;
        time *= 12;
        ans = principle * interest * Math.pow((1 + interest), time) / (Math.pow((1 + interest), time) - 1);
        // String finalans = NumberFormat.getCurrencyInstance(ans);
        System.out.println("Mortgage : " + ans);

    }
}