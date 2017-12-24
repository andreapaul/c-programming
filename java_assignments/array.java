package java_1;
import java.io.*;

import java.util.*;

public class Array {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
int[] arr= {10,23,4,5,22,333};
System.out.println(arr.length);
int[] dest=new int[10];
System.arraycopy(arr, 1, dest, 0, 4);
System.out.println(Arrays.toString(dest));
	}

}
