#include <stdio.h>

/* print Fahrenheit-Celsios table
   for fahr = 0,20, ..., 300 */

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = -300;      /* lower limit of the temperature table */
  upper = 300;    /* upper limit || */
  step = 20;      /* step size */

  fahr = lower;
  while (fahr <= upper) {
      celsius = 5 * (fahr-32) / 9;
      printf("%d\t%d\n", fahr, celsius);
      fahr = fahr + step;
    }
}
