		package java_1;
import java.io.*;
import java.util.*;

public class Swap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		Scanner in1=new Scanner(System.in);
		int a=in.nextInt();
		int b=in1.nextInt();
		System.out.println("numbers before swapping"+a+" "+b);
		int t=a;
		a=b;
		b=t;
		System.out.println("numbers after swapping"+a+" "+b);
	}

}
