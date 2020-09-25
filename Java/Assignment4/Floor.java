import java.util.Scanner;

	class Tile
	{
		int tlength,twidth;
		
		Tile(int tlength,int twidth)
		{
			this.tlength=tlength;
			this.twidth=twidth;
		}
		
		int ttiles(int flength,int fwidth)
		{
			int tarea=tlength*twidth;
			int farea=flength*fwidth;
			int ttiles=(farea/tarea);
			return ttiles;
		}
	}

	class Floor
	{
		int length,width,total;
		public static void main(String[] args)
		{	
			Scanner scan=new Scanner(System.in);
			Floor f=new Floor();
			
			System.out.println("Enter length of the tile: ");
			f.length=scan.nextInt();
			System.out.println("Enter width of the tile: ");
			f.width=scan.nextInt();
			Tile t=new Tile(f.length,f.width);
			
			
			System.out.println("\n Enter length of the floor: ");
			f.length=scan.nextInt();
			System.out.println("Enter width of the floor: ");
			f.width=scan.nextInt();
			
			f.total=t.ttiles(f.length,f.width);
			System.out.println("\n Total tiles needed: "+f.total);
			
		}
	}