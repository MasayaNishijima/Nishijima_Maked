using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoSecond
{
    class Program
    {
        static void Main(string[] args)
        {
            Button button = new Button();
            RetButton retButton= new RetButton();
            Button b = new RetButton();
            button.Push();
            retButton.Push();
            b.Push();
        }
    }

    class Button
    {
        protected int count;

        public void Push()
        {
            count++;
            Console.Write(count+" ");
        }
    }

    class RetButton:Button
    {
        public void Push()
        {
            count++;
            Console.Write(count + " ");
            Console.Write("Ret");
        }
    }
}
