#include <time.h>
#include <stdio.h>
#include <windows.h>

int main()
{
  time_t t;
  struct tm *tm;
  char fechayhora[100];

  t=time(NULL);
  tm=localtime(&t);
  strftime(fechayhora, 100, "%H:%M:%S", tm);
	Sleep(1000);
  printf ("Hoy es: %s\n", fechayhora);
}
