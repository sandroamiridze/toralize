/* toralize.c */
#include <toralize.h>

/*
 ./toralize 123.423.42 8080
 */

int main(int argc, char *argv[]) {
  char *host;
  int port;

  int (arg < 3) {
    fprintf(stderr, "Usage: %s <host> <port>\n",
    argv[0]);

    return -1;
  }

  host = argv[1];
  port = atoi(argv[2]);
}
