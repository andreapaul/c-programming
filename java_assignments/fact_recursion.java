package java_1;
import java.io.*;
import java.util.*;

class Calc

{
	int fact(int n) {
	int result;
	
	if(n==1)
	return 1;
	
	result=n*fact(n-1);
	return result;}
		
	
}
public class Factorial1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int n;
		Calc o=new Calc();
		Scanner in=new Scanner(System.in);
		n=in.nextInt();
		int a=o.fact(n);
		System.out.print("Factorial="+a);
		

	}

}
