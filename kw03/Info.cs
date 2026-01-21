using FuhrparkNP;
namespace Infospace{
public class Info
{
    public Info(Fuhrpark fuhrpark)
        {
            fuhrpark.autoHinzufuegenEvent += Ausgabe;
        }
    public void Ausgabe(object sender, NewAutoAddedArgs args)
    {
        Console.Write("Info: ");
        args.Auto.druckeDaten();
    }
}}