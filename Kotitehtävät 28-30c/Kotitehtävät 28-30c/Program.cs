using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Kotitehtävät_28_30c
{
    class Program
    {
        static void Main(string[] args)
        {
            /*28.Write a method Combine so that for example Combine(”qwerty”, ”asdf”) -> ”qwertyasdf”. 
             * The following arrow character->means return from the method.*/
            Combine("qwerty", "asdf");
            Console.WriteLine();
            /*29.Realize Combine method on such way that two parameters are integers. For example Combine(23, 15)-> ”2315”.*/
            Combine(23, 15);
            Console.WriteLine();
            /*30a.Write a method, the name of which is Initials.Method acts as follows.E.g.Initials(”Mickey”, ”Mouse”) -> ”M.M.”. 
             * Print your own initials by using this method.*/
            Initials("Jatta", "Jokinen");
            Console.WriteLine();

            /*30b.A method has an integer array as a parameter.
             * The method does not return anything, but it changes the values of the array so that any number is multiplied by 2.*/
            int[] tau = { 1, 2, 3, 4, 5 };
            Kerto(tau);
            Console.WriteLine();
            /*30c.A method has an integer array as a parameter.The method returns a new integer array, where the items are multiplied by 2.*/
            int[] tau2 = { 2, 4, 6, 8, 10 };
            Kerto2(tau2);
        }

        private static Array Kerto2(int[] tau2)
        {
            int koko = tau2.Length;
            int[] uusi = new int[koko];
            for (int i = 0; i < koko; i++)
            {
                uusi[i] = tau2[i] * 2;
            }
            return uusi;
        }

        private static void Kerto(int[] tau)
        {
            for (int i = 0; i < tau.Length; i++)
            {
                Console.Write(tau[i] * 2 + " ");
            }
            Console.WriteLine();
        }

        private static string Combine(int n1, int n2)
        {
            string n = n1.ToString()+n2.ToString();
            Console.WriteLine(n);
            return n;
        }

        private static string Initials(string v1, string v2)
        {
            Console.Write(v1[0]+"."+v2[0]+".");
            string init = v1[0]+"." + v2[0]+".";
            return init;

        }

        private static string Combine(string s1, string s2)
        {
            Console.WriteLine("\"{0}{1}\"", s1, s2);
            string m = s1 + s2;
            return m;
            
        }
    }
}
