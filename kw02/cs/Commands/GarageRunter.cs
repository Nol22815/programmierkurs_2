namespace Fh.Pk2.Commands
{
        using Fh.Pk2.Devices;
    class GarageRunter : Command
    {
        public GarageRunter(Garagentor g)
        {
            this.garage = g;
        }
        private Garagentor garage;

        override public void execute()
        {
            garage.runter();
        }
    }
}