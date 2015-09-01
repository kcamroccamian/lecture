#include <stdio.h>
#include <omp.h>
#include <time.h>

double fRand(double fMin, double fMax)
{
  double f = (double)rand() / RAND_MAX;
  return fMin + f * (fMax - fMin);
}

double * method1(){
  static double pts[2000000];
  for (int i=0;i<2000000;i++){
    

}

int main(int argc, char** argv)
{






}
