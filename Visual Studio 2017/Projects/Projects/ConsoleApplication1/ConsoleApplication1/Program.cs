using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            Student s = new Student();
            Console.WriteLine("名前を入力してね");
            //s.SetName(Console.ReadLine());
            Console.WriteLine("年齢を入力してね");
            //s.SetAge(int.Parse(Console.ReadLine()));      
            Console.WriteLine(s.GetName());
            Console.WriteLine(s.GetAge()+"歳");

        }
    }

    class Student
    {
        private int age;
        private string name;

        public Student(string str)
        {
            name = str;
        }

        public Student(int x)
        {
            age = x;
        }
        public Student()
        {
            name = "NoName";
            age = 0;
        }
        public int GetAge()
        {
            return age;
        }

        public void SetAge(int x)
        {
            age = x;
        }
        public string GetName()
        {
            return name;
        }

        public void SetName(string y)
        {
            name = y;
        }
    }
}