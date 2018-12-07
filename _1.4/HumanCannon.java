import java.util.Scanner;

public class HumanCannon {
	public static void main(String[] args) {
		Scanner kb = new Scanner(System.in);
		int anthony = kb.nextInt();
		kb.nextLine();
		for (int timez = 0; timez < anthony; timez++) {
			double v = kb.nextDouble();
			double angle = Math.toRadians(kb.nextDouble());
			double dis = kb.nextDouble();
			double h1 = kb.nextDouble();
			double h2 = kb.nextDouble();
			kb.nextLine();
			double time = dis/(v*Math.cos(angle));
			double height = ((v*time*Math.sin(angle)) - ((0.5) * (9.81) * Math.pow(time, 2)));
			if (height > h1+1 && height < h2-1) System.out.println("Safe");
			else System.out.println("Not Safe");
		}
	}
}
