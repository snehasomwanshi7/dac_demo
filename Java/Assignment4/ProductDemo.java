import java.util.Scanner;

	class Product
	{
		int pid,quantity;
		float price;
		
		Product(int pid,int quantity,float price)
		{
			this.pid=pid;
			this.quantity=quantity;
			this.price=price;
		}
		
		static float total(Product []p)
		{
			Product test;
			float sum=0;
			for(int i=0; i<p.length; i++)
			{
				test=p[i];
				sum=sum+(test.quantity*test.price);
			}
			return sum;
		}
	}

	class ProductDemo
	{
		public static void main(String[] args)
		{	
			Product p1=new Product(1,2,200);
			Product p2=new Product(2,3,100);
			Product p3=new Product(3,2,500);
			Product p4=new Product(4,2,100);
			Product p5=new Product(5,3,300);
			Product p[]=new Product[]{p1,p2,p3,p4,p5};
			Product test;
			float price[]=new float[p.length];
			
			
			for(int i=0; i<p.length; i++)
			{
				test=p[i];
				price[i]=test.price;
			}
			
			float max=0;
			for(int i=0; i<price.length; i++)
			{
				if(max<price[i])
				{
					max=max+price[i];
					price[i]=max-price[i];
					max=max-price[i];
				}
			}
			System.out.println("highest price: "+max);

			for(int i=0; i<p.length; i++)
			{
				test=p[i];
				if(max==test.price)
				{
					System.out.println("pid of product with highest price: "+test.pid);
				}
			}
			
			float T=Product.total(p);
			System.out.println("Total amount spent on the product: "+T);
			
		}
	}
