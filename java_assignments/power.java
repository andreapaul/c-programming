
/* package whatever; // don't place package name! */


import java.io.*;
import java.util.*;

public class Power {

	public static void main(String[] args, int exit) {
		// TODO Auto-generated method stub
		int result=1;
		int no;
		
Scanner in=new Scanner(System.in);
Scanner in1=new Scanner(System.in);
no=in.nextInt();
int pwr=in1.nextInt();


if(no==0)
{
	System.out.println(0);
	}
if(no==0&&pwr==1)
{
	System.out.println(0);
	}
for(int i=0;i<pwr;i++)
{
	result=no*result;
	
	}
System.out.println("result="+result);
	}

}
