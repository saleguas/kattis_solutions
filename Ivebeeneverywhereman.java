import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;

public class Ivebeeneverywhereman {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		HashSet<String> thing = new HashSet<String>();
		Scanner scanner = new Scanner(System.in);
		int tCase = scanner.nextInt();
		ArrayList<Integer> outputs = new ArrayList<Integer>();
		int total = 0;
		for(int x = 0; x < tCase; x++)
		{
			int amt = scanner.nextInt();
			for(int z = 0; z <= amt; z++)
			{
				String s = scanner.nextLine();
				if(thing.add(s))
					total++;
			}
			outputs.add(total);
			total = 0;
			thing.clear();
		}
		for(int x : outputs)
			System.out.println(x == 1 ? 1 : x == 0 ? 0 : x - 1);
	}

}
