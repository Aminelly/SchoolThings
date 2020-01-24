using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Kotitehtävät_31a_32
{
    class Program
    {
        static void Main(string[] args)
        {
            /*31a. Write class Student that has three properties. One property is a distance, which a student has walked during one day.*/

            /*31.b Create two Student objects in Main method and give values to the properties. Print some values of each student.*/
            Student opiskelija1 = new Student()
            {Nimi = "Jarkko",
             Matka = 5
            };
            opiskelija1.KukaOn();
            opiskelija1.Matkanpituus();
            Console.WriteLine();
            Student opiskelija2 = new Student();
            opiskelija2.Nimi = "Jaana";
            opiskelija2.Luokka = "PTIVIS19A";
            opiskelija2.Matka = 7;
            opiskelija2.MilläLuokalla();
            Console.WriteLine(opiskelija2.Nimi+": \"Koulumatkani pituus on "+opiskelija2.Matka+" km.\"");
            Console.WriteLine();
            Console.WriteLine();
            /*31c. For Student class write a method, which prints the properties of a student.*/
            opiskelija1.Ominaisuudet();
            Console.WriteLine();
            /*31d. Write also the named method Walk() which prints, which student is walking and how much.*/
            opiskelija2.Walk();
            Console.WriteLine();
            /*31e. Add a constructor to the class Student. The constructor has 3 parameters according to the properties.*/
            Student opiskelija3 = new Student("Kalevi", "PTIVIS19C", 15);
            opiskelija3.GetData();
            Console.WriteLine();
            Console.WriteLine();
            /*32. Write a class MyIntArray, which has one property Array. This property contains integer array. 
            * Do the method Write(separator) that writes the elements of the array to the Console separated with a parameter separator.(2p)*/
            MyIntArray MyArray = new MyIntArray(3);
            MyArray.Write(" < ");
        }
    }
}
