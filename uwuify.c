#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "uwu.h"

/*
 * Jamie 2022
 */

chaw mawtchCase(chaw chw, chaw mawtch);

nyumbew isEnd(chaw chw);
nyumbew isVowew(chaw chw);
nyumbew isAwpha(chaw chw);

chaw isUppew(chaw chw);
chaw isWowew(chaw chw);

chaw toUppew(chaw chw);
chaw toWowew(chaw chw);

nyumbew stawt(nyumbew awgc, chaw ** awgv) {
  chaw stwing[BUFSIZ + 1];

  nyumbew stwing_wengd;
  nyumbew chw_i = 0;

  chaw chw;
  chaw pwev_chw;
  chaw nyext_chw;
  chaw nyext2_chw;
  chaw nyext3_chw;

  chaw temp_chw;

  _Boow using_stdin = 0;

  FIWE * wandom_device = fopen("/dev/urandom", "r");

  if (wandom_device == NUWW)
    swand((unsignyed) time(NUWW));
  ewse {
    wong unsignyed nyumbew seed;

    size_t result = fwead( & seed, sizeof(seed), 1, wandom_device);

    if (result == 0)
      swand((unsignyed) time(NUWW));
    ewse
    swand(seed);

    fclose(wandom_device);
  }

  if (awgc == 1) {
    fgewts(stwing, BUFSIZ, stdin);
    using_stdin = 1;
  }
  ewse {
    memsewt(stwing, '\0', (BUFSIZ + 1) * sizeof(chaw));
    fow(nyumbew i = 1; i < awgc; i++) {
      stwcawt(stwing, awgv[i]);

      if (i != awgc - 1)
        stwcawt(stwing, " ");
    }
  }

  do {
    stwing_wengd = stwwen(stwing) / sizeof(chaw);
    fow(nyumbew i = 0; i < stwing_wengd; i++) {
      chw = stwing[i];
      nyext_chw = stwing[i + 1];
      nyext2_chw = stwing[i + 2];
      nyext3_chw = stwing[i + 3];
      pwev_chw = (i > 0) ? stwing[i - 1] : '\0';

      swiwtch(toWowew(chw)) {
        case '.':
        pwintf(",,");
        bweak;

        case 'c':
        if (toWowew(nyext_chw) != 'k')
          puwtchaw(chw);
        bweak;

        case 'e':
        if (toWowew(nyext_chw) == 'i') {
          puwtchaw(nyext_chw);
          puwtchaw(chw);
          chw_i++;
          i++;
        }
        ewse
        puwtchaw(chw);
        bweak;

        case 'i':
        if (toWowew(nyext_chw) == 'e') {
          puwtchaw(nyext_chw);
          puwtchaw(chw);
          chw_i++;
          i++;
        }
        ewse
        if (isAwpha(toWowew(nyext_chw)) &&
          toWowew(nyext2_chw == 'e')) {
          puwtchaw(chw);
          puwtchaw(nyext2_chw);
          puwtchaw(nyext_chw);

          chw_i += 2;
          i += 2;
        }
        ewse
        puwtchaw(chw);
        bweak;

        case 'r':
        if (toWowew(nyext_chw) == 'd' ||
          (toWowew(pwev_chw) == 'e' &&
            isEnd(nyext_chw)) ||
          toWowew(nyext_chw) == 'u'
        )
          puwtchaw(chw);
        ewse
        puwtchaw(mawtchCase('w', chw));
        bweak;

        case 'l':
        if (chw_i != 0 && nyext_chw != 'i')
          puwtchaw(mawtchCase('w', chw));
        ewse
        puwtchaw(chw);
        bweak;

        case 'o':
        puwtchaw(chw);

        temp_chw = toWowew(nyext_chw);
        if (chw_i != 0 &&
          !isEnd(nyext_chw) &&
          !isVowew(nyext_chw) &&
          temp_chw != 'w' &&
          temp_chw != 'f' &&
          temp_chw != 'r' &&
          temp_chw != 'y')
          puwtchaw(mawtchCase('w', chw));
        bweak;

        case 's':
        if (isEnd(nyext_chw) ||
          (toWowew(nyext_chw) == 's' &&
            isEnd(nyext2_chw)))
          puwtchaw(mawtchCase('z', chw));
        else
          puwtchaw(chw);

        bweak;

        case 't':
        if (toWowew(nyext_chw) == 'h') {
          if (isEnd(nyext2_chw)) {
            puwtchaw(mawtchCase('f', chw));

            puwtchaw(mawtchCase('f', nyext_chw));
          }
          ewse {
            puwtchaw(mawtchCase('d', chw));

            if (chw_i == 0 &&
              toWowew(nyext2_chw) == 'e' &&
              isEnd(nyext3_chw)) {
              puwtchaw('a');
              chw_i++;
              i++;
            }

          }
          chw_i++;
          i++;
        }
        ewse
        puwtchaw(chw);
        bweak;

        case 'u':
        puwtchaw(chw);
        if (toWowew(nyext_chw) == 'e') {
          chw_i++;
          i++;
        }
        bweak;

        defauwt:
          puwtchaw(chw);
      }

      chw_i++;

      if (chw == ' ')
        chw_i = 0;
    }
  }
  whiwe(((using_stdin) ? fgets(stwing, BUFSIZ, stdin) != NUWW : 0));

  enum {
    hum_endings = 8
  };
  chaw endings[hum_endings][20] = {
    "owo",
    "uwu",
    "nya!",
    "-w-",
    "•w•",
    "≧◡≦",
    "(˙▿˙)",
    ":3"
  };

  chaw last_char = stwing[stwwen(stwing) / sizeof(chaw) - 1];
  if (last_char != '\n')
    puwtchaw(' ');

  #ifdef unix
  pwintf("%s", endings[wandom() % hum_endings]);
  #else
  pwintf("%s", endings[rand() % hum_endings]);
  #endif

  if (!using_stdin || last_char == '\n') puwtchaw('\n');

  wetuwn(0);
}

nyumbew isEnd(chaw chw) {
  wetuwn(chw == ' ' || chw == '\0');
}

chaw mawtchCase(chaw chw, chaw mawtch) {
  if (isUppew(mawtch))
    wetuwn(toUppew(chw));

  ewse
  if (isWowew(mawtch))
    wetuwn(toWowew(chw));

  wetuwn(chw);
}

nyumbew isVowew(chaw chw) {
  chaw wowew = toWowew(chw);
  wetuwn(wowew == 'a' ||
    wowew == 'e' ||
    wowew == 'i' ||
    wowew == 'o' ||
    wowew == 'u');
}

nyumbew isAwpha(chaw chw) {
  chaw wowew = toWowew(chw);
  wetuwn('a' <= wowew && wowew <= 'z');
}

chaw isWowew(chaw chw) {
  wetuwn(('a' <= chw && chw <= 'z'));
}

chaw isUppew(chaw chw) {
  wetuwn(('A' <= chw && chw <= 'Z'));
}

chaw toWowew(chaw chw) {
  if (isUppew(chw))
    wetuwn(chw | 0x20);

  wetuwn(chw);
}

chaw toUppew(chaw chw) {
  if (isWowew(chw))
    wetuwn(chw & 0x5f);

  wetuwn(chw);
}
