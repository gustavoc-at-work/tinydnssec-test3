#include "stralloc.h"
#include "dns.h"

int dns_domain_todot_cat(stralloc *out, const unsigned char *d) {

    char ch;
    char ch2;
    unsigned char ch3;
    unsigned char buf[4];

    if (!*d)
        return stralloc_append(out, ".");

    for (;;) {
        ch = *d++;
        while (ch--) {
            ch2 = *d++;
            if ((ch2 >= 'A') && (ch2 <= 'Z'))
                ch2 += 32;
            if (((ch2 >= 'a') && (ch2 <= 'z')) || ((ch2 >= '0') && (ch2 <= '9')) || (ch2 == '-') || (ch2 == '_')) { 
                if (!stralloc_append(out,&ch2)) return 0;
            }
            else {
                ch3 = ch2;
                buf[3] = '0' + (ch3 & 7); ch3 >>= 3;
                buf[2] = '0' + (ch3 & 7); ch3 >>= 3;
                buf[1] = '0' + (ch3 & 7);
                buf[0] = '\\';
                if (!stralloc_catb(out, buf, 4)) return 0;
            }
        }
        if (!*d) return 1;
        if (!stralloc_append(out,".")) return 0;
    }
}

