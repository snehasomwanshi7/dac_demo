using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assign5C
{
    class Assign5C
    {
        static void Main()
        {
            Employee MyTest = new Employee();
            Employee MyTest1 = new Employee();
            Employee MyTest2 = new Employee();


            //Array List
            List<Employee> list = new List<Employee>();

            MyTest.set(10, "Sneha", 1000);
            list.Add(MyTest);

            MyTest1.set(11, "shraddha", 20000);
            list.Add(MyTest1);

            MyTest2.set(12, "shiv", 30000);
            list.Add(MyTest2);

            Employee[] Arr = list.ToArray();

            foreach (Employee T in list)
            {
                Console.WriteLine(T);
            }

            Console.ReadLine();
        }

    }
    class Employee
    {
        int Ro_No;
        String Name;
        decimal Fee;

        public void set(int Ro_No, String Name, decimal Fee)
        {
            this.Ro_No = Ro_No;
            this.Name = Name;
            this.Fee = Fee;

        }

        public override string ToString()
        {
            Console.WriteLine("*****************Details***************************");
            return Ro_No + " " + Name + " " + Fee;
        }
    }
}
