namespace Fh.Pk2.Commands
{
        using Fh.Pk2.Devices;
    class CdStop : Command
    {
        public CdStop(CdPlayer cd)
        {
            this.cdPlayer = cd;
        }
        private CdPlayer cdPlayer;

        override public void execute()
        {
            cdPlayer.Stop();
        }
    }
}