#include "types.h"
#include "user.h"
#include "date.h"

int stdout = 1;
int stderr = 2;

int
main(int argc, char *argv[])
{
  struct rtcdate r;

  if (date(&r)) {
    printf(stderr, "Erro na chamada de sistema\n");
    exit();
  }

  printf(stdout, "Date and Time:\n");
  printf(stdout, "  Year:   %d\n", (int) r.year);
  printf(stdout, "  Month:  %d\n", (int) r.month);
  printf(stdout, "  Day:    %d\n", (int) r.day);
  printf(stdout, "  Hour:   %d\n", (int) r.hour);
  printf(stdout, "  Minute: %d\n", (int) r.minute);
  printf(stdout, "  Second: %d\n", (int) r.second);

  exit();
}