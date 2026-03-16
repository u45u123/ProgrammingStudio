package 프로그래밍스튜디오.src;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Main mainLab01 = new Main();
        mainLab01.j001();
        mainLab01.j002();
    }

    void j001(){
        Scanner sc = new Scanner(System.in);

        int height, weight;
        double bmi;

        height = sc.nextInt();
        weight = sc.nextInt();

        bmi = weight / (height / 100.0 * height / 100.0);

        System.out.println(bmi);
 
    }
    void j002(){
        double c_degree, f_degree;

        Scanner sc = new Scanner(System.in);
        c_degree = sc.nextDouble();

        f_degree = c_degree * 9 / 5 + 32;

        System.out.println(f_degree);
    }
    void j003(){
        double m2_area, pyung_area;
        Scanner sc = new Scanner(System.in);
        m2_area = sc.nextDouble();
        pyung_area = m2_area / 3.305;
        System.out.println(pyung_area);
    }
    void j004(){
        double x1, x2, y1, y2;
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();
        double distance = Math.sqrt(Math.pow(x2 - x1,2) + Math.pow(y2 - y1, 2));
        System.out.println(distance);
    }
    void j005(){
        int month, day, day_count=0;

        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        Scanner sc = new Scanner(System.in);
        month = sc.nextInt();
        day = sc.nextInt();
        for(int i = 0; i < month-1; i++){
            day_count += days[i];
        }
        day_count += day;
        System.out.println(day_count);

    }
}