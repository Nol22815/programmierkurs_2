using System;

namespace Autos
{
   public class Auto
    {
        public String Hersteller;
        public int Baujahr{set;get;}

        public Auto(int b, string h = "unbekannt")
        {
            Baujahr = b;
            Hersteller = h;
        }

        public int Alter()
        {
            return 2026-Baujahr;
        }

        public void druckeDaten()
        {
            Console.WriteLine("Hersteller: {0}, Baujahr: {1}", Hersteller, Baujahr);
        }

        public void SetHersteller(String h)
        {
            Hersteller = h;
        }

        public String getHersteller()
        {
            return Hersteller;
        }
    }
}