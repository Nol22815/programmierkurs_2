using CustomLinkedList;
using Autos;
namespace FuhrparkNP
{
    class Fuhrpark
    {
        public CustomLinkedList.LinkedList<Auto> Autos = new ();

        public void Aufnehmen(Auto a)
        {
            Autos.AddFirst(a);
        }

        public void Inventur()
        {
            CustomLinkedList.LinkedList<Auto>.ListIterator li = Autos.GetIterator();
            while (li.hasNext())
            {
                li.Next().druckeDaten();
            }
        }

        public double BerechneFlottenAlter()
        {
            double Alter = 0;
            int count = 0;
            CustomLinkedList.LinkedList<Auto>.ListIterator li = Autos.GetIterator();
            while (li.hasNext())
            {
                Alter += li.Next().Alter();
                count++;
            }
            return Alter / count;
        }
    }
}