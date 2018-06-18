import java.util.*;
import java.io.*;
import java.math.BigInteger;
public class Main {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		BigInteger a;
		BigInteger b;
		BigInteger resp1;
		for(int i=0;i<10;i++){
			a = new BigInteger(in.readLine());
			b = new BigInteger(in.readLine());
			resp1 = a.subtract(b);
			resp1 = resp1.divide(BigInteger.valueOf(2));
			System.out.println(resp1.add(b));
			System.out.println(resp1);
			
		}
	}

}
