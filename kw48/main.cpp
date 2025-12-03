#include "akzeptables_risiko.h"
#include "inakzeptables_risiko.h"
#include "extremes_risiko.h"

int main(){
  Risiko* risiko[3];
  risiko[0] = new Akzeptables_Risiko();
  risiko[1] = new Extremes_Risiko();
  risiko[2] = new Inakzeptables_Risiko();
}
