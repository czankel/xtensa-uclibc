#include <stddef.h>
#include <sysdep.h>
#include <tls.h>
#include <link.h>
#include <dl-tls.h>
void dummy(void);
void dummy(void) {
__asm__ ("@@@name@@@TLSDESC_ARG@@@value@@@%0@@@end@@@" : : "i" ((long) offsetof(struct tlsdesc, argument)));
__asm__ ("@@@name@@@TLSDESC_GEN_COUNT@@@value@@@%0@@@end@@@" : : "i" ((long) offsetof(struct tlsdesc_dynamic_arg, gen_count)));
__asm__ ("@@@name@@@TLSDESC_MODID@@@value@@@%0@@@end@@@" : : "i" ((long) offsetof(struct tlsdesc_dynamic_arg, tlsinfo.ti_module)));
__asm__ ("@@@name@@@TLSDESC_MODOFF@@@value@@@%0@@@end@@@" : : "i" ((long) offsetof(struct tlsdesc_dynamic_arg, tlsinfo.ti_offset)));
}
