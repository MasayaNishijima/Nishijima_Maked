using System;
using System.Collections.Generic;
using System.Data.Odbc;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            StopWatch stopWatch= new StopWatch();
            while (true)
            {
                stopWatch.Update();
                stopWatch.Write();
                System.Threading.Thread.Sleep(1000);
            }
        }
    }

    class StopWatch
    {
        private int hour, minute, second;

        public StopWatch()
        {
            hour = minute = second = 0;
        }

        public StopWatch(int h, int m, int s)
        {
            hour = h;
            minute = m;
            second = s;

        }

        public void Update()
        {
            second++;
            if (second != 60)return;
                minute++;
                second = 0;
            if (minute != 60)return;
                hour++;
                minute = 0;
        }

        public void Write()
        {
            if (hour<=9)
            {
                Console.Write("0"+hour+"時間");    
            }
            else
            {
                Console.Write(hour+"時間");
            }
            if (minute <= 9)
            {
                Console.Write("0" + minute + "分");
            }
            else
            {
                Console.Write(minute + "分");
            }
            if (second <= 9)
            {
                Console.Write("0" + second + "秒\n");
            }
            else
            {
                Console.Write(second + "秒\n");
            }
        }
    }
}
