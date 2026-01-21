using FuhrparkNP;
using Autos;
using System;
using Infospace;
class Program
{
    private static Fuhrpark fp = new Fuhrpark();
    public static void Main()
    {
        Auto a = new Auto(1990);
        Auto b = new Auto(2000, "Mercedes");
        Auto c = new Auto(2001, "BMW");
        Info info = new Info(fp);

        fp.Aufnehmen(a);
        fp.Aufnehmen(b);
        fp.Aufnehmen(c);

        fp.Inventur();
        Console.WriteLine("Durchschnittsalter: {0}", fp.BerechneFlottenAlter());

    }
}
