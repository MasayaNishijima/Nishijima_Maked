using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication3
{
    class Program
    {
        static void Main(string[] args)
        {
            Rectangle rectangle = new Rectangle(10, 20);
            Circle circle = new Circle(5);
            Console.WriteLine("{0}:{1}", rectangle.GetArea(), rectangle.GetPerimeter());
            Console.WriteLine("{0}:{1}", circle.GetArea(), circle.GetPerimeter());
        }
    }

    abstract class Shape
    {
        public abstract double GetArea();

        public abstract double GetPerimeter();
    }

    class Rectangle:Shape
    {
        private double width, height;

        public Rectangle(double w, double h)
        {
            width = w;
            height = h;
        }

        public override double GetArea()
        {
            return width*height;
        }

        public override double GetPerimeter()
        {
            return (width + height)*2;
        }
    }

    class Circle : Shape
    {
        private double radius;

        public Circle(double r)
        {
            radius = r;
        }

        public override double GetArea()
        {
            return radius*radius*3.14;
        }

        public override double GetPerimeter()
        {
            return radius*2*3.14;
        }
    }
}
