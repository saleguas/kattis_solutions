import java.util.ArrayList;
import java.util.Scanner;

public class Symmetric {
	public static void main(String[] args) {
		Scanner kb = new Scanner(System.in);
		int a = kb.nextInt();
		kb.nextLine();
		int c = 0;
		while (a != 0) {
			c++;
			String[] funny = new String[a];
			for (int x = 0, y = a-1; x < a/2; x++, y--) {
				funny[x] = kb.nextLine();
				funny[y] = kb.nextLine();
			}
			if (a%2 == 1) funny[a/2] = kb.nextLine();
			System.out.println("SET " + c);
			for (int x = 0; x < funny.length; x++) {
				System.out.println(funny[x]);
			}
			a = kb.nextInt();
			kb.nextLine();
		}
	}
}
