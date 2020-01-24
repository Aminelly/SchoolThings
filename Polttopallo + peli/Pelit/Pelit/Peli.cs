using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Pelit
{
    public class Peli
    {
        private Pelialusta alusta = new Pelialusta();
        private uint pisteet;
        private ushort hutit = 0; // Peliloppuu, kun kolme hutia
        private Random random = new Random(); // Dinon sijainti ruudukossa

        public uint Pisteet { get => pisteet; private set => pisteet = value; }
        public ushort Hutit { get => hutit; private set => hutit = value; }

        public bool OnkoOsuma(int ruutu)
        {
            bool arvo;
            if (alusta.OnkoOsuma(ruutu)==false)
            {
                Hutit++;
                arvo = false;
            }
            else
            {
                Pisteet++;
                arvo = true;
            }
            return arvo;
        }
        public bool OnkoValmis()
        {
            bool arvo = false;
            if (Hutit >= 3)
            {
                arvo = true;
            }
            return arvo;
        }
        public void Init()
        {
            Pisteet = 0;
            Hutit = 0;
            alusta.Init();
            alusta.Siirto(random.Next(9));

        }
        public int Siirto()
        {
            int x = random.Next(9);
            alusta.Siirto(x);
            return x;
        }

        


    }
}