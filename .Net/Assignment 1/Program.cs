﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Employee
{
    class Program
    {
        static void Main()
        {
            Employee1 e = new Employee1();



            Employee1 e1 = new Employee1();
            e1.NAME = "Sneha";
            Console.WriteLine(e1.NAME);

            e.BASIC = 200000;
            Console.WriteLine("basic salary = " + e.BASIC);



            e.DEPTNO = 1;
            Console.WriteLine(e.DEPTNO);

            e.DEPTNO = -2;
            Console.WriteLine(e.DEPTNO);


            Employee1 o1 = new Employee1("Sneha", 65431, 10);
            Employee1 o2 = new Employee1("Sneha", 65431);
            Employee1 o3 = new Employee1("Sneha");
            Employee1 o4 = new Employee1();

            Employee1 o5 = new Employee1();
            Employee1 o6 = new Employee1();
            Console.WriteLine("netsalary is " + e.GetNetSalary());

            Console.ReadLine();


        }
    }
    class Employee1
    {


        public Employee1()
        {
            EmpNo++;
            Console.WriteLine("Employee_No =" + EmpNo);

        }

        public Employee1(String NAME, decimal BASIC, short DEPTNO)
        {
            this.NAME = NAME;
            this.BASIC = BASIC;
            this.DEPTNO = DEPTNO;

            Console.WriteLine(NAME + "" + BASIC + "" + DEPTNO);
        }

        public Employee1(String NAME, decimal BASIC)
        {
            this.NAME = NAME;
            this.BASIC = BASIC;

            Console.WriteLine(NAME + "" + BASIC);
        }


        public Employee1(String NAME)
        {
            this.NAME = NAME;

            Console.WriteLine("Emp_Name = " + NAME);

        }

        #region properties
        private string name;

        public string NAME
        {
            set
            {
                if (value != "")
                {
                    name = value;
                }
                else
                {

                    Console.WriteLine("please enter valid input!!!!!!!!");

                }

            }
            get
            {

                return name;
            }

        }
        #endregion

        #region properties
        private decimal Basic;

        public decimal BASIC
        {

            set
            {
                if (value > 100000 && value < 999999)
                {
                    Basic = value;
                }
                else
                {
                    Console.WriteLine("invalid basic salary");
                }
            }
            get
            {

                return Basic;
            }

        }
        #endregion

        #region properties
        private short DeptNo;

        public short DEPTNO
        {
            set
            {
                if (value > 0)
                {
                    DeptNo = value;
                }
                else
                {
                    Console.WriteLine("invalide department No");
                }
            }
            get
            {

                return DeptNo;
            }
        }
        #endregion


        #region properties
        private int EmpNo;

        public int EMPNO
        {

            get
            {
                return EMPNO;
            }
        }
        #endregion

        #region method
        public decimal GetNetSalary()
        {
            decimal basic = 100000;
            decimal hra = 60000;
            decimal da = 50000;

            decimal netSalary = basic + hra + da;

            return netSalary;
        }
        #endregion
    }
}
