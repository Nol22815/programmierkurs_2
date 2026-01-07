namespace Praktikum12
{
    using Fh.Pk2.Devices;
    using Fh.Pk2.Rc;
    using Fh.Pk2.Commands;

    class Program
    {
        
        static void Main()
        {

             CdPlayer cdPlayer = new CdPlayer();
         Garagentor garage = new Garagentor();
        CdStart cdStart = new CdStart(cdPlayer);
        CdStop cdStop = new CdStop(cdPlayer);
        GarageHoch gHoch = new GarageHoch(garage);
        GarageRunter gRunter = new GarageRunter(garage);
         RemoteControl rc = new RemoteControl();

            rc.setCommand(0, cdStart, cdStop);
            rc.setCommand(1, gHoch, gRunter);

            rc.pressOn(0);
            rc.pressOn(1);
            rc.pressOff(1);
            rc.pressOff(0);
        }
    }
}