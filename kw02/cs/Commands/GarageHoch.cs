namespace Fh.Pk2.Commands
{
        using Fh.Pk2.Devices;
    class GarageHoch : Command
    {
        public GarageHoch(Garagentor g)
        {
            this.garage = g;
        }
        private Garagentor garage;

        override public void execute()
        {
            garage.hoch();
        }
    }
}