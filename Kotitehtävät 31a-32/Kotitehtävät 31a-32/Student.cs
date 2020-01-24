using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Kotitehtävät_31a_32
{
    class Student
    {
        // Properties
        public int Matka { get; set; }
        public string Luokka { get; set; }
        public string Nimi { get; set; }

        public void KukaOn()
        {
            Console.WriteLine("Opiskelijan nimi on {0}.", Nimi);
        }
        public void Matkanpituus()
        {
            Console.WriteLine("{0}: \"Olen kävellyt tänään {1} km.\"", Nimi, Matka );
        }

        public void MilläLuokalla()
        {
            Console.WriteLine("{0}: \"Olen luokalla {1}.\"", Nimi, Luokka);
        }

        public void Ominaisuudet()
        {
            Console.WriteLine("Opiskelijan nimi: {0}. Hän on luokalla {1} ja hän on kävellyt tänään {2} km.", Nimi, Luokka, Matka);
        }

        public void Walk()
        {
            Console.WriteLine("{0} on kävellyt tänään jo {1} km.", Nimi, Matka);
        }
        public Student()
        {

        }
        public Student(string nimi, string luokka, int matka)
        {
            Nimi = nimi;
            Luokka = luokka;
            Matka = matka;
        }
        public void GetData()
        {
            Console.WriteLine("Opiskelijan nimi on {0}. Hän on luokalla {1}. Hänen koulumatkansa on {2} km.", Nimi, Luokka, Matka);
        }
    }
}
