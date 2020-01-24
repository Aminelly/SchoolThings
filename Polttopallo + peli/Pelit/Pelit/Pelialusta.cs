using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Pelit
{
    internal class Pelialusta
    {
        private bool[] ruudut = new bool[9];

        public bool OnkoOsuma(int ruutu)
        {
            bool arvo = ruudut[ruutu-1];
            return arvo;
        }

        public void Siirto(int ruutu)
        {
            for (int i = 0; i < 9; i++)
            {
                ruudut[i] = false;
            }
            ruudut[ruutu] = true;
        }

        public void Init()
        {
            ruudut = new bool[9];
        }
    }
}
