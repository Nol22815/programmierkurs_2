namespace Fh.Pk2.Commands
{
    using Fh.Pk2.Devices;
    class CdStart : Command
    {
        public CdStart(CdPlayer cd)
        {
            this.cdPlayer = cd;
        }
        private CdPlayer cdPlayer;

        override public void execute()
        {
            cdPlayer.Start();
        }
    }
}