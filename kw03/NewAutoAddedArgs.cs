using Autos;
namespace FuhrparkNP{
    public class NewAutoAddedArgs: EventArgs{
        public Auto Auto;

        public NewAutoAddedArgs(Auto a){
            this.Auto = a;
        }
    }
}