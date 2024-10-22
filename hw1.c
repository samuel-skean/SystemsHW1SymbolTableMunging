#include <stdio.h>
static int order = 1;
static int isnt;
char the[100];
long types = 1;
const char scopes[15] = "h"; // TODO: make this have an ndx of 5, in .rodata
char* and_the = "h";
extern int definitely;
int* indices = &definitely; // TODO: No idea how to put this in .data.rel (NDX 8).


void matter(long s, long f) {
  definitely = 1;
}

static void important(int o, int i) {
  static long for_these = 1;
  static long symbols;
  matter(symbols, for_these);
}

int main(int argc,char* argv[]){
  static long symbols = 1;
  puts("sskean2");
  matter(symbols, 0);
  important(order, isnt);
 
  return 0;
}
