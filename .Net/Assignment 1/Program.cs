using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;

namespace BasicClassConcepts
{
    class Program
    {
        static void oldMain(string[] args)
        {

            //System.Console.WriteLine("Hello World!");
            //Console.ReadLine();

            //  System.Data.DataSet ds = new System.Data.DataSet();
            //  DataSet ds = new DataSet();
        }

        static void Main()
        {
            // class1 o;   // o  is a ref of type Class1
            // o = new class1();  // allocate memory for an obj of type class1 and make to point to it.

            class1 o = new class1();
            o.Display();
            o.Display("Sneha");


            // positional parameters
            Console.WriteLine(o.Add(10, 20, 30, 40));
            Console.WriteLine(o.Add(10, 20, 30));
            Console.WriteLine(o.Add(10, 20));
            Console.WriteLine(o.Add(10));
            Console.WriteLine(o.Add());
            Console.WriteLine();

            //named parameters
            Console.WriteLine(o.Add(d: 40));
            Console.WriteLine(o.Add(c: 30));
            Console.WriteLine(o.Add(d: 40, c: 30));


            //Console.WriteLine(o.Add2(d: 40));   // Error
            //Console.WriteLine(o.Add2(a: 30));   // Error
            Console.WriteLine(o.Add2(d: 40, c: 30, a: 40, b: 30));

            Console.ReadLine();


        }
    }
    public class class1
    {
        public void Display()
        {
            Console.WriteLine("Display");
        }

        // func overloading 
        public void Display(string s)
        {
            Console.WriteLine("Display" + s);
        }

        // optional parameters with default values
        public int Add(int a = 0, int b = 0, int c = 0, int d = 0)
        {
            return a + b + c + d;
        }
        //public int Add(int a, int b, int c)
        //{
        //    return a + b + c;
        //}
        //public int Add(int a, int b)
        //{
        //    return a + b;
        //}

        public int Add2(int a, int b, int c, int d)
        {
            return a + b + c + d;
        }
    }
}



