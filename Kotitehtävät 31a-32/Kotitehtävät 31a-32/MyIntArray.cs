using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Kotitehtävät_31a_32
{
    class MyIntArray
    {
        public int[] MyArray
        { get; private set; }

        public MyIntArray(int numbers)
        {
            MyArray = new int[3];
            MyArray[0] = 1;
            MyArray[1] = 3;
            MyArray[2] = 4;
        }

        public void Write(string s)
        {
            Console.WriteLine(MyArray[0]+s+MyArray[1]+s+MyArray[2]);
        }
    }
}
