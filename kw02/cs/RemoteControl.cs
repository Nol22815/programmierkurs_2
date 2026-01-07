namespace Fh.Pk2.Rc
{
    using Fh.Pk2.Commands;
    class RemoteControl
    {
        Command[,] commands = new Command[4, 2];
        public void setCommand(int i, Command on, Command off)
        {
            commands[i, 0] = on;
            commands[i, 1] = off;
        }

        public void pressOn(int i)
        {
            commands[i, 0].execute();
        }

        public void pressOff(int i)
        {
            commands[i, 1].execute();
        }
    }
}