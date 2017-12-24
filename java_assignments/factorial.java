package java_1;
import java.io.*;
import java.util.*;

public class Factorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		Scanner in1=new Scanner(System.in);
		int f=1;
		int no=in1.nextInt();
		for(int i=0;i<no;i++)
		{
			f+=f*i;
		}
		System.out.print("Factorial="+f);
	}

}
