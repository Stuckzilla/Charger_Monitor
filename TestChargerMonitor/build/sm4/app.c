#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 149 "/usr/lib/gcc/avr/4.5.3/include/stddef.h" 3
typedef int ptrdiff_t;
#line 211
typedef unsigned int size_t;
#line 323
typedef int wchar_t;
# 8 "/usr/local/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 347
static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 121 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/string.h" 3
extern void *memset(void *arg_0x2b8fd3982020, int arg_0x2b8fd3982288, size_t arg_0x2b8fd3982530);
# 71 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2b8fd39a1788, const void *arg_0x2b8fd39a1a60);
# 25 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 416 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/iom128rfa1.h" 3
struct __reg_TIFR0 {
  unsigned int tov0 : 1;
  unsigned int ocf0a : 1;
  unsigned int ocf0b : 1;
  unsigned int  : 5;
};
#line 438
struct __reg_TIFR1 {
  unsigned int tov1 : 1;
  unsigned int ocf1a : 1;
  unsigned int ocf1b : 1;
  unsigned int ocf1c : 1;
  unsigned int  : 1;
  unsigned int icf1 : 1;
  unsigned int  : 2;
};
#line 465
struct __reg_TIFR2 {
  unsigned int tov2 : 1;
  unsigned int ocf2a : 1;
  unsigned int ocf2b : 1;
  unsigned int  : 5;
};
#line 487
struct __reg_TIFR3 {
  unsigned int tov3 : 1;
  unsigned int ocf3a : 1;
  unsigned int ocf3b : 1;
  unsigned int ocf3c : 1;
  unsigned int  : 1;
  unsigned int icf3 : 1;
  unsigned int  : 2;
};
#line 514
struct __reg_TIFR4 {
  unsigned int tov4 : 1;
  unsigned int ocf4a : 1;
  unsigned int ocf4b : 1;
  unsigned int ocf4c : 1;
  unsigned int  : 1;
  unsigned int icf4 : 1;
  unsigned int  : 2;
};
#line 541
struct __reg_TIFR5 {
  unsigned int tov5 : 1;
  unsigned int ocf5a : 1;
  unsigned int ocf5b : 1;
  unsigned int ocf5c : 1;
  unsigned int  : 1;
  unsigned int icf5 : 1;
  unsigned int  : 2;
};
#line 568
struct __reg_PCIFR {
  unsigned int pcif : 3;
  unsigned int  : 5;
};
#line 588
struct __reg_EIFR {
  unsigned int intf : 8;
};
#line 612
struct __reg_EIMSK {
  unsigned int intm : 8;
};
#line 636
struct __reg_GPIOR0 {
  unsigned int gpior0 : 8;
};
#line 669
struct __reg_EECR {
  unsigned int eere : 1;
  unsigned int eepe : 1;
  unsigned int eempe : 1;
  unsigned int eerie : 1;
  unsigned int eepm : 2;
  unsigned int  : 2;
};
#line 715
struct __reg_GTCCR {
  unsigned int psrsync : 1;
  unsigned int psrasy : 1;
  unsigned int  : 5;
  unsigned int tsm : 1;
};
#line 739
struct __reg_TCCR0A {
  unsigned int wgm0 : 2;
  unsigned int  : 2;
  unsigned int com0b : 2;
  unsigned int com0a : 2;
};
#line 764
struct __reg_TCCR0B {
  unsigned int cs0 : 3;
  unsigned int wgm02 : 1;
  unsigned int  : 2;
  unsigned int foc0b : 1;
  unsigned int foc0a : 1;
};
#line 832
struct __reg_GPIOR1 {
  unsigned int gpior1 : 8;
};
#line 856
struct __reg_GPIOR2 {
  unsigned int gpior2 : 8;
};
#line 880
struct __reg_SPCR {
  unsigned int spr : 2;
  unsigned int cpha : 1;
  unsigned int cpol : 1;
  unsigned int mstr : 1;
  unsigned int dord : 1;
  unsigned int spe : 1;
  unsigned int spie : 1;
};
#line 910
struct __reg_SPSR {
  unsigned int spi2x : 1;
  unsigned int  : 5;
  unsigned int wcol : 1;
  unsigned int spif : 1;
};
#line 946
struct __reg_ACSR {
  unsigned int acis : 2;
  unsigned int acic : 1;
  unsigned int acie : 1;
  unsigned int aci : 1;
  unsigned int aco : 1;
  unsigned int acbg : 1;
  unsigned int acd : 1;
};
#line 976
struct __reg_OCDR {
  unsigned int ocdr : 8;
};
#line 1001
struct __reg_SMCR {
  unsigned int se : 1;
  unsigned int sm : 3;
  unsigned int  : 4;
};
#line 1023
struct __reg_MCUSR {
  unsigned int porf : 1;
  unsigned int extrf : 1;
  unsigned int borf : 1;
  unsigned int wdrf : 1;
  unsigned int jtrf : 1;
  unsigned int  : 3;
};
#line 1049
struct __reg_MCUCR {
  unsigned int ivce : 1;
  unsigned int ivsel : 1;
  unsigned int  : 2;
  unsigned int pud : 1;
  unsigned int  : 2;
  unsigned int jtd : 1;
};
#line 1074
struct __reg_SPMCSR {
  unsigned int spmen : 1;
  unsigned int pgers : 1;
  unsigned int pgwrt : 1;
  unsigned int blbset : 1;
  unsigned int rwwsre : 1;
  unsigned int sigrd : 1;
  unsigned int rwwsb : 1;
  unsigned int spmie : 1;
};
#line 1105
struct __reg_RAMPZ {
  unsigned int rampz : 2;
  unsigned int  : 6;
};
#line 1129
struct __reg_SREG {
  unsigned int c : 1;
  unsigned int z : 1;
  unsigned int n : 1;
  unsigned int v : 1;
  unsigned int s : 1;
  unsigned int h : 1;
  unsigned int t : 1;
  unsigned int i : 1;
};
#line 1160
struct __reg_WDTCSR {
  unsigned int wdp : 3;
  unsigned int wde : 1;
  unsigned int wdce : 1;
  unsigned int  : 1;
  unsigned int wdie : 1;
  unsigned int wdif : 1;
};
#line 1189
struct __reg_CLKPR {
  unsigned int clkps : 4;
  unsigned int  : 3;
  unsigned int clkpce : 1;
};
#line 1212
struct __reg_PRR2 {
  unsigned int prram : 4;
  unsigned int  : 4;
};
#line 1233
struct __reg_PRR0 {
  unsigned int pradc : 1;
  unsigned int prusart0 : 1;
  unsigned int prspi : 1;
  unsigned int prtim1 : 1;
  unsigned int prpga : 1;
  unsigned int prtim0 : 1;
  unsigned int prtim2 : 1;
  unsigned int prtwi : 1;
};
#line 1264
struct __reg_PRR1 {
  unsigned int prusart : 3;
  unsigned int prtim3 : 1;
  unsigned int prtim4 : 1;
  unsigned int prtim5 : 1;
  unsigned int prtrx24 : 1;
  unsigned int  : 1;
};
#line 1292
struct __reg_OSCCAL {
  unsigned int cal : 8;
};
#line 1316
struct __reg_BGCR {
  unsigned int bgcal : 3;
  unsigned int bgcal_fine : 4;
  unsigned int  : 1;
};
#line 1341
struct __reg_PCICR {
  unsigned int pcie : 3;
  unsigned int  : 5;
};
#line 1361
struct __reg_EICRA {
  unsigned int isc0 : 2;
  unsigned int isc1 : 2;
  unsigned int isc2 : 2;
  unsigned int isc3 : 2;
};
#line 1388
struct __reg_EICRB {
  unsigned int isc4 : 2;
  unsigned int isc5 : 2;
  unsigned int isc6 : 2;
  unsigned int isc7 : 2;
};
#line 1429
struct __reg_PCMSK1 {
  unsigned int pcint : 2;
  unsigned int pcint1 : 6;
};
#line 1454
struct __reg_PCMSK2 {
  unsigned int pcint1 : 4;
  unsigned int pcint2 : 4;
};
#line 1479
struct __reg_TIMSK0 {
  unsigned int toie0 : 1;
  unsigned int ocie0a : 1;
  unsigned int ocie0b : 1;
  unsigned int  : 5;
};
#line 1501
struct __reg_TIMSK1 {
  unsigned int toie1 : 1;
  unsigned int ocie1a : 1;
  unsigned int ocie1b : 1;
  unsigned int ocie1c : 1;
  unsigned int  : 1;
  unsigned int icie1 : 1;
  unsigned int  : 2;
};
#line 1528
struct __reg_TIMSK2 {
  unsigned int toie2 : 1;
  unsigned int ocie2a : 1;
  unsigned int ocie2b : 1;
  unsigned int  : 5;
};
#line 1551
struct __reg_TIMSK3 {
  unsigned int toie3 : 1;
  unsigned int ocie3a : 1;
  unsigned int ocie3b : 1;
  unsigned int ocie3c : 1;
  unsigned int  : 1;
  unsigned int icie3 : 1;
  unsigned int  : 2;
};
#line 1578
struct __reg_TIMSK4 {
  unsigned int toie4 : 1;
  unsigned int ocie4a : 1;
  unsigned int ocie4b : 1;
  unsigned int ocie4c : 1;
  unsigned int  : 1;
  unsigned int icie4 : 1;
  unsigned int  : 2;
};
#line 1605
struct __reg_TIMSK5 {
  unsigned int toie5 : 1;
  unsigned int ocie5a : 1;
  unsigned int ocie5b : 1;
  unsigned int ocie5c : 1;
  unsigned int  : 1;
  unsigned int icie5 : 1;
  unsigned int  : 2;
};
#line 1632
struct __reg_NEMCR {
  unsigned int  : 4;
  unsigned int aeam : 2;
  unsigned int eneam : 1;
  unsigned int  : 1;
};
#line 1654
struct __reg_ADCSRC {
  unsigned int adsut : 5;
  unsigned int res0 : 1;
  unsigned int adtht : 2;
};
#line 1689
struct __reg_ADCSRA {
  unsigned int adps : 3;
  unsigned int adie : 1;
  unsigned int adif : 1;
  unsigned int adate : 1;
  unsigned int adsc : 1;
  unsigned int aden : 1;
};
#line 1718
struct __reg_ADCSRB {
  unsigned int adts : 3;
  unsigned int mux5 : 1;
  unsigned int acch : 1;
  unsigned int refok : 1;
  unsigned int acme : 1;
  unsigned int avddok : 1;
};
#line 1747
struct __reg_ADMUX {
  unsigned int mux : 5;
  unsigned int adlar : 1;
  unsigned int refs : 2;
};
#line 1773
struct __reg_DIDR2 {
  unsigned int adc8d : 1;
  unsigned int adc9d : 1;
  unsigned int adc10d : 1;
  unsigned int adc11d : 1;
  unsigned int adc12d : 1;
  unsigned int adc13d : 1;
  unsigned int adc14d : 1;
  unsigned int adc15d : 1;
};
#line 1804
struct __reg_DIDR0 {
  unsigned int adc0d : 1;
  unsigned int adc1d : 1;
  unsigned int adc2d : 1;
  unsigned int adc3d : 1;
  unsigned int adc4d : 1;
  unsigned int adc5d : 1;
  unsigned int adc6d : 1;
  unsigned int adc7d : 1;
};
#line 1835
struct __reg_DIDR1 {
  unsigned int ain0d : 1;
  unsigned int ain1d : 1;
  unsigned int  : 6;
};
#line 1855
struct __reg_TCCR1A {
  unsigned int wgm1 : 2;
  unsigned int com1c : 2;
  unsigned int com1b : 2;
  unsigned int com1a : 2;
};
#line 1882
struct __reg_TCCR1B {
  unsigned int cs1 : 3;
  unsigned int wgm1 : 2;
  unsigned int  : 1;
  unsigned int ices1 : 1;
  unsigned int icnc1 : 1;
};
#line 1909
struct __reg_TCCR1C {
  unsigned int  : 5;
  unsigned int foc1c : 1;
  unsigned int foc1b : 1;
  unsigned int foc1a : 1;
};
#line 1956
struct __reg_TCCR3A {
  unsigned int wgm3 : 2;
  unsigned int com3c : 2;
  unsigned int com3b : 2;
  unsigned int com3a : 2;
};
#line 1983
struct __reg_TCCR3B {
  unsigned int cs3 : 3;
  unsigned int wgm3 : 2;
  unsigned int  : 1;
  unsigned int ices3 : 1;
  unsigned int icnc3 : 1;
};
#line 2010
struct __reg_TCCR3C {
  unsigned int  : 5;
  unsigned int foc3c : 1;
  unsigned int foc3b : 1;
  unsigned int foc3a : 1;
};
#line 2057
struct __reg_TCCR4A {
  unsigned int wgm4 : 2;
  unsigned int com4c : 2;
  unsigned int com4b : 2;
  unsigned int com4a : 2;
};
#line 2084
struct __reg_TCCR4B {
  unsigned int cs4 : 3;
  unsigned int wgm4 : 2;
  unsigned int  : 1;
  unsigned int ices4 : 1;
  unsigned int icnc4 : 1;
};
#line 2111
struct __reg_TCCR4C {
  unsigned int  : 5;
  unsigned int foc4c : 1;
  unsigned int foc4b : 1;
  unsigned int foc4a : 1;
};
#line 2158
struct __reg_TCCR2A {
  unsigned int wgm2 : 2;
  unsigned int  : 2;
  unsigned int com2b : 2;
  unsigned int com2a : 2;
};
#line 2183
struct __reg_TCCR2B {
  unsigned int cs2 : 3;
  unsigned int wgm22 : 1;
  unsigned int  : 2;
  unsigned int foc2b : 1;
  unsigned int foc2a : 1;
};
#line 2251
struct __reg_ASSR {
  unsigned int tcr2bub : 1;
  unsigned int tcr2aub : 1;
  unsigned int ocr2bub : 1;
  unsigned int ocr2aub : 1;
  unsigned int tcn2ub : 1;
  unsigned int as2 : 1;
  unsigned int exclk : 1;
  unsigned int exclkamr : 1;
};
#line 2296
struct __reg_TWSR {
  unsigned int twps : 2;
  unsigned int  : 1;
  unsigned int tws : 5;
};
#line 2321
struct __reg_TWAR {
  unsigned int twgce : 1;
  unsigned int twa : 7;
};
#line 2360
struct __reg_TWCR {
  unsigned int twie : 1;
  unsigned int  : 1;
  unsigned int twen : 1;
  unsigned int twwc : 1;
  unsigned int twsto : 1;
  unsigned int twsta : 1;
  unsigned int twea : 1;
  unsigned int twint : 1;
};
#line 2390
struct __reg_TWAMR {
  unsigned int  : 1;
  unsigned int twam : 7;
};
#line 2421
struct __reg_UCSR0A {
  unsigned int mpcm0 : 1;
  unsigned int u2x0 : 1;
  unsigned int upe0 : 1;
  unsigned int dor0 : 1;
  unsigned int fe0 : 1;
  unsigned int udre0 : 1;
  unsigned int txc0 : 1;
  unsigned int rxc0 : 1;
};
#line 2452
struct __reg_UCSR0B {
  unsigned int txb80 : 1;
  unsigned int rxb80 : 1;
  unsigned int ucsz02 : 1;
  unsigned int txen0 : 1;
  unsigned int rxen0 : 1;
  unsigned int udrie0 : 1;
  unsigned int txcie0 : 1;
  unsigned int rxcie0 : 1;
};
#line 2483
struct __reg_UCSR0C {
  unsigned int ucpol0 : 1;
  unsigned int ucsz0 : 2;
  unsigned int ucpha0 : 1;
  unsigned int udord0 : 1;
  unsigned int usbs0 : 1;
  unsigned int upm0 : 2;
  unsigned int umsel0 : 2;
};
#line 2538
struct __reg_UCSR1A {
  unsigned int mpcm1 : 1;
  unsigned int u2x1 : 1;
  unsigned int upe1 : 1;
  unsigned int dor1 : 1;
  unsigned int fe1 : 1;
  unsigned int udre1 : 1;
  unsigned int txc1 : 1;
  unsigned int rxc1 : 1;
};
#line 2569
struct __reg_UCSR1B {
  unsigned int txb81 : 1;
  unsigned int rxb81 : 1;
  unsigned int ucsz12 : 1;
  unsigned int txen1 : 1;
  unsigned int rxen1 : 1;
  unsigned int udrie1 : 1;
  unsigned int txcie1 : 1;
  unsigned int rxcie1 : 1;
};
#line 2600
struct __reg_UCSR1C {
  unsigned int ucpol1 : 1;
  unsigned int ucsz1 : 2;
  unsigned int ucpha1 : 1;
  unsigned int udord1 : 1;
  unsigned int usbs1 : 1;
  unsigned int upm1 : 2;
  unsigned int umsel1 : 2;
};
#line 2653
struct __reg_SCCR0 {
  unsigned int sccmp : 3;
  unsigned int sctse : 1;
  unsigned int sccksel : 1;
  unsigned int scen : 1;
  unsigned int scmbts : 1;
  unsigned int scres : 1;
};
#line 2682
struct __reg_SCCR1 {
  unsigned int scenbo : 1;
  unsigned int  : 7;
};
#line 2700
struct __reg_SCSR {
  unsigned int scbsy : 1;
  unsigned int  : 7;
};
#line 2718
struct __reg_SCIRQM {
  unsigned int irqmcp : 3;
  unsigned int irqmof : 1;
  unsigned int irqmbo : 1;
  unsigned int  : 3;
};
#line 2742
struct __reg_SCIRQS {
  unsigned int irqscp : 3;
  unsigned int irqsof : 1;
  unsigned int irqsbo : 1;
  unsigned int  : 3;
};
#line 2766
struct __reg_SCCNTLL {
  unsigned int sccntll : 8;
};
#line 2790
struct __reg_SCCNTLH {
  unsigned int sccntlh : 8;
};
#line 2814
struct __reg_SCCNTHL {
  unsigned int sccnthl : 8;
};
#line 2838
struct __reg_SCCNTHH {
  unsigned int sccnthh : 8;
};
#line 2862
struct __reg_SCBTSRLL {
  unsigned int scbtsrll : 8;
};
#line 2886
struct __reg_SCBTSRLH {
  unsigned int scbtsrlh : 8;
};
#line 2910
struct __reg_SCBTSRHL {
  unsigned int scbtsrhl : 8;
};
#line 2934
struct __reg_SCBTSRHH {
  unsigned int scbtsrhh : 8;
};
#line 2958
struct __reg_SCTSRLL {
  unsigned int sctsrll : 8;
};
#line 2982
struct __reg_SCTSRLH {
  unsigned int sctsrlh : 8;
};
#line 3006
struct __reg_SCTSRHL {
  unsigned int sctsrhl : 8;
};
#line 3030
struct __reg_SCTSRHH {
  unsigned int sctsrhh : 8;
};
#line 3054
struct __reg_SCOCR3LL {
  unsigned int scocr3ll : 8;
};
#line 3078
struct __reg_SCOCR3LH {
  unsigned int scocr3lh : 8;
};
#line 3102
struct __reg_SCOCR3HL {
  unsigned int scocr3hl : 8;
};
#line 3126
struct __reg_SCOCR3HH {
  unsigned int scocr3hh : 8;
};
#line 3150
struct __reg_SCOCR2LL {
  unsigned int scocr2ll : 8;
};
#line 3174
struct __reg_SCOCR2LH {
  unsigned int scocr2lh : 8;
};
#line 3198
struct __reg_SCOCR2HL {
  unsigned int scocr2hl : 8;
};
#line 3222
struct __reg_SCOCR2HH {
  unsigned int scocr2hh : 8;
};
#line 3246
struct __reg_SCOCR1LL {
  unsigned int scocr1ll : 8;
};
#line 3270
struct __reg_SCOCR1LH {
  unsigned int scocr1lh : 8;
};
#line 3294
struct __reg_SCOCR1HL {
  unsigned int scocr1hl : 8;
};
#line 3318
struct __reg_SCOCR1HH {
  unsigned int scocr1hh : 8;
};
#line 3342
struct __reg_TCCR5A {
  unsigned int wgm5 : 2;
  unsigned int com5c : 2;
  unsigned int com5b : 2;
  unsigned int com5a : 2;
};
#line 3369
struct __reg_TCCR5B {
  unsigned int cs5 : 3;
  unsigned int wgm5 : 2;
  unsigned int  : 1;
  unsigned int ices5 : 1;
  unsigned int icnc5 : 1;
};
#line 3396
struct __reg_TCCR5C {
  unsigned int  : 5;
  unsigned int foc5c : 1;
  unsigned int foc5b : 1;
  unsigned int foc5a : 1;
};
#line 3443
struct __reg_LLCR {
  unsigned int llencal : 1;
  unsigned int llshort : 1;
  unsigned int lltco : 1;
  unsigned int llcal : 1;
  unsigned int llcomp : 1;
  unsigned int lldone : 1;
  unsigned int  : 2;
};
#line 3471
struct __reg_LLDRL {
  unsigned int lldrl : 4;
  unsigned int  : 4;
};
#line 3492
struct __reg_LLDRH {
  unsigned int lldrh : 5;
  unsigned int  : 3;
};
#line 3514
struct __reg_DRTRAM3 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3535
struct __reg_DRTRAM2 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3556
struct __reg_DRTRAM1 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3577
struct __reg_DRTRAM0 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3598
struct __reg_DPDS0 {
  unsigned int pbdrv : 2;
  unsigned int pddrv : 2;
  unsigned int pedrv : 2;
  unsigned int pfdrv : 2;
};
#line 3625
struct __reg_DPDS1 {
  unsigned int pgdrv : 2;
  unsigned int  : 6;
};
#line 3644
struct __reg_TRXPR {
  unsigned int trxrst : 1;
  unsigned int slptr : 1;
  unsigned int  : 6;
};
#line 3664
struct __reg_AES_CTRL {
  unsigned int  : 2;
  unsigned int aes_im : 1;
  unsigned int aes_dir : 1;
  unsigned int  : 1;
  unsigned int aes_mode : 1;
  unsigned int  : 1;
  unsigned int aes_request : 1;
};
#line 3697
struct __reg_AES_STATUS {
  unsigned int aes_done : 1;
  unsigned int  : 6;
  unsigned int aes_er : 1;
};
#line 3717
struct __reg_AES_STATE {
  unsigned int aes_state : 8;
};
#line 3741
struct __reg_AES_KEY {
  unsigned int aes_key : 8;
};
#line 3765
struct __reg_TRX_STATUS {
  unsigned int trx_status : 5;
  unsigned int tst_status : 1;
  unsigned int cca_status : 1;
  unsigned int cca_done : 1;
};
#line 3813
struct __reg_TRX_STATE {
  unsigned int trx_cmd : 5;
  unsigned int trac_status : 3;
};
#line 3859
struct __reg_TRX_CTRL_1 {
  unsigned int  : 5;
  unsigned int tx_auto_crc_on : 1;
  unsigned int irq_2_ext_en : 1;
  unsigned int pa_ext_en : 1;
};
#line 3881
struct __reg_PHY_TX_PWR {
  unsigned int tx_pwr : 4;
  unsigned int pa_lt : 2;
  unsigned int pa_buf_lt : 2;
};
#line 3918
struct __reg_PHY_RSSI {
  unsigned int rssi : 5;
  unsigned int rnd_value : 2;
  unsigned int rx_crc_valid : 1;
};
#line 3952
struct __reg_PHY_ED_LEVEL {
  unsigned int ed_level : 8;
};
#line 3983
struct __reg_PHY_CC_CCA {
  unsigned int channel : 5;
  unsigned int cca_mode : 2;
  unsigned int cca_request : 1;
};
#line 4032
struct __reg_CCA_THRES {
  unsigned int cca_ed_thres : 4;
  unsigned int cca_cs_thres : 4;
};
#line 4057
struct __reg_RX_CTRL {
  unsigned int pdt_thres : 4;
  unsigned int  : 4;
};
#line 4083
struct __reg_SFD_VALUE {
  unsigned int sfd_value : 8;
};
#line 4111
struct __reg_TRX_CTRL_2 {
  unsigned int oqpsk_data_rate : 2;
  unsigned int  : 5;
  unsigned int rx_safe_mode : 1;
};
#line 4139
struct __reg_ANT_DIV {
  unsigned int ant_ctrl : 2;
  unsigned int ant_ext_sw_en : 1;
  unsigned int ant_div_en : 1;
  unsigned int  : 3;
  unsigned int ant_sel : 1;
};
#line 4174
struct __reg_IRQ_MASK {
  unsigned int pll_lock_en : 1;
  unsigned int pll_unlock_en : 1;
  unsigned int rx_start_en : 1;
  unsigned int rx_end_en : 1;
  unsigned int cca_ed_done_en : 1;
  unsigned int ami_en : 1;
  unsigned int tx_end_en : 1;
  unsigned int awake_en : 1;
};
#line 4205
struct __reg_IRQ_STATUS {
  unsigned int pll_lock : 1;
  unsigned int pll_unlock : 1;
  unsigned int rx_start : 1;
  unsigned int rx_end : 1;
  unsigned int cca_ed_done : 1;
  unsigned int ami : 1;
  unsigned int tx_end : 1;
  unsigned int awake : 1;
};
#line 4236
struct __reg_VREG_CTRL {
  unsigned int  : 2;
  unsigned int dvdd_ok : 1;
  unsigned int dvreg_ext : 1;
  unsigned int  : 2;
  unsigned int avdd_ok : 1;
  unsigned int avreg_ext : 1;
};
#line 4268
struct __reg_BATMON {
  unsigned int batmon_vth : 4;
  unsigned int batmon_hr : 1;
  unsigned int batmon_ok : 1;
  unsigned int bat_low_en : 1;
  unsigned int bat_low : 1;
};
#line 4301
struct __reg_XOSC_CTRL {
  unsigned int xtal_trim : 4;
  unsigned int xtal_mode : 4;
};
#line 4331
struct __reg_RX_SYN {
  unsigned int rx_pdt_level : 4;
  unsigned int  : 3;
  unsigned int rx_pdt_dis : 1;
};
#line 4359
struct __reg_XAH_CTRL_1 {
  unsigned int  : 1;
  unsigned int aack_prom_mode : 1;
  unsigned int aack_ack_time : 1;
  unsigned int  : 1;
  unsigned int aack_upld_res_ft : 1;
  unsigned int aack_fltr_res_ft : 1;
  unsigned int  : 2;
};
#line 4390
struct __reg_FTN_CTRL {
  unsigned int  : 7;
  unsigned int ftn_start : 1;
};
#line 4408
struct __reg_PLL_CF {
  unsigned int  : 7;
  unsigned int pll_cf_start : 1;
};
#line 4426
struct __reg_PLL_DCU {
  unsigned int  : 7;
  unsigned int pll_dcu_start : 1;
};
#line 4444
struct __reg_PART_NUM {
  unsigned int part_num : 8;
};
#line 4472
struct __reg_VERSION_NUM {
  unsigned int version_num : 8;
};
#line 4501
struct __reg_MAN_ID_0 {
  unsigned int man_id_0 : 8;
};
#line 4529
struct __reg_MAN_ID_1 {
  unsigned int man_id_1 : 8;
};
#line 4557
struct __reg_SHORT_ADDR_0 {
  unsigned int short_addr_0 : 8;
};
#line 4581
struct __reg_SHORT_ADDR_1 {
  unsigned int short_addr_1 : 8;
};
#line 4605
struct __reg_PAN_ID_0 {
  unsigned int pan_id_0 : 8;
};
#line 4629
struct __reg_PAN_ID_1 {
  unsigned int pan_id_1 : 8;
};
#line 4653
struct __reg_IEEE_ADDR_0 {
  unsigned int ieee_addr_0 : 8;
};
#line 4677
struct __reg_IEEE_ADDR_1 {
  unsigned int ieee_addr_1 : 8;
};
#line 4701
struct __reg_IEEE_ADDR_2 {
  unsigned int ieee_addr_2 : 8;
};
#line 4725
struct __reg_IEEE_ADDR_3 {
  unsigned int ieee_addr_3 : 8;
};
#line 4749
struct __reg_IEEE_ADDR_4 {
  unsigned int ieee_addr_4 : 8;
};
#line 4773
struct __reg_IEEE_ADDR_5 {
  unsigned int ieee_addr_5 : 8;
};
#line 4797
struct __reg_IEEE_ADDR_6 {
  unsigned int ieee_addr_6 : 8;
};
#line 4821
struct __reg_IEEE_ADDR_7 {
  unsigned int ieee_addr_7 : 8;
};
#line 4845
struct __reg_XAH_CTRL_0 {
  unsigned int slotted_operation : 1;
  unsigned int max_csma_retries : 3;
  unsigned int max_frame_retries : 4;
};
#line 4876
struct __reg_CSMA_SEED_0 {
  unsigned int csma_seed_0 : 8;
};
#line 4900
struct __reg_CSMA_SEED_1 {
  unsigned int csma_seed_1 : 3;
  unsigned int aack_i_am_coord : 1;
  unsigned int aack_dis_ack : 1;
  unsigned int aack_set_pd : 1;
  unsigned int aack_fvn_mode : 2;
};
#line 4928
struct __reg_CSMA_BE {
  unsigned int min_be : 4;
  unsigned int max_be : 4;
};
#line 4953
struct __reg_TST_CTRL_DIGI {
  unsigned int tst_ctrl_dig : 4;
  unsigned int  : 4;
};
#line 4974
struct __reg_TST_RX_LENGTH {
  unsigned int rx_length : 8;
};
# 244 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 542 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/eeprom.h" 3
void __eewr_byte_m128rfa1(uint8_t *__p, uint8_t __value);
# 51 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 217 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 105 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 125
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 135
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 170
#line 162
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 62 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128Adc.h"
enum __nesc_unnamed4249 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVDD = 1, 
  ATM128_ADC_VREF_1_5 = 2, 
  ATM128_ADC_VREF_1_6 = 3, 
  ATM128_ADC_VREF_AVCC = ATM128_ADC_VREF_AVDD
};


enum __nesc_unnamed4250 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4251 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND, 
  ATM128_ADC_INT_TEMP = 41, 
  ATM128_ADC_INT_VDRTBBP = 52, 
  ATM128_ADC_INT_VDRTBBN = 61
};







#line 117
typedef struct __nesc_unnamed4252 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4253 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4254 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 173
typedef struct __nesc_unnamed4259 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;










#line 184
typedef struct __nesc_unnamed4260 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t acch : 1;
  uint8_t refok : 1;
  uint8_t acme : 1;
  uint8_t avddok : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 48 "/opt/tinyos-2.x/tos/platforms/spensamote/hardware.h"
enum __nesc_unnamed4261 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};
# 43 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4262 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 41 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4264 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4265 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4266 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 41 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
enum __nesc_unnamed4267 {


  ATMRFA1_CLK8_OFF = 0, 
  ATMRFA1_CLK8_NORMAL = 1, 
  ATMRFA1_CLK8_DIVIDE_8 = 2, 
  ATMRFA1_CLK8_DIVIDE_32 = 3, 
  ATMRFA1_CLK8_DIVIDE_64 = 4, 
  ATMRFA1_CLK8_DIVIDE_128 = 5, 
  ATMRFA1_CLK8_DIVIDE_256 = 6, 
  ATMRFA1_CLK8_DIVIDE_1024 = 7, 


  ATMRFA1_WGM8_NORMAL = 0 << 3, 
  ATMRFA1_WGM8_PWM = 1 << 3, 
  ATMRFA1_WGM8_CTC = 2 << 3, 
  ATMRFA1_WGM8_PWM_FAST = 3 << 3, 
  ATMRFA1_WGM8_COMPARE_HIGH = 5 << 3, 
  ATMRFA1_WGM8_COMPARE_LOW = 7 << 3, 


  ATMRFA1_ASYNC_OFF = 0 << 6, 
  ATMRFA1_ASYNC_ON = 1 << 6, 
  ATMRFA1_ASYNC_EXT = 3 << 6
};


enum __nesc_unnamed4268 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4269 {


  ATMRFA1_CLK16_OFF = 0, 
  ATMRFA1_CLK16_NORMAL = 1, 
  ATMRFA1_CLK16_DIVIDE_8 = 2, 
  ATMRFA1_CLK16_DIVIDE_64 = 3, 
  ATMRFA1_CLK16_DIVIDE_256 = 4, 
  ATMRFA1_CLK16_DIVIDE_1024 = 5, 
  ATMRFA1_CLK16_EXTERNAL_FALL = 6, 
  ATMRFA1_CLK16_EXTERNAL_RISE = 7, 


  ATMRFA1_WGM16_NORMAL = 0 << 3, 
  ATMRFA1_WGM16_PWM_8BIT = 1 << 3, 
  ATMRFA1_WGM16_PWM_9BIT = 2 << 3, 
  ATMRFA1_WGM16_PWM_10BIT = 3 << 3, 
  ATMRFA1_WGM16_CTC_COMPARE = 4 << 3, 
  ATMRFA1_WGM16_PWM_FAST_8BIT = 5 << 3, 
  ATMRFA1_WGM16_PWM_FAST_9BIT = 6 << 3, 
  ATMRFA1_WGM16_PWM_FAST_10BIT = 7 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_LOW = 8 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_LOW = 9 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_HIGH = 10 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_HIGH = 11 << 3, 
  ATMRFA1_WGM16_CTC_CAPTURE = 12 << 3, 
  ATMRFA1_WGM16_RESERVED = 13 << 3, 
  ATMRFA1_WGM16_PWM_FAST_CAPTURE = 14 << 3, 
  ATMRFA1_WGM16_PWM_FAST_COMPARE = 15 << 3
};


enum __nesc_unnamed4270 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4271 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4272 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4273 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4274 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 69 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/TimerConfig.h"
typedef struct T16mhz {
} 
#line 69
T16mhz;
typedef struct T8mhz {
} 
#line 70
T8mhz;
typedef struct T4mhz {
} 
#line 71
T4mhz;
typedef struct T2mhz {
} 
#line 72
T2mhz;








typedef T2mhz TMcu;
#line 99
typedef T32khz TRtc;
#line 122
typedef struct T62khz {
} 
#line 122
T62khz;
#line 139
typedef T2mhz TFour;
# 48 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestCase.h"
static void assertEqualsFailed(char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId);
static void assertNotEqualsFailed(char *failMsg, uint32_t actual, uint8_t assertionId);
static void assertResultIsBelowFailed(char *failMsg, uint32_t upperbound, uint32_t actual, uint8_t assertionId);
static void assertResultIsAboveFailed(char *failMsg, uint32_t lowerbound, uint32_t actual, uint8_t assertionId);
static void assertTunitSuccess(uint8_t assertionId);
static void assertTunitFail(char *failMsg, uint8_t assertionId);


static void setTUnitTestName(char *name);
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4275 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4276 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 42 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayer.h"
#line 39
typedef nx_struct rfa1_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rfa1_header_t;









#line 44
typedef struct rfa1_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rfa1_metadata_t;
# 43 "/opt/tinyos-2.x/tos/platforms/spensamote/RadioConfig.h"
enum __nesc_unnamed4277 {





  RFA1_CCA_MODE_VALUE = 2 << 5, 





  RFA1_CCA_THRES_VALUE = 0xC7, 

  RFA1_PA_BUF_LT = 3 << 6, 
  RFA1_PA_LT = 0 << 4
};
#line 79
typedef T62khz TRadio;
typedef uint32_t tradio_size;
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/opt/tinyos-2.x/tos/types/IeeeEui64.h"
enum __nesc_unnamed4278 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos-2.x/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4279 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4280 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4281 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4282 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1Radio.h"
#line 49
typedef nx_struct rfa1packet_header_t {

  rfa1_header_t rfa1;
  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rfa1packet_header_t;




#line 61
typedef nx_struct rfa1packet_footer_t {
} __attribute__((packed)) 

rfa1packet_footer_t;
#line 77
#line 66
typedef struct rfa1packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rfa1_metadata_t rfa1;
} rfa1packet_metadata_t;

enum __nesc_unnamed4283 {

  RFA1_TX_PWR_MASK = 0x0F, 
  RFA1_CHANNEL_MASK = 0x1F, 
  RFA1_TRX_STATUS_MASK = 0x1F, 
  RFA1_RSSI_MASK = 0x1F
};
# 83 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4284 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4285 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4286 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 32 "/opt/tinyos-2.x/tos/platforms/spensamote/platform_message.h"
#line 29
typedef union message_header {
  rfa1packet_header_t rfa1;
  serial_header_t serial;
} message_header_t;



#line 34
typedef union message_footer {
  rfa1packet_footer_t rfa1;
} message_footer_t;



#line 38
typedef union message_metadata {
  rfa1packet_metadata_t rfa1;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 59 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessing.h"
#line 50
typedef nx_struct TUnitProcessingMsg {
  nx_uint8_t cmd;
  nx_uint8_t id;
  nx_uint8_t assertionId;
  nx_uint32_t expected;
  nx_uint32_t actual;
  nx_bool lastMsg;
  nx_uint8_t failMsgLength;
  nx_uint8_t failMsg[28 - 13];
} __attribute__((packed)) TUnitProcessingMsg;


enum __nesc_unnamed4287 {
  TUNITPROCESSING_CMD_PING = 0, 
  TUNITPROCESSING_REPLY_PING = 1, 
  TUNITPROCESSING_CMD_RUN = 2, 
  TUNITPROCESSING_REPLY_RUN = 3, 
  TUNITPROCESSING_EVENT_PONG = 4, 
  TUNITPROCESSING_EVENT_TESTRESULT_SUCCESS = 5, 
  TUNITPROCESSING_EVENT_TESTRESULT_FAILED = 6, 
  TUNITPROCESSING_EVENT_TESTRESULT_EQUALS_FAILED = 7, 
  TUNITPROCESSING_EVENT_TESTRESULT_NOTEQUALS_FAILED = 8, 
  TUNITPROCESSING_EVENT_TESTRESULT_BELOW_FAILED = 9, 
  TUNITPROCESSING_EVENT_TESTRESULT_ABOVE_FAILED = 10, 
  TUNITPROCESSING_EVENT_ALLDONE = 11, 
  TUNITPROCESSING_CMD_TEARDOWNONETIME = 12
};

enum __nesc_unnamed4288 {
  AM_TUNITPROCESSINGMSG = 0xFF
};
# 50 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "/opt/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4289 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4290 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4291 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4292 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4293 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4294 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4295 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4296 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
typedef T62khz /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__0__precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__0__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__0__precision_tag /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC*/AtmegaAlarmC__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__precision_tag /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareA__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareB__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__Counter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__SfdCapture__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareC__size_type;
typedef T62khz /*Counter62khz32C.AtmegaCounterC*/AtmegaCounterC__0__precision_tag;
typedef uint32_t /*Counter62khz32C.AtmegaCounterC*/AtmegaCounterC__0__size_type;
typedef /*Counter62khz32C.AtmegaCounterC*/AtmegaCounterC__0__precision_tag /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__precision_tag;
typedef /*Counter62khz32C.AtmegaCounterC*/AtmegaCounterC__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type;
typedef /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__precision_tag /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__precision_tag;
typedef /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type;
typedef /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__size_type;
typedef TMilli /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef T62khz /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint8_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type;
typedef T62khz /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
enum SerialAMQueueP____nesc_unnamed4297 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef TMicro /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_size_type;
typedef TMcu /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_precision_tag;
typedef uint32_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_size_type;
typedef uint8_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__upper_count_type;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_precision_tag /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_size_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_precision_tag /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_size_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareA__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Capture__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareB__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareC__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Timer__size_type;
typedef TMcu /*CounterMcu32C.AtmegaCounterC*/AtmegaCounterC__1__precision_tag;
typedef uint16_t /*CounterMcu32C.AtmegaCounterC*/AtmegaCounterC__1__size_type;
typedef /*CounterMcu32C.AtmegaCounterC*/AtmegaCounterC__1__precision_tag /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__precision_tag;
typedef /*CounterMcu32C.AtmegaCounterC*/AtmegaCounterC__1__size_type /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__size_type;
typedef /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__precision_tag /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__precision_tag;
typedef /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__size_type;
typedef /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_precision_tag;
typedef uint32_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_precision_tag;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_size_type;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__upper_count_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__size_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__size_type;
enum /*TestChargerMonitorC.ChargingLedOnC*/TestCaseC__0____nesc_unnamed4298 {
  TestCaseC__0__TUNIT_TEST_ID = 0U
};
enum /*TestChargerMonitorC.DoneChargingLedOnC*/TestCaseC__1____nesc_unnamed4299 {
  TestCaseC__1__TUNIT_TEST_ID = 1U
};
enum /*TestChargerMonitorC.ErrorLedOnC*/TestCaseC__2____nesc_unnamed4300 {
  TestCaseC__2__TUNIT_TEST_ID = 2U
};
enum /*TestChargerMonitorC.LedsOffC*/TestCaseC__3____nesc_unnamed4301 {
  TestCaseC__3__TUNIT_TEST_ID = 3U
};
enum /*TestChargerMonitorC.DidNotStartChargeC*/TestCaseC__4____nesc_unnamed4302 {
  TestCaseC__4__TUNIT_TEST_ID = 4U
};
enum /*TestChargerMonitorC.NotifyNotCalledC*/TestCaseC__5____nesc_unnamed4303 {
  TestCaseC__5__TUNIT_TEST_ID = 5U
};
enum /*TestChargerMonitorC.PGNotifySetTrueC*/TestCaseC__6____nesc_unnamed4304 {
  TestCaseC__6__TUNIT_TEST_ID = 6U
};
enum /*TestChargerMonitorC.PGNotifySetFalseC*/TestCaseC__7____nesc_unnamed4305 {
  TestCaseC__7__TUNIT_TEST_ID = 7U
};
typedef bool ChargerMonitorP__PGNotify__val_t;
typedef uint8_t ChargerMonitorP__Notify__val_t;
typedef TMilli ChargerMonitorP__Timer__precision_tag;
typedef TMilli TestChargerMonitorP__TestTimer__precision_tag;
typedef uint8_t TestChargerMonitorP__Notify__val_t;
typedef bool TestChargerMonitorP__BoolNotify__val_t;
typedef TMilli TestChargerMonitorP__Timer__precision_tag;
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__fired(void );
# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__size_type t0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__size_type dt);
#line 73
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__overflow(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t McuInitP__Init__init(void );
#line 62
static error_t McuInitP__AdcInit__default__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareA__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareA__set(HplAtmRfa1TimerMacP__CompareA__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareA__start(void );


static void HplAtmRfa1TimerMacP__CompareA__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareB__default__fired(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 53
static bool HplAtmRfa1TimerMacP__Counter__test(void );
#line 40
static HplAtmRfa1TimerMacP__Counter__size_type HplAtmRfa1TimerMacP__Counter__get(void );
#line 61
static void HplAtmRfa1TimerMacP__Counter__start(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__default__fired(void );
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void );




static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8fd3e5e108);
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8fd3e5e108, 
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TUnitP__waitForSendDone__runTask(void );
# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
static void TUnitP__TearDownOneTime__default__run(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TUnitP__begin__runTask(void );
# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
static void TUnitP__TearDown__default__run(void );
# 39 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TUnitP__TestCase__default__run(
# 75 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
uint8_t arg_0x2b8fd3eb8d38);
# 41 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TUnitP__TestCase__done(
# 75 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
uint8_t arg_0x2b8fd3eb8d38);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t TUnitP__Init__init(void );
# 61 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
static void TUnitP__TUnitProcessing__tearDownOneTime(void );
#line 57
static void TUnitP__TUnitProcessing__run(void );

static void TUnitP__TUnitProcessing__ping(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TUnitP__runDone__runTask(void );
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void TUnitP__SerialSplitControl__startDone(error_t error);
#line 138
static void TUnitP__SerialSplitControl__stopDone(error_t error);
# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
static void TUnitP__SetUp__default__run(void );
#line 38
static void TUnitP__SetUpOneTime__default__run(void );
# 46 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/StatsQuery.nc"
static bool TUnitP__StatsQuery__default__isIdle(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__SubInit__default__init(void );
#line 62
static error_t PlatformP__Init__init(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b8fd3b87ab0);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b8fd3b87ab0);
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void Link_TUnitProcessingP__SerialEventSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void Link_TUnitProcessingP__Boot__booted(void );
# 47 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
static void Link_TUnitProcessingP__TUnitProcessing__testResultIsAboveFailed(uint8_t testId, char *failMsg, uint32_t lowerbound, uint32_t actual, uint8_t assertionId);
#line 41
static void Link_TUnitProcessingP__TUnitProcessing__testEqualsFailed(uint8_t testId, char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId);



static void Link_TUnitProcessingP__TUnitProcessing__testResultIsBelowFailed(uint8_t testId, char *failMsg, uint32_t upperbound, uint32_t actual, uint8_t assertionId);



static void Link_TUnitProcessingP__TUnitProcessing__testFailed(uint8_t testId, char *failMsg, uint8_t assertionId);
#line 43
static void Link_TUnitProcessingP__TUnitProcessing__testNotEqualsFailed(uint8_t testId, char *failMsg, uint32_t actual, uint8_t assertionId);
#line 39
static void Link_TUnitProcessingP__TUnitProcessing__testSuccess(uint8_t testId, uint8_t assertionId);
#line 52
static void Link_TUnitProcessingP__TUnitProcessing__allDone(void );

static void Link_TUnitProcessingP__TUnitProcessing__pong(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



Link_TUnitProcessingP__SerialReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void Link_TUnitProcessingP__SerialSplitControl__startDone(error_t error);
#line 138
static void Link_TUnitProcessingP__SerialSplitControl__stopDone(error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Link_TUnitProcessingP__sendEventMsg__runTask(void );
#line 75
static void Link_TUnitProcessingP__allDone__runTask(void );
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b8fd406f020, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b8fd404ee18, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(
# 46 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b8fd404ee18, 
# 122 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b8fd404ee18, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b8fd40ac508, 
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b8fd40ac508, 
# 132 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 94
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b8fd40ab780, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f9af0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f9af0, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f9020, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f8db8, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f8db8);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f8db8, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__default__fired(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__default__fired(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareB__default__fired(void );
#line 48
static void HplAtmRfa1Timer1P__CompareC__default__fired(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 61
static void HplAtmRfa1Timer1P__Timer__start(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void );
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 71 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t StateImplP__State__getState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x2b8fd4492be8);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x2b8fd4492be8);
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x2b8fd4492be8, 
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x2b8fd4492be8);
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x2b8fd4492be8, 
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x2b8fd4492be8, 
# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);
# 55 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x2b8fd45230c8);
# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x2b8fd45230c8);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void ChargerMonitorP__timerstop__runTask(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/Notify.nc"
static void ChargerMonitorP__PGNotify__notify(ChargerMonitorP__PGNotify__val_t val);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void ChargerMonitorP__timerstart__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void ChargerMonitorP__Timer__fired(void );
# 39 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__DoneChargingLedOn__run(void );
#line 39
static void TestChargerMonitorP__NotifyNotCalled__run(void );
#line 39
static void TestChargerMonitorP__ChargingLedOn__run(void );
#line 39
static void TestChargerMonitorP__PGNotifySetFalse__run(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool TestChargerMonitorP__PG__get(void );
#line 43
static bool TestChargerMonitorP__STAT1__get(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TestChargerMonitorP__TestTimer__fired(void );
# 39 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__ErrorLedOn__run(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/Notify.nc"
static void TestChargerMonitorP__Notify__notify(TestChargerMonitorP__Notify__val_t val);
# 39 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__DidNotStartCharge__run(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool TestChargerMonitorP__STAT2__get(void );
# 39 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__LedsOff__run(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TestChargerMonitorP__Timer__startPeriodic(uint32_t dt);
#line 78
static void TestChargerMonitorP__Timer__stop(void );
# 39 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__PGNotifySetTrue__run(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__reset(void );
#line 43
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__set(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__size_type value);
#line 59
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__start(void );


static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__fired(void );
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__get(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Init__init(void );










static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__fired(void );





static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__stop(void );










static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__setAlarm(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type time);






static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type nt0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type ndt);
#line 125
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__overflow(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t McuInitP__RadioInit__init(void );
#line 62
static error_t McuInitP__AdcInit__init(void );
#line 62
static error_t McuInitP__MeasureClock__init(void );
#line 62
static error_t McuInitP__TimerInit__init(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void );
#line 77
static inline error_t McuInitP__Init__init(void );
#line 101
static inline error_t McuInitP__AdcInit__default__init(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 135
enum MeasureClockC____nesc_unnamed4306 {
  MeasureClockC__MAGIC = 31250 / (16 / 16)
};
#line 172
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 38 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__fired(void );
#line 48
static void HplAtmRfa1TimerMacP__CompareB__fired(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__overflow(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtmRfa1TimerMacP__McuPowerState__update(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__fired(void );
# 67 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
#line 57
typedef union HplAtmRfa1TimerMacP__reg32_t {

  uint32_t full;
  struct  {

    uint8_t ll;
    uint8_t lh;
    uint8_t hl;
    uint8_t hh;
  } ;
} HplAtmRfa1TimerMacP__reg32_t;



static uint32_t HplAtmRfa1TimerMacP__Counter__get(void );
#line 108
void __vector_68(void ) __attribute((signal))   ;

static inline bool HplAtmRfa1TimerMacP__Counter__test(void );





static inline void HplAtmRfa1TimerMacP__Counter__start(void );
#line 130
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 166
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value);
#line 185
void __vector_65(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareA__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareA__start(void );






static inline void HplAtmRfa1TimerMacP__CompareA__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 263
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void );

void __vector_66(void ) __attribute((signal))   ;
#line 343
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void );

void __vector_67(void ) __attribute((signal))   ;
#line 437
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };


int8_t McuSleepC__powerState = -1;

static inline void McuSleepC__McuSleep__sleep(void );
#line 95
static inline void McuSleepC__McuPowerState__update(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__setMode(uint8_t mode);
#line 53
static bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__test(void );
#line 40
static /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__get(void );
#line 61
static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );







static inline /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static inline void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__overflow(void );




static inline bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4307 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 6, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) + 6, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void );
# 77 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0;
/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;

enum /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4308 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type ) - 1 - 6, 
  TransformAlarmC__0__MAX_DELAY = (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type )1 << /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );




static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void );










static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void );




static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt);
#line 162
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4309 {
#line 74
  AlarmToTimerC__0__fired = 0U
};
#line 74
typedef int /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8fd3e5e108);
#line 71
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4310 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4311 {

  VirtualizeTimerC__0__NUM_TIMERS = 1U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4312 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);
#line 204
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TUnitP__waitForSendDone__postTask(void );
# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
static void TUnitP__TearDownOneTime__run(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TUnitP__begin__postTask(void );
# 61 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static bool TUnitP__SendState__isIdle(void );
# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
static void TUnitP__TearDown__run(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t TUnitP__ActiveMessageAddress__amAddress(void );
# 39 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TUnitP__TestCase__run(
# 75 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
uint8_t arg_0x2b8fd3eb8d38);
# 47 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
static void TUnitP__TUnitProcessing__testResultIsAboveFailed(uint8_t testId, char *failMsg, uint32_t lowerbound, uint32_t actual, uint8_t assertionId);
#line 41
static void TUnitP__TUnitProcessing__testEqualsFailed(uint8_t testId, char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId);



static void TUnitP__TUnitProcessing__testResultIsBelowFailed(uint8_t testId, char *failMsg, uint32_t upperbound, uint32_t actual, uint8_t assertionId);



static void TUnitP__TUnitProcessing__testFailed(uint8_t testId, char *failMsg, uint8_t assertionId);
#line 43
static void TUnitP__TUnitProcessing__testNotEqualsFailed(uint8_t testId, char *failMsg, uint32_t actual, uint8_t assertionId);
#line 39
static void TUnitP__TUnitProcessing__testSuccess(uint8_t testId, uint8_t assertionId);
#line 52
static void TUnitP__TUnitProcessing__allDone(void );

static void TUnitP__TUnitProcessing__pong(void );
# 71 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t TUnitP__TestState__getState(void );
#line 56
static void TUnitP__TestState__toIdle(void );
#line 45
static error_t TUnitP__TestState__requestState(uint8_t reqState);





static void TUnitP__TestState__forceState(uint8_t reqState);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TUnitP__runDone__postTask(void );
# 71 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t TUnitP__TUnitState__getState(void );
#line 61
static bool TUnitP__TUnitState__isIdle(void );
#line 51
static void TUnitP__TUnitState__forceState(uint8_t reqState);
# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
static void TUnitP__SetUp__run(void );
#line 38
static void TUnitP__SetUpOneTime__run(void );
# 46 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/StatsQuery.nc"
static bool TUnitP__StatsQuery__isIdle(void );
# 131 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
enum TUnitP____nesc_unnamed4313 {
#line 131
  TUnitP__begin = 2U
};
#line 131
typedef int TUnitP____nesc_sillytask_begin[TUnitP__begin];
enum TUnitP____nesc_unnamed4314 {
#line 132
  TUnitP__waitForSendDone = 3U
};
#line 132
typedef int TUnitP____nesc_sillytask_waitForSendDone[TUnitP__waitForSendDone];
enum TUnitP____nesc_unnamed4315 {
#line 133
  TUnitP__runDone = 4U
};
#line 133
typedef int TUnitP____nesc_sillytask_runDone[TUnitP__runDone];
#line 98
uint8_t TUnitP__currentTest;





bool TUnitP__driver;




enum TUnitP____nesc_unnamed4316 {
  TUnitP__S_NOT_BOOTED, 
  TUnitP__S_READY, 
  TUnitP__S_RUNNING
};




enum TUnitP____nesc_unnamed4317 {
  TUnitP__S_IDLE, 
  TUnitP__S_SETUP_ONETIME, 

  TUnitP__S_SETUP, 
  TUnitP__S_RUN, 
  TUnitP__S_TEARDOWN, 

  TUnitP__S_TEARDOWN_ONETIME
};







static void TUnitP__setUpOneTimeDone(void );
static inline void TUnitP__setUpDone(void );
static inline void TUnitP__tearDownDone(void );
static inline void TUnitP__tearDownOneTimeDone(void );
static void TUnitP__attemptTest(void );
static inline void TUnitP__dummyCalls(void );


static inline error_t TUnitP__Init__init(void );










static inline void TUnitP__SerialSplitControl__startDone(error_t error);
#line 170
static inline void TUnitP__SerialSplitControl__stopDone(error_t error);



static inline void TUnitP__TUnitProcessing__run(void );





static inline void TUnitP__TUnitProcessing__ping(void );



static inline void TUnitP__TUnitProcessing__tearDownOneTime(void );







static inline void TUnitP__TestCase__done(uint8_t testId);




void assertEqualsFailed(char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId) __attribute((noinline))   ;





void assertNotEqualsFailed(char *failMsg, uint32_t actual, uint8_t assertionId) __attribute((noinline))   ;





void assertResultIsBelowFailed(char *failMsg, uint32_t upperbound, uint32_t actual, uint8_t assertionId) __attribute((noinline))   ;





void assertResultIsAboveFailed(char *failMsg, uint32_t lowerbound, uint32_t actual, uint8_t assertionId) __attribute((noinline))   ;





void assertTunitSuccess(uint8_t assertionId) __attribute((noinline))   ;





void assertTunitFail(char *failMsg, uint8_t assertionId) __attribute((noinline))   ;








void setTUnitTestName(char *name) __attribute((noinline))   ;
#line 267
static void TUnitP__setUpOneTimeDone(void );
#line 279
static inline void TUnitP__setUpDone(void );







static inline void TUnitP__tearDownDone(void );







static inline void TUnitP__tearDownOneTimeDone(void );





static void TUnitP__attemptTest(void );
#line 319
static inline void TUnitP__dummyCalls(void );
#line 339
static inline void TUnitP__begin__runTask(void );









static inline void TUnitP__waitForSendDone__runTask(void );
#line 361
static inline void TUnitP__runDone__runTask(void );








static inline void TUnitP__SetUpOneTime__default__run(void );



static inline void TUnitP__SetUp__default__run(void );



static inline void TUnitP__TestCase__default__run(uint8_t testId);



static inline void TUnitP__TearDown__default__run(void );



static inline void TUnitP__TearDownOneTime__default__run(void );







static inline bool TUnitP__StatsQuery__default__isIdle(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__SubInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
#line 62
static error_t PlatformP__McuInit__init(void );
# 51 "/opt/tinyos-2.x/tos/platforms/spensamote/new/PlatformP.nc"
static inline error_t PlatformP__powerInit(void );










static inline error_t PlatformP__Init__init(void );
#line 79
static inline error_t PlatformP__SubInit__default__init(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b8fd3b87ab0);
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4318 {

  SchedulerBasicP__NUM_TASKS = 17U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t Link_TUnitProcessingP__SerialEventSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

Link_TUnitProcessingP__SerialEventSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 71 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t Link_TUnitProcessingP__SerialState__getState(void );
#line 51
static void Link_TUnitProcessingP__SerialState__forceState(uint8_t reqState);




static void Link_TUnitProcessingP__SendState__toIdle(void );




static bool Link_TUnitProcessingP__SendState__isIdle(void );
#line 51
static void Link_TUnitProcessingP__SendState__forceState(uint8_t reqState);
# 61 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
static void Link_TUnitProcessingP__TUnitProcessing__tearDownOneTime(void );
#line 57
static void Link_TUnitProcessingP__TUnitProcessing__run(void );

static void Link_TUnitProcessingP__TUnitProcessing__ping(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t Link_TUnitProcessingP__SerialSplitControl__start(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t Link_TUnitProcessingP__sendEventMsg__postTask(void );
#line 67
static error_t Link_TUnitProcessingP__allDone__postTask(void );
# 85 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
enum Link_TUnitProcessingP____nesc_unnamed4319 {
#line 85
  Link_TUnitProcessingP__sendEventMsg = 5U
};
#line 85
typedef int Link_TUnitProcessingP____nesc_sillytask_sendEventMsg[Link_TUnitProcessingP__sendEventMsg];
enum Link_TUnitProcessingP____nesc_unnamed4320 {
#line 86
  Link_TUnitProcessingP__allDone = 6U
};
#line 86
typedef int Link_TUnitProcessingP____nesc_sillytask_allDone[Link_TUnitProcessingP__allDone];
#line 55
message_t Link_TUnitProcessingP__eventMsg[5];


uint8_t Link_TUnitProcessingP__writingEventMsg;


uint8_t Link_TUnitProcessingP__sendingEventMsg;




enum Link_TUnitProcessingP____nesc_unnamed4321 {
  Link_TUnitProcessingP__S_OFF, 
  Link_TUnitProcessingP__S_ON
};




enum Link_TUnitProcessingP____nesc_unnamed4322 {
  Link_TUnitProcessingP__S_IDLE, 
  Link_TUnitProcessingP__S_BUSY
};

enum Link_TUnitProcessingP____nesc_unnamed4323 {
  Link_TUnitProcessingP__EMPTY = 0xFF
};


static inline void Link_TUnitProcessingP__execute(TUnitProcessingMsg *inMsg);



static error_t Link_TUnitProcessingP__insert(uint8_t cmd, uint8_t testId, char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId);
static void Link_TUnitProcessingP__attemptEventSend(void );


static inline void Link_TUnitProcessingP__Boot__booted(void );










static inline void Link_TUnitProcessingP__SerialSplitControl__startDone(error_t error);



static inline void Link_TUnitProcessingP__SerialSplitControl__stopDone(error_t error);




static inline message_t *Link_TUnitProcessingP__SerialReceive__receive(message_t *msg, void *payload, uint8_t len);





static void Link_TUnitProcessingP__SerialEventSend__sendDone(message_t *msg, error_t error);










static inline void Link_TUnitProcessingP__TUnitProcessing__testSuccess(uint8_t testId, uint8_t assertionId);



static inline void Link_TUnitProcessingP__TUnitProcessing__testEqualsFailed(uint8_t testId, char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId);



static inline void Link_TUnitProcessingP__TUnitProcessing__testNotEqualsFailed(uint8_t testId, char *failMsg, uint32_t actual, uint8_t assertionId);



static inline void Link_TUnitProcessingP__TUnitProcessing__testResultIsBelowFailed(uint8_t testId, char *failMsg, uint32_t upperbound, uint32_t actual, uint8_t assertionId);



static inline void Link_TUnitProcessingP__TUnitProcessing__testResultIsAboveFailed(uint8_t testId, char *failMsg, uint32_t lowerbound, uint32_t actual, uint8_t assertionId);



static inline void Link_TUnitProcessingP__TUnitProcessing__testFailed(uint8_t testId, char *failMsg, uint8_t assertionId);




static inline void Link_TUnitProcessingP__TUnitProcessing__allDone(void );



static inline void Link_TUnitProcessingP__TUnitProcessing__pong(void );





static inline void Link_TUnitProcessingP__sendEventMsg__runTask(void );








static inline void Link_TUnitProcessingP__allDone__runTask(void );






static inline void Link_TUnitProcessingP__execute(TUnitProcessingMsg *inMsg);
#line 203
static error_t Link_TUnitProcessingP__insert(uint8_t cmd, uint8_t testId, char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId);
#line 269
static void Link_TUnitProcessingP__attemptEventSend(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);







static inline void */*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b8fd406f020, 
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(
# 48 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b8fd406f020, 
# 132 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b8fd404ee18, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4324 {
#line 126
  AMQueueImplP__0__CancelTask = 7U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4325 {
#line 169
  AMQueueImplP__0__errorTask = 8U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4326 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 211
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b8fd40ac508, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x2b8fd40ab780, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 97
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4327 {
#line 191
  SerialP__RunTx = 9U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4328 {
#line 322
  SerialP__startDoneTask = 10U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4329 {
#line 332
  SerialP__stopDoneTask = 11U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4330 {
#line 341
  SerialP__defaultSerialFlushTask = 12U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4331 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4332 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4333 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4334 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4335 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4336 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4337 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4338 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 519
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 560
static inline void SerialP__RunTx__runTask(void );
#line 669
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f9af0, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f9020, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f8db8, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f8db8);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x2b8fd41f8db8, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4339 {
#line 158
  SerialDispatcherP__0__signalSendDone = 13U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4340 {
#line 275
  SerialDispatcherP__0__receiveTask = 14U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4341 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4342 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4343 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4344 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 132 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 152
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 209
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 313
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;



static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );








static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__upper_count_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__m_upper;

enum /*CounterMicro32C.TransformCounterC*/TransformCounterC__1____nesc_unnamed4345 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 1, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_size_type ) - /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_size_type ) + 1, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__upper_count_type )2 << (/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__fired(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__fired(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareB__fired(void );
#line 48
static void HplAtmRfa1Timer1P__CompareC__fired(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__overflow(void );
# 73 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
void __vector_20(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__Timer__start(void );
#line 95
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 162
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void );

void __vector_17(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__CompareB__default__fired(void );

void __vector_18(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__CompareC__default__fired(void );

void __vector_19(void ) __attribute((signal))   ;
#line 322
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void );

void __vector_16(void ) __attribute((signal))   ;
#line 364
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__setMode(uint8_t mode);
#line 61
static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
#line 66
static inline void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__upper_count_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__m_upper;

enum /*CounterMcu32C.TransformCounterC*/TransformCounterC__2____nesc_unnamed4346 {

  TransformCounterC__2__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__2__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_size_type ) - /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__LOW_SHIFT_RIGHT, 
  TransformCounterC__2__NUM_UPPER_BITS = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_size_type ) - 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_size_type ) + 0, 



  TransformCounterC__2__OVERFLOW_MASK = /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__NUM_UPPER_BITS ? ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__upper_count_type )2 << (/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void );
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 74 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP__state[4U];

enum StateImplP____nesc_unnamed4347 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static inline error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);









static uint8_t StateImplP__State__getState(uint8_t id);
# 63 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;









static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 120
static inline am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
# 50 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(uint8_t bit);





static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(uint8_t bit);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t ChargerMonitorP__timerstop__postTask(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool ChargerMonitorP__PG__get(void );
#line 43
static bool ChargerMonitorP__STAT1__get(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/Notify.nc"
static void ChargerMonitorP__Notify__notify(ChargerMonitorP__Notify__val_t val);
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool ChargerMonitorP__STAT2__get(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t ChargerMonitorP__timerstart__postTask(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void ChargerMonitorP__Timer__startPeriodic(uint32_t dt);
#line 78
static void ChargerMonitorP__Timer__stop(void );
# 89 "../../ChargerMonitor/ChargerMonitorP.nc"
enum ChargerMonitorP____nesc_unnamed4348 {
#line 89
  ChargerMonitorP__timerstart = 15U
};
#line 89
typedef int ChargerMonitorP____nesc_sillytask_timerstart[ChargerMonitorP__timerstart];



enum ChargerMonitorP____nesc_unnamed4349 {
#line 93
  ChargerMonitorP__timerstop = 16U
};
#line 93
typedef int ChargerMonitorP____nesc_sillytask_timerstop[ChargerMonitorP__timerstop];
#line 21
uint8_t ChargerMonitorP__pg = 0;
uint8_t ChargerMonitorP__stat1 = 0;
uint8_t ChargerMonitorP__stat2 = 0;
uint8_t ChargerMonitorP__combinedvar = 0;
uint8_t ChargerMonitorP__oldbin = -1;
bool ChargerMonitorP__pinHigh;


static void ChargerMonitorP__checkLeds(void );
#line 85
static inline void ChargerMonitorP__Timer__fired(void );



static inline void ChargerMonitorP__timerstart__runTask(void );



static inline void ChargerMonitorP__timerstop__runTask(void );



static void ChargerMonitorP__PGNotify__notify(bool m_pinHigh);
# 41 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__DoneChargingLedOn__done(void );
#line 41
static void TestChargerMonitorP__NotifyNotCalled__done(void );
#line 41
static void TestChargerMonitorP__ChargingLedOn__done(void );
#line 41
static void TestChargerMonitorP__PGNotifySetFalse__done(void );
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TestChargerMonitorP__TestTimer__startOneShot(uint32_t dt);
# 41 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__ErrorLedOn__done(void );
#line 41
static void TestChargerMonitorP__DidNotStartCharge__done(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/Notify.nc"
static void TestChargerMonitorP__BoolNotify__notify(TestChargerMonitorP__BoolNotify__val_t val);
# 41 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__LedsOff__done(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TestChargerMonitorP__Timer__fired(void );
# 41 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
static void TestChargerMonitorP__PGNotifySetTrue__done(void );
# 31 "TestChargerMonitorP.nc"
int TestChargerMonitorP__testcase;
int TestChargerMonitorP__shouldBeOff = 0;


static inline void TestChargerMonitorP__go(uint8_t testNum);






static inline void TestChargerMonitorP__ChargingLedOn__run(void );



static inline void TestChargerMonitorP__DoneChargingLedOn__run(void );



static inline void TestChargerMonitorP__ErrorLedOn__run(void );




static inline void TestChargerMonitorP__LedsOff__run(void );









static inline void TestChargerMonitorP__DidNotStartCharge__run(void );



static inline void TestChargerMonitorP__NotifyNotCalled__run(void );




static inline void TestChargerMonitorP__PGNotifySetTrue__run(void );






static inline void TestChargerMonitorP__PGNotifySetFalse__run(void );





static inline void TestChargerMonitorP__Notify__notify(uint8_t val);
#line 128
static inline void TestChargerMonitorP__TestTimer__fired(void );









static inline bool TestChargerMonitorP__PG__get(void );
#line 160
static inline bool TestChargerMonitorP__STAT1__get(void );
#line 187
static inline bool TestChargerMonitorP__STAT2__get(void );
#line 289
static inline void TestChargerMonitorP__Timer__stop(void );








static inline void TestChargerMonitorP__Timer__startPeriodic(uint32_t dt);
# 109 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 109
{
   __asm volatile ("cli" :  :  : "memory");}

#line 126
#line 125
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 129
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 135
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__overflow(void )
#line 125
{
}

# 177 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper & /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void ){
#line 82
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__overflow(void )
{
  /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
#line 49
  /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__overflow();
#line 49
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__overflow();
#line 49
}
#line 49
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt == 0) 
      {
        /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__fired(void ){
#line 78
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
{
  McuSleepC__powerState = -1;
}

# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtmRfa1TimerMacP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 200 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 0);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareA__stop();
#line 62
}
#line 62
# 63 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__fired(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__fired();
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareA__fired(void ){
#line 48
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__fired();
#line 48
}
#line 48
# 97 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void )
{
  return /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__get();
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 110 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline bool HplAtmRfa1TimerMacP__Counter__test(void )
#line 110
{
#line 110
  return * (volatile uint8_t *)0xE0 & (1 << 3);
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__test(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtmRfa1TimerMacP__Counter__test();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 71 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline bool /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void )
{
  /* atomic removed: atomic calls only */
#line 73
  {
    unsigned char __nesc_temp = 
#line 73
    /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__test();

#line 73
    return __nesc_temp;
  }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 193 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 0;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareA__start();
#line 59
}
#line 59
# 189 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__reset(void )
#line 189
{
#line 189
  * (volatile uint8_t *)0xE0 = 1 << 0;
}

# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareA__reset();
#line 54
}
#line 54
# 166 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF8 = time.hh;
    * (volatile uint8_t *)0xF7 = time.hl;
    * (volatile uint8_t *)0xF6 = time.lh;
    * (volatile uint8_t *)0xF5 = time.ll;
  }
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__set(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareA__set(value);
#line 43
}
#line 43
# 80 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__setAlarm(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type time)
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__set(time);
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__reset();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__start();
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 87 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type nt0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type ndt)
{
  /* atomic removed: atomic calls only */
  {

    /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type n = /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCounter__get() + 2;


    if ((/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__size_type )(n - nt0) < ndt) {
      n = nt0 + ndt;
      }
    /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__setAlarm(n);
  }
}

# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 263 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void )
#line 263
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareB__default__fired();
#line 48
}
#line 48
# 343 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void )
#line 343
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareC__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareC__default__fired();
#line 48
}
#line 48
# 126 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static bool TUnitP__TUnitState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(2U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 133 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__TUnitProcessing__testEqualsFailed(uint8_t testId, char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId)
#line 133
{
  Link_TUnitProcessingP__insert(TUNITPROCESSING_EVENT_TESTRESULT_EQUALS_FAILED, testId, failMsg, expected, actual, assertionId);
}

# 41 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void TUnitP__TUnitProcessing__testEqualsFailed(uint8_t testId, char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId){
#line 41
  Link_TUnitProcessingP__TUnitProcessing__testEqualsFailed(testId, failMsg, expected, actual, assertionId);
#line 41
}
#line 41
# 61 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static bool Link_TUnitProcessingP__SendState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(1U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 111 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void Link_TUnitProcessingP__SendState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
# 347 "/usr/local/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 137 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__TUnitProcessing__testNotEqualsFailed(uint8_t testId, char *failMsg, uint32_t actual, uint8_t assertionId)
#line 137
{
  Link_TUnitProcessingP__insert(TUNITPROCESSING_EVENT_TESTRESULT_NOTEQUALS_FAILED, testId, failMsg, actual, actual, assertionId);
}

# 43 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void TUnitP__TUnitProcessing__testNotEqualsFailed(uint8_t testId, char *failMsg, uint32_t actual, uint8_t assertionId){
#line 43
  Link_TUnitProcessingP__TUnitProcessing__testNotEqualsFailed(testId, failMsg, actual, assertionId);
#line 43
}
#line 43
# 141 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__TUnitProcessing__testResultIsBelowFailed(uint8_t testId, char *failMsg, uint32_t upperbound, uint32_t actual, uint8_t assertionId)
#line 141
{
  Link_TUnitProcessingP__insert(TUNITPROCESSING_EVENT_TESTRESULT_BELOW_FAILED, testId, failMsg, upperbound, actual, assertionId);
}

# 45 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void TUnitP__TUnitProcessing__testResultIsBelowFailed(uint8_t testId, char *failMsg, uint32_t upperbound, uint32_t actual, uint8_t assertionId){
#line 45
  Link_TUnitProcessingP__TUnitProcessing__testResultIsBelowFailed(testId, failMsg, upperbound, actual, assertionId);
#line 45
}
#line 45
# 145 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__TUnitProcessing__testResultIsAboveFailed(uint8_t testId, char *failMsg, uint32_t lowerbound, uint32_t actual, uint8_t assertionId)
#line 145
{
  Link_TUnitProcessingP__insert(TUNITPROCESSING_EVENT_TESTRESULT_ABOVE_FAILED, testId, failMsg, lowerbound, actual, assertionId);
}

# 47 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void TUnitP__TUnitProcessing__testResultIsAboveFailed(uint8_t testId, char *failMsg, uint32_t lowerbound, uint32_t actual, uint8_t assertionId){
#line 47
  Link_TUnitProcessingP__TUnitProcessing__testResultIsAboveFailed(testId, failMsg, lowerbound, actual, assertionId);
#line 47
}
#line 47
# 129 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__TUnitProcessing__testSuccess(uint8_t testId, uint8_t assertionId)
#line 129
{
  Link_TUnitProcessingP__insert(TUNITPROCESSING_EVENT_TESTRESULT_SUCCESS, testId, (void *)0, 0, 0, assertionId);
}

# 39 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void TUnitP__TUnitProcessing__testSuccess(uint8_t testId, uint8_t assertionId){
#line 39
  Link_TUnitProcessingP__TUnitProcessing__testSuccess(testId, assertionId);
#line 39
}
#line 39
# 149 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__TUnitProcessing__testFailed(uint8_t testId, char *failMsg, uint8_t assertionId)
#line 149
{
  Link_TUnitProcessingP__insert(TUNITPROCESSING_EVENT_TESTRESULT_FAILED, testId, failMsg, 0, 0, assertionId);
}

# 49 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void TUnitP__TUnitProcessing__testFailed(uint8_t testId, char *failMsg, uint8_t assertionId){
#line 49
  Link_TUnitProcessingP__TUnitProcessing__testFailed(testId, failMsg, assertionId);
#line 49
}
#line 49
# 124 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 79 "/opt/tinyos-2.x/tos/platforms/spensamote/new/PlatformP.nc"
static inline error_t PlatformP__SubInit__default__init(void )
{
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__SubInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 51 "/opt/tinyos-2.x/tos/platforms/spensamote/new/PlatformP.nc"
static inline error_t PlatformP__powerInit(void )
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 0;
  }


  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(uint8_t bit)
#line 50
{
#line 50
  * (volatile uint8_t * )37U |= 1 << bit;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(7);
#line 40
}
#line 40
inline static void LedsP__Led1__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(6);
#line 40
}
#line 40
inline static void LedsP__Led0__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__set(5);
#line 40
}
#line 40
# 56 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(uint8_t bit)
#line 56
{
#line 56
  * (volatile uint8_t * )36U |= 1 << bit;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(7);
#line 46
}
#line 46
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(6);
#line 46
}
#line 46
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(5);
#line 46
}
#line 46
# 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 38 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void )
#line 38
{
  if (!0U) {
      * (volatile uint8_t *)0x139 |= 1 << 1;
    }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__RadioInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioOffP__RFA1RadioOff__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 101 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__AdcInit__default__init(void )
#line 101
{
#line 101
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__AdcInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__AdcInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 211 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 0))
     | ((mode & 0x1) << 0);
  }
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareA__setMode(mode);
#line 70
}
#line 70
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Init__init(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__setMode(0);

  return SUCCESS;
}

# 116 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 3;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__start(void ){
#line 61
  HplAtmRfa1TimerMacP__Counter__start();
#line 61
}
#line 61
# 130 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode)
{
  mode &= (1 << 5) | (1 << 4);


  if ((mode & (1 << 4)) != 0) {
    * (volatile uint8_t *)0xB6 = 1 << 5;
    }
  /* atomic removed: atomic calls only */
#line 138
  * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~((1 << 5) | (1 << 4))) | mode;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__setMode(uint8_t mode){
#line 72
  HplAtmRfa1TimerMacP__Counter__setMode(mode);
#line 72
}
#line 72
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void )
{
  /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__setMode(48);
  /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__HplAtmegaCounter__start();

  return SUCCESS;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__start(void )
{
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__start(void ){
#line 61
  HplAtmRfa1Timer1P__Timer__start();
#line 61
}
#line 61
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0x80 = (* (volatile uint8_t *)0x80 & ~(0x3 << 0))
     | (((mode >> 3) & 0x3) << 0);

    * (volatile uint8_t *)0x81 = ((* (volatile uint8_t *)0x81 & ~((0x3 << 3) | (0x7 << 0)))
     | (((mode >> 5) & 0x3) << 3))
     | (((mode >> 0) & 0x7) << 0);
  }
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__setMode(uint8_t mode){
#line 72
  HplAtmRfa1Timer1P__Timer__setMode(mode);
#line 72
}
#line 72
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void )
{
  /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__setMode(2);
  /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__start();

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Counter62khz32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 72
{
  /* atomic removed: atomic calls only */


  {
    uint8_t wraps_ok = 0;
    uint8_t wraps = 255;
    uint16_t now;
    uint16_t prev_cycles_min = 0xffff;
    uint16_t prev_cycles_max = 0;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = 1 << 0;


    while (wraps_ok < 50 && --wraps != 0) 
      {
        while (* (volatile uint8_t *)0xB2 != 0) 
          ;

        now = * (volatile uint16_t *)0x84;

        while (* (volatile uint8_t *)0xB2 != 64) 
          ;

        MeasureClockC__cycles = * (volatile uint16_t *)0x84 - now;

        if (prev_cycles_min < MeasureClockC__cycles) {
          prev_cycles_min = MeasureClockC__cycles;
          }
#line 103
        if (prev_cycles_max > MeasureClockC__cycles) {
          prev_cycles_max = MeasureClockC__cycles;
          }
        if (prev_cycles_max - prev_cycles_min <= 1) {
            wraps_ok++;
          }
        else 
#line 108
          {
            wraps_ok = 0;
            prev_cycles_min = 0xffff;
            prev_cycles_max = 0;
          }
      }


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    while (* (volatile uint8_t *)0xB6 & ((1 << 1) | (1 << 0))) 
      ;
  }

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void )
{
  /* atomic removed: atomic calls only */

  {

    * (volatile uint8_t *)0x61 = 0x80;


    * (volatile uint8_t *)0x61 = 0x0F;
  }
#line 74
  return SUCCESS;
}

static inline error_t McuInitP__Init__init(void )
{
  error_t ok;

#line 80
  * (volatile uint8_t *)0x135 |= 1 << 4;
  * (volatile uint8_t *)0x134 |= 1 << 4;
  * (volatile uint8_t *)0x133 |= 1 << 4;
  * (volatile uint8_t *)0x132 |= 1 << 4;

  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;
  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;




  ok = McuInitP__systemClockInit();
  ok = ecombine(ok, McuInitP__MeasureClock__init());
  ok = ecombine(ok, McuInitP__TimerInit__init());
  ok = ecombine(ok, McuInitP__AdcInit__init());
  ok = ecombine(ok, McuInitP__RadioInit__init());

  return ok;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__McuInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 62 "/opt/tinyos-2.x/tos/platforms/spensamote/new/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;

  ok = PlatformP__McuInit__init();
  ok = ecombine(ok, PlatformP__LedsInit__init());
  ok = ecombine(ok, PlatformP__powerInit());
  ok = ecombine(ok, PlatformP__SubInit__init());

  return ok;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TUnitP__runDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(TUnitP__runDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 192 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__TestCase__done(uint8_t testId)
#line 192
{
  TUnitP__runDone__postTask();
}

# 41 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
inline static void TestChargerMonitorP__PGNotifySetFalse__done(void ){
#line 41
  TUnitP__TestCase__done(/*TestChargerMonitorC.PGNotifySetFalseC*/TestCaseC__7__TUNIT_TEST_ID);
#line 41
}
#line 41
inline static void TestChargerMonitorP__PGNotifySetTrue__done(void ){
#line 41
  TUnitP__TestCase__done(/*TestChargerMonitorC.PGNotifySetTrueC*/TestCaseC__6__TUNIT_TEST_ID);
#line 41
}
#line 41
# 289 "TestChargerMonitorP.nc"
static inline void TestChargerMonitorP__Timer__stop(void )
#line 289
{
  if (TestChargerMonitorP__testcase == 6) {
      assertTunitSuccess(38U);
#line 291
      ;
      TestChargerMonitorP__PGNotifySetTrue__done();
    }
  else {
#line 293
    if (TestChargerMonitorP__testcase == 7) {
        assertTunitFail("Should not be stopping the Timer", 39U);
#line 294
        ;
        TestChargerMonitorP__PGNotifySetFalse__done();
      }
    }
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void ChargerMonitorP__Timer__stop(void ){
#line 78
  TestChargerMonitorP__Timer__stop();
#line 78
}
#line 78
# 93 "../../ChargerMonitor/ChargerMonitorP.nc"
static inline void ChargerMonitorP__timerstop__runTask(void )
#line 93
{
  ChargerMonitorP__Timer__stop();
}

#line 85
static inline void ChargerMonitorP__Timer__fired(void )
#line 85
{
  ChargerMonitorP__checkLeds();
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TestChargerMonitorP__Timer__fired(void ){
#line 83
  ChargerMonitorP__Timer__fired();
#line 83
}
#line 83
# 298 "TestChargerMonitorP.nc"
static inline void TestChargerMonitorP__Timer__startPeriodic(uint32_t dt)
#line 298
{
  TestChargerMonitorP__Timer__fired();
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void ChargerMonitorP__Timer__startPeriodic(uint32_t dt){
#line 64
  TestChargerMonitorP__Timer__startPeriodic(dt);
#line 64
}
#line 64
# 89 "../../ChargerMonitor/ChargerMonitorP.nc"
static inline void ChargerMonitorP__timerstart__runTask(void )
#line 89
{
  ChargerMonitorP__Timer__startPeriodic(250);
}

# 138 "TestChargerMonitorP.nc"
static inline bool TestChargerMonitorP__PG__get(void )
#line 138
{
  if (((((TestChargerMonitorP__testcase == 0) | (TestChargerMonitorP__testcase == 1)) | (TestChargerMonitorP__testcase == 2)) | (TestChargerMonitorP__testcase == 4)) | (TestChargerMonitorP__testcase == 7)) {
      return FALSE;
    }
  else {
#line 141
    if (TestChargerMonitorP__testcase == 3) {
        switch (TestChargerMonitorP__shouldBeOff) {
            case 0: 
              return TRUE;
            break;
            case 1: 
              return FALSE;
            break;
            case 2: 
              return TRUE;
            break;
            case 3: 
              return TRUE;
            break;
          }
      }
    }
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool ChargerMonitorP__PG__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = TestChargerMonitorP__PG__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 160 "TestChargerMonitorP.nc"
static inline bool TestChargerMonitorP__STAT1__get(void )
#line 160
{
  if (TestChargerMonitorP__testcase == 0) {
      return TRUE;
    }
  else {
#line 163
    if ((TestChargerMonitorP__testcase == 1) | (TestChargerMonitorP__testcase == 7)) {
        return FALSE;
      }
    else {
#line 165
      if (TestChargerMonitorP__testcase == 2) {
          return TRUE;
        }
      else {
#line 167
        if (TestChargerMonitorP__testcase == 3) {
            switch (TestChargerMonitorP__shouldBeOff) {
                case 0: 
                  return TRUE;
                break;
                case 1: 
                  return FALSE;
                break;
                case 2: 
                  return TRUE;
                break;
                case 3: 
                  return FALSE;
                break;
              }
          }
        else {
#line 182
          if (TestChargerMonitorP__testcase == 4) {
              return TRUE;
            }
          }
        }
      }
    }
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool ChargerMonitorP__STAT1__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = TestChargerMonitorP__STAT1__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 187 "TestChargerMonitorP.nc"
static inline bool TestChargerMonitorP__STAT2__get(void )
#line 187
{
  if (TestChargerMonitorP__testcase == 0) {
      return FALSE;
    }
  else {
#line 190
    if ((TestChargerMonitorP__testcase == 1) | (TestChargerMonitorP__testcase == 7)) {
        return TRUE;
      }
    else {
#line 192
      if (TestChargerMonitorP__testcase == 2) {
          return TRUE;
        }
      else {
#line 194
        if (TestChargerMonitorP__testcase == 3) {
            switch (TestChargerMonitorP__shouldBeOff) {
                case 0: 
                  return TRUE;
                break;
                case 1: 
                  return TRUE;
                break;
                case 2: 
                  return FALSE;
                break;
                case 3: 
                  return FALSE;
                break;
              }
          }
        else {
#line 209
          if (TestChargerMonitorP__testcase == 4) {
              return TRUE;
            }
          }
        }
      }
    }
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool ChargerMonitorP__STAT2__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = TestChargerMonitorP__STAT2__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 41 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
inline static void TestChargerMonitorP__NotifyNotCalled__done(void ){
#line 41
  TUnitP__TestCase__done(/*TestChargerMonitorC.NotifyNotCalledC*/TestCaseC__5__TUNIT_TEST_ID);
#line 41
}
#line 41
inline static void TestChargerMonitorP__DidNotStartCharge__done(void ){
#line 41
  TUnitP__TestCase__done(/*TestChargerMonitorC.DidNotStartChargeC*/TestCaseC__4__TUNIT_TEST_ID);
#line 41
}
#line 41
inline static void TestChargerMonitorP__ErrorLedOn__done(void ){
#line 41
  TUnitP__TestCase__done(/*TestChargerMonitorC.ErrorLedOnC*/TestCaseC__2__TUNIT_TEST_ID);
#line 41
}
#line 41
inline static void TestChargerMonitorP__DoneChargingLedOn__done(void ){
#line 41
  TUnitP__TestCase__done(/*TestChargerMonitorC.DoneChargingLedOnC*/TestCaseC__1__TUNIT_TEST_ID);
#line 41
}
#line 41
inline static void TestChargerMonitorP__ChargingLedOn__done(void ){
#line 41
  TUnitP__TestCase__done(/*TestChargerMonitorC.ChargingLedOnC*/TestCaseC__0__TUNIT_TEST_ID);
#line 41
}
#line 41
# 87 "TestChargerMonitorP.nc"
static inline void TestChargerMonitorP__Notify__notify(uint8_t val)
#line 87
{

  if (TestChargerMonitorP__testcase == 0) {
      if (4 != val) {
#line 90
          assertEqualsFailed("Green LED should have been on..", (uint32_t )4, (uint32_t )val, 18U);
        }
      else 
#line 90
        {
#line 90
          assertTunitSuccess(19U);
#line 90
          ;
        }
#line 90
      ;
      TestChargerMonitorP__ChargingLedOn__done();
    }
  else {
#line 92
    if (TestChargerMonitorP__testcase == 1) {
        if (2 != val) {
#line 93
            assertEqualsFailed("Yellow LED should have been on..", (uint32_t )2, (uint32_t )val, 20U);
          }
        else 
#line 93
          {
#line 93
            assertTunitSuccess(21U);
#line 93
            ;
          }
#line 93
        ;
        TestChargerMonitorP__DoneChargingLedOn__done();
      }
    else {
#line 95
      if (TestChargerMonitorP__testcase == 2) {
          if (1 != val) {
#line 96
              assertEqualsFailed("Error Light (Red) should have been on..", (uint32_t )1, (uint32_t )val, 22U);
            }
          else 
#line 96
            {
#line 96
              assertTunitSuccess(23U);
#line 96
              ;
            }
#line 96
          ;
          TestChargerMonitorP__ErrorLedOn__done();
        }
      else {
#line 98
        if (TestChargerMonitorP__testcase == 3) {
            switch (TestChargerMonitorP__shouldBeOff) {
                case 0: 
                  if (0 != val) {
#line 101
                      assertEqualsFailed("All Lights should have been off..", (uint32_t )0, (uint32_t )val, 24U);
                    }
                  else 
#line 101
                    {
#line 101
                      assertTunitSuccess(25U);
#line 101
                      ;
                    }
#line 101
                ;
                break;
                case 1: 
                  if (0 == val) {
#line 104
                      assertNotEqualsFailed("All Lights should have been off..", (uint32_t )val, 26U);
                    }
                  else 
#line 104
                    {
#line 104
                      assertTunitSuccess(27U);
#line 104
                      ;
                    }
#line 104
                ;
                break;
                case 2: 
                  if (0 != val) {
#line 107
                      assertEqualsFailed("All Lights should have been off..", (uint32_t )0, (uint32_t )val, 28U);
                    }
                  else 
#line 107
                    {
#line 107
                      assertTunitSuccess(29U);
#line 107
                      ;
                    }
#line 107
                ;
                break;
                case 3: 
                  if (0 != val) {
#line 110
                      assertEqualsFailed("All Lights should have been off..", (uint32_t )0, (uint32_t )val, 30U);
                    }
                  else 
#line 110
                    {
#line 110
                      assertTunitSuccess(31U);
#line 110
                      ;
                    }
#line 110
                ;
                break;
              }
          }
        else {
#line 113
          if (TestChargerMonitorP__testcase == 4) {
              if (1 != val) {
#line 114
                  assertEqualsFailed("Error Light (Red) should have been on", (uint32_t )1, (uint32_t )val, 32U);
                }
              else 
#line 114
                {
#line 114
                  assertTunitSuccess(33U);
#line 114
                  ;
                }
#line 114
              ;
              TestChargerMonitorP__DidNotStartCharge__done();
            }
          else {
#line 116
            if (TestChargerMonitorP__testcase == 5) {
                assertTunitFail("Should not have called Notify!", 34U);
#line 117
                ;
                TestChargerMonitorP__NotifyNotCalled__done();
              }
            else {
#line 119
              if (TestChargerMonitorP__testcase == 6) {
                  assertTunitFail("Should not have called Notify!", 35U);
#line 120
                  ;
                  TestChargerMonitorP__PGNotifySetTrue__done();
                }
              else {
#line 122
                if (TestChargerMonitorP__testcase == 7) {
                    assertTunitSuccess(36U);
#line 123
                    ;
                    TestChargerMonitorP__PGNotifySetFalse__done();
                  }
                }
              }
            }
          }
        }
      }
    }
}

# 74 "/opt/tinyos-2.x/tos/interfaces/Notify.nc"
inline static void ChargerMonitorP__Notify__notify(ChargerMonitorP__Notify__val_t val){
#line 74
  TestChargerMonitorP__Notify__notify(val);
#line 74
}
#line 74
# 281 "/usr/local/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 60 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  Link_TUnitProcessingP__SerialEventSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 215 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x2b8fd404ee18, message_t * msg, error_t error){
#line 100
  switch (arg_0x2b8fd404ee18) {
#line 100
    case 0U:
#line 100
      /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x2b8fd404ee18, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 163 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x2b8fd40ac508, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x2b8fd40ac508, msg, error);
#line 110
}
#line 110
# 101 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x2b8fd41f9af0, message_t * msg, error_t error){
#line 100
  switch (arg_0x2b8fd41f9af0) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x2b8fd41f9af0, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

# 65 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

# 310 "/usr/local/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 122 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 131 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

# 539 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 539
{
  bool not_busy = FALSE;

#line 541
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 541
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 543
          EOFF;

          {
#line 543
            __nesc_atomic_end(__nesc_atomic); 
#line 543
            return __nesc_temp;
          }
        }
    }
#line 546
    __nesc_atomic_end(__nesc_atomic); }
#line 545
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 545
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 551
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x2b8fd41f8db8, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x2b8fd41f8db8) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x2b8fd41f8db8, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x2b8fd41f8db8){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x2b8fd41f8db8) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x2b8fd41f8db8);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 111 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 118 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void Link_TUnitProcessingP__SendState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(1U);
#line 56
}
#line 56
# 212 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void TUnitP__TUnitState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(2U, reqState);
#line 51
}
#line 51
# 295 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__tearDownOneTimeDone(void )
#line 295
{
  TUnitP__TUnitState__forceState(TUnitP__S_READY);
  TUnitP__TestState__toIdle();
}

#line 386
static inline void TUnitP__TearDownOneTime__default__run(void )
#line 386
{
  TUnitP__tearDownOneTimeDone();
}

# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
inline static void TUnitP__TearDownOneTime__run(void ){
#line 38
  TUnitP__TearDownOneTime__default__run();
#line 38
}
#line 38
# 184 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__TUnitProcessing__tearDownOneTime(void )
#line 184
{
  TUnitP__TUnitState__forceState(TUnitP__S_TEARDOWN_ONETIME);
  TUnitP__TearDownOneTime__run();
}

# 61 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void Link_TUnitProcessingP__TUnitProcessing__tearDownOneTime(void ){
#line 61
  TUnitP__TUnitProcessing__tearDownOneTime();
#line 61
}
#line 61
# 158 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__TUnitProcessing__pong(void )
#line 158
{
  Link_TUnitProcessingP__insert(TUNITPROCESSING_EVENT_PONG, 0xFF, (void *)0, 0, 0, 0xFF);
}

# 54 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void TUnitP__TUnitProcessing__pong(void ){
#line 54
  Link_TUnitProcessingP__TUnitProcessing__pong();
#line 54
}
#line 54
# 180 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__TUnitProcessing__ping(void )
#line 180
{
  TUnitP__TUnitProcessing__pong();
}

# 59 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void Link_TUnitProcessingP__TUnitProcessing__ping(void ){
#line 59
  TUnitP__TUnitProcessing__ping();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TUnitP__begin__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(TUnitP__begin);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 174 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__TUnitProcessing__run(void )
#line 174
{


  TUnitP__begin__postTask();
}

# 57 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void Link_TUnitProcessingP__TUnitProcessing__run(void ){
#line 57
  TUnitP__TUnitProcessing__run();
#line 57
}
#line 57
# 180 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__execute(TUnitProcessingMsg *inMsg)
#line 180
{
  switch (__nesc_ntoh_uint8(inMsg->cmd.nxdata)) {
      case TUNITPROCESSING_CMD_RUN: 
        Link_TUnitProcessingP__TUnitProcessing__run();
      break;

      case TUNITPROCESSING_CMD_PING: 
        Link_TUnitProcessingP__TUnitProcessing__ping();
      break;

      case TUNITPROCESSING_CMD_TEARDOWNONETIME: 
        Link_TUnitProcessingP__TUnitProcessing__tearDownOneTime();
      break;

      default: ;
    }
}

#line 112
static inline message_t *Link_TUnitProcessingP__SerialReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 112
{
  Link_TUnitProcessingP__execute(payload);
  return msg;
}

# 109 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x2b8fd40ab780, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2b8fd40ab780) {
#line 78
    case 255:
#line 78
      __nesc_result = Link_TUnitProcessingP__SerialReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x2b8fd40ab780, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x2b8fd41f9020, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x2b8fd41f9020) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x2b8fd41f9020, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x2b8fd41f8db8, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x2b8fd41f8db8) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x2b8fd41f8db8, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 170 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__SerialSplitControl__stopDone(error_t error)
#line 170
{
}

# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void Link_TUnitProcessingP__SerialState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(0U, reqState);
#line 51
}
#line 51
# 107 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__SerialSplitControl__stopDone(error_t error)
#line 107
{
  Link_TUnitProcessingP__SerialState__forceState(Link_TUnitProcessingP__S_OFF);
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  Link_TUnitProcessingP__SerialSplitControl__stopDone(error);
#line 138
  TUnitP__SerialSplitControl__stopDone(error);
#line 138
}
#line 138
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 170 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 170
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 158 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 158
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 370 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__SetUpOneTime__default__run(void )
#line 370
{
  TUnitP__setUpOneTimeDone();
}

# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
inline static void TUnitP__SetUpOneTime__run(void ){
#line 38
  TUnitP__SetUpOneTime__default__run();
#line 38
}
#line 38
# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void TUnitP__TestState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(3U, reqState);
#line 51
}
#line 51
#line 71
inline static uint8_t TUnitP__TUnitState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(2U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 154 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__SerialSplitControl__startDone(error_t error)
#line 154
{
  if (TUnitP__TUnitState__getState() == TUnitP__S_NOT_BOOTED) {
      TUnitP__TUnitState__forceState(TUnitP__S_READY);

      if (!TUnitP__driver) {




          TUnitP__TUnitState__forceState(TUnitP__S_RUNNING);
          TUnitP__TestState__forceState(TUnitP__S_SETUP_ONETIME);
          TUnitP__SetUpOneTime__run();
        }
    }
}

# 103 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__SerialSplitControl__startDone(error_t error)
#line 103
{
  Link_TUnitProcessingP__SerialState__forceState(Link_TUnitProcessingP__S_ON);
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  Link_TUnitProcessingP__SerialSplitControl__startDone(error);
#line 113
  TUnitP__SerialSplitControl__startDone(error);
#line 113
}
#line 113
# 187 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 187
{
  * (volatile uint8_t *)0xC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 164 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 164
{
  * (volatile uint8_t *)0xC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 152 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 152
{
  * (volatile uint8_t *)0xC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 192 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 192
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 182 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 182
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 96 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t TUnitP__TestState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(3U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 74 "/opt/tinyos-2.x/tos/interfaces/Notify.nc"
inline static void TestChargerMonitorP__BoolNotify__notify(TestChargerMonitorP__BoolNotify__val_t val){
#line 74
  ChargerMonitorP__PGNotify__notify(val);
#line 74
}
#line 74
# 35 "TestChargerMonitorP.nc"
static inline void TestChargerMonitorP__go(uint8_t testNum)
#line 35
{
  TestChargerMonitorP__testcase = testNum;


  TestChargerMonitorP__BoolNotify__notify(FALSE);
}

static inline void TestChargerMonitorP__ChargingLedOn__run(void )
#line 42
{
  TestChargerMonitorP__go(0);
}

static inline void TestChargerMonitorP__DoneChargingLedOn__run(void )
#line 46
{
  TestChargerMonitorP__go(1);
}

static inline void TestChargerMonitorP__ErrorLedOn__run(void )
#line 50
{
  TestChargerMonitorP__go(2);
}

# 41 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
inline static void TestChargerMonitorP__LedsOff__done(void ){
#line 41
  TUnitP__TestCase__done(/*TestChargerMonitorC.LedsOffC*/TestCaseC__3__TUNIT_TEST_ID);
#line 41
}
#line 41
# 55 "TestChargerMonitorP.nc"
static inline void TestChargerMonitorP__LedsOff__run(void )
#line 55
{
  TestChargerMonitorP__testcase = 3;
  for (TestChargerMonitorP__shouldBeOff; TestChargerMonitorP__shouldBeOff < 4; TestChargerMonitorP__shouldBeOff++) 
    {

      TestChargerMonitorP__Timer__startPeriodic(250);
    }
  TestChargerMonitorP__LedsOff__done();
}

static inline void TestChargerMonitorP__DidNotStartCharge__run(void )
#line 65
{
  TestChargerMonitorP__go(4);
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}






static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TestChargerMonitorP__TestTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 69 "TestChargerMonitorP.nc"
static inline void TestChargerMonitorP__NotifyNotCalled__run(void )
#line 69
{
  TestChargerMonitorP__testcase = 5;
  TestChargerMonitorP__TestTimer__startOneShot(2000);
}

static inline void TestChargerMonitorP__PGNotifySetTrue__run(void )
#line 74
{


  TestChargerMonitorP__testcase = 6;
  TestChargerMonitorP__BoolNotify__notify(TRUE);
}

static inline void TestChargerMonitorP__PGNotifySetFalse__run(void )
#line 81
{
  TestChargerMonitorP__testcase = 7;
  TestChargerMonitorP__BoolNotify__notify(FALSE);
}

# 378 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__TestCase__default__run(uint8_t testId)
#line 378
{
  TUnitP__runDone__postTask();
}

# 39 "/opt/tinyos-2.x-contrib/tunit/tos/interfaces/TestCase.nc"
inline static void TUnitP__TestCase__run(uint8_t arg_0x2b8fd3eb8d38){
#line 39
  switch (arg_0x2b8fd3eb8d38) {
#line 39
    case /*TestChargerMonitorC.ChargingLedOnC*/TestCaseC__0__TUNIT_TEST_ID:
#line 39
      TestChargerMonitorP__ChargingLedOn__run();
#line 39
      break;
#line 39
    case /*TestChargerMonitorC.DoneChargingLedOnC*/TestCaseC__1__TUNIT_TEST_ID:
#line 39
      TestChargerMonitorP__DoneChargingLedOn__run();
#line 39
      break;
#line 39
    case /*TestChargerMonitorC.ErrorLedOnC*/TestCaseC__2__TUNIT_TEST_ID:
#line 39
      TestChargerMonitorP__ErrorLedOn__run();
#line 39
      break;
#line 39
    case /*TestChargerMonitorC.LedsOffC*/TestCaseC__3__TUNIT_TEST_ID:
#line 39
      TestChargerMonitorP__LedsOff__run();
#line 39
      break;
#line 39
    case /*TestChargerMonitorC.DidNotStartChargeC*/TestCaseC__4__TUNIT_TEST_ID:
#line 39
      TestChargerMonitorP__DidNotStartCharge__run();
#line 39
      break;
#line 39
    case /*TestChargerMonitorC.NotifyNotCalledC*/TestCaseC__5__TUNIT_TEST_ID:
#line 39
      TestChargerMonitorP__NotifyNotCalled__run();
#line 39
      break;
#line 39
    case /*TestChargerMonitorC.PGNotifySetTrueC*/TestCaseC__6__TUNIT_TEST_ID:
#line 39
      TestChargerMonitorP__PGNotifySetTrue__run();
#line 39
      break;
#line 39
    case /*TestChargerMonitorC.PGNotifySetFalseC*/TestCaseC__7__TUNIT_TEST_ID:
#line 39
      TestChargerMonitorP__PGNotifySetFalse__run();
#line 39
      break;
#line 39
    default:
#line 39
      TUnitP__TestCase__default__run(arg_0x2b8fd3eb8d38);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 71 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static uint8_t TUnitP__TestState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(3U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 279 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__setUpDone(void )
#line 279
{
  if (TUnitP__TestState__getState() == TUnitP__S_SETUP) {
      TUnitP__TestState__forceState(TUnitP__S_RUN);
      TUnitP__TestCase__run(TUnitP__currentTest);
    }
}

#line 374
static inline void TUnitP__SetUp__default__run(void )
#line 374
{
  TUnitP__setUpDone();
}

# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
inline static void TUnitP__SetUp__run(void ){
#line 38
  TUnitP__SetUp__default__run();
#line 38
}
#line 38
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t ChargerMonitorP__timerstart__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ChargerMonitorP__timerstart);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t ChargerMonitorP__timerstop__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ChargerMonitorP__timerstop);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t Link_TUnitProcessingP__allDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Link_TUnitProcessingP__allDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 154 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__TUnitProcessing__allDone(void )
#line 154
{
  Link_TUnitProcessingP__allDone__postTask();
}

# 52 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitProcessing.nc"
inline static void TUnitP__TUnitProcessing__allDone(void ){
#line 52
  Link_TUnitProcessingP__TUnitProcessing__allDone();
#line 52
}
#line 52
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 560
static inline void SerialP__RunTx__runTask(void )
#line 560
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 577
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 586
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 590
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 599
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 606
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 606
        goInactive = SerialP__offPending;
#line 606
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 608
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 608
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 614
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 614
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 617
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 619
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 626
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 628
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 633
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 647
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 650
            __nesc_atomic_end(__nesc_atomic); 
#line 650
            return;
          }
        }
    }
#line 653
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 656
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 660
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 662
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 662
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 176 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 176
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0xC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 126 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 169
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 173 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__allDone__runTask(void )
#line 173
{
  if (Link_TUnitProcessingP__insert(TUNITPROCESSING_EVENT_ALLDONE, 0xFF, (void *)0, 0, 0, 0xFF) != SUCCESS) {
      Link_TUnitProcessingP__allDone__postTask();
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t Link_TUnitProcessingP__sendEventMsg__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Link_TUnitProcessingP__sendEventMsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t Link_TUnitProcessingP__SerialSplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 71 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static uint8_t Link_TUnitProcessingP__SerialState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(0U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x2b8fd406f020, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x2b8fd406f020, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 127 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 127
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 94 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 177 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 177
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 179
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 162 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 315 "/usr/local/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 158
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 160
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 255);
  return /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t Link_TUnitProcessingP__SerialEventSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 164 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__sendEventMsg__runTask(void )
#line 164
{
  if (Link_TUnitProcessingP__SerialEventSend__send(0, &Link_TUnitProcessingP__eventMsg[Link_TUnitProcessingP__sendingEventMsg], sizeof(TUnitProcessingMsg )) != SUCCESS) {
      if (Link_TUnitProcessingP__SerialState__getState() == Link_TUnitProcessingP__S_OFF) {
          Link_TUnitProcessingP__SerialSplitControl__start();
        }
      Link_TUnitProcessingP__sendEventMsg__postTask();
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t TUnitP__waitForSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(TUnitP__waitForSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 287 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__tearDownDone(void )
#line 287
{
  if (TUnitP__TestState__getState() == TUnitP__S_TEARDOWN) {
      TUnitP__TestState__toIdle();
      TUnitP__waitForSendDone__postTask();
    }
}

#line 382
static inline void TUnitP__TearDown__default__run(void )
#line 382
{
  TUnitP__tearDownDone();
}

# 38 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TestControl.nc"
inline static void TUnitP__TearDown__run(void ){
#line 38
  TUnitP__TearDown__default__run();
#line 38
}
#line 38
# 361 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__runDone__runTask(void )
#line 361
{
  if (TUnitP__TestState__getState() == TUnitP__S_RUN) {
      TUnitP__TestState__forceState(TUnitP__S_TEARDOWN);
      TUnitP__TearDown__run();
    }
}

#line 394
static inline bool TUnitP__StatsQuery__default__isIdle(void )
#line 394
{
  return TRUE;
}

# 46 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/StatsQuery.nc"
inline static bool TUnitP__StatsQuery__isIdle(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = TUnitP__StatsQuery__default__isIdle();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static bool TUnitP__SendState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(1U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 349 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__waitForSendDone__runTask(void )
#line 349
{
  if (TUnitP__SendState__isIdle() && TUnitP__StatsQuery__isIdle()) {

      TUnitP__currentTest++;
      TUnitP__attemptTest();
    }
  else {

      TUnitP__waitForSendDone__postTask();
    }
}

#line 339
static inline void TUnitP__begin__runTask(void )
#line 339
{
  if (TUnitP__TUnitState__getState() == TUnitP__S_READY) {
      TUnitP__TUnitState__forceState(TUnitP__S_RUNNING);
      TUnitP__TestState__forceState(TUnitP__S_SETUP_ONETIME);
      TUnitP__currentTest = 0;
      TUnitP__SetUpOneTime__run();
    }
}

# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 69 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaAlarmP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__stop(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__HplAtmegaCompare__stop();
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaAlarmC.AtmegaAlarmP*/AtmegaAlarmP__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void )
{
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 128 "TestChargerMonitorP.nc"
static inline void TestChargerMonitorP__TestTimer__fired(void )
#line 128
{

  if (TestChargerMonitorP__testcase == 5) {
      assertTunitSuccess(37U);
#line 131
      ;
      TestChargerMonitorP__NotifyNotCalled__done();
    }
  else 
#line 133
    {
    }
}

# 204 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b8fd3e5e108){
#line 83
  switch (arg_0x2b8fd3e5e108) {
#line 83
    case 0U:
#line 83
      TestChargerMonitorP__TestTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b8fd3e5e108);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 139 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type __nesc_temp = 
#line 93
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 120 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__amAddress(void )
#line 120
{
  am_addr_t myAddr;

  /* atomic removed: atomic calls only */
#line 122
  myAddr = ActiveMessageAddressC__addr;
  return myAddr;
}

#line 73
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 73
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t TUnitP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 319 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static inline void TUnitP__dummyCalls(void )
#line 319
{
  assertTunitSuccess(0U);
#line 320
  ;
  assertTunitFail("", 1U);
#line 321
  ;
  if (0 != 0) {
#line 322
      assertEqualsFailed("", (uint32_t )0, (uint32_t )0, 2U);
    }
  else 
#line 322
    {
#line 322
      assertTunitSuccess(3U);
#line 322
      ;
    }
#line 322
  ;
  if (0 == 0) {
#line 323
      assertNotEqualsFailed("", (uint32_t )0, 4U);
    }
  else 
#line 323
    {
#line 323
      assertTunitSuccess(5U);
#line 323
      ;
    }
#line 323
  ;
  if (0 <= 0) {
#line 324
      assertResultIsBelowFailed("", (uint32_t )0, (uint32_t )0, 6U);
    }
  else 
#line 324
    {
#line 324
      assertTunitSuccess(7U);
#line 324
      ;
    }
#line 324
  ;
  if (0 >= 0) {
#line 325
      assertResultIsAboveFailed("", (uint32_t )0, (uint32_t )0, 8U);
    }
  else 
#line 325
    {
#line 325
      assertTunitSuccess(9U);
#line 325
      ;
    }
#line 325
  ;

  if (!TRUE) {
#line 327
      assertTunitFail("", 10U);
#line 327
      ;
    }
  else 
#line 327
    {
#line 327
      assertTunitSuccess(11U);
#line 327
      ;
    }
#line 327
  ;
  if (FALSE) {
#line 328
      assertTunitFail("", 12U);
#line 328
      ;
    }
  else 
#line 328
    {
#line 328
      assertTunitSuccess(13U);
#line 328
      ;
    }
#line 328
  ;
  if ((void *)0 != (void *)0) {
#line 329
      assertTunitFail("NULL"" was not null.", 14U);
#line 329
      ;
    }
  else 
#line 329
    {
#line 329
      assertTunitSuccess(15U);
#line 329
      ;
    }
#line 329
  ;
  if ((void *)0 == (void *)0) {
#line 330
      assertTunitFail("NULL"" was null", 16U);
#line 330
      ;
    }
  else 
#line 330
    {
#line 330
      assertTunitSuccess(17U);
#line 330
      ;
    }
#line 330
  ;
  setTUnitTestName((void *)0);
#line 331
  ;
}

#line 143
static inline error_t TUnitP__Init__init(void )
#line 143
{
  TUnitP__dummyCalls();
  TUnitP__driver = TUnitP__ActiveMessageAddress__amAddress() == 0;
  return SUCCESS;
}

# 216 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (115200L == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (115200L == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 172 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 172
{
  return MeasureClockC__cycles / (baudrate >> 6) - 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 226 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 226
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(115200L);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0xC9 = ctrl.flat;

  return SUCCESS;
}

#line 132
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 132
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(115200L);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0xC1 = ctrl.flat;

  return SUCCESS;
}

# 81 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = StateImplP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, TUnitP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 105 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei" :  :  : "memory");}

# 97 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(m, len);
}

# 135 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(am_id_t arg_0x2b8fd406f020, message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(arg_0x2b8fd406f020, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 211 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 211
{
  return /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(0, m, len);
}

# 125 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(m, len);
}

# 135 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * Link_TUnitProcessingP__SerialEventSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*Link_TUnitProcessingC.SerialEventSendC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 92 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static inline void Link_TUnitProcessingP__Boot__booted(void )
#line 92
{
  int i;

#line 94
  for (i = 0; i < 5; i++) {
      __nesc_hton_uint8(((TUnitProcessingMsg *)Link_TUnitProcessingP__SerialEventSend__getPayload(&Link_TUnitProcessingP__eventMsg[i], 28))->cmd.nxdata, 0xFF);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    Link_TUnitProcessingP__writingEventMsg = 0;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    Link_TUnitProcessingP__sendingEventMsg = 0;
#line 98
    __nesc_atomic_end(__nesc_atomic); }
  Link_TUnitProcessingP__SerialSplitControl__start();
}

# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  Link_TUnitProcessingP__Boot__booted();
#line 60
}
#line 60
# 157 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 157
{
  return m1 < m2 ? m1 : m2;
}

# 437 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void )
{


  if (* (volatile uint8_t *)0xDC & (1 << 5)) {
    return ATM128_POWER_SAVE;
    }
  else {
#line 444
    return ATM128_POWER_DOWN;
    }
}

# 322 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void )
#line 322
{
  if (((* (volatile uint8_t *)0xC1 & (1 << 3) || * (volatile uint8_t *)0xC1 & (1 << 4)) || * (volatile uint8_t *)0xC9 & (1 << 3)) || * (volatile uint8_t *)0xC9 & (1 << 4)) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 326
    return ATM128_POWER_DOWN;
    }
}

# 364 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void )
{

  if (* (volatile uint8_t *)0x6F & ((((1 << 1) | (1 << 2)) | (1 << 3)) | (1 << 5))) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 370
    return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtmRfa1Timer1P__McuPowerOverride__lowestState();
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtm128UartP__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1TimerMacP__McuPowerOverride__lowestState());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
{
  if (McuSleepC__powerState < 0) {
      McuSleepC__powerState = McuSleepC__McuPowerOverride__lowestState();
      * (volatile uint8_t *)(0x33 + 0x20) = (* (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | __extension__ ({
#line 73
        uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[McuSleepC__powerState];
#line 73
        uint8_t __result;

#line 73
         __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
      }
      );
    }




  * (volatile uint8_t *)(0x33 + 0x20) |= 1 << 0;

   __asm volatile ("sei" :  :  : "memory");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli" :  :  : "memory");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 397 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          return TRUE;
      case SERIAL_PROTO_ACK: 
        default: 
          return FALSE;
    }
}

# 203 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 65 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 530 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 530
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 532
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 669 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 669
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 672
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 700
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 332 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 332
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 331 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 331
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 216 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__m_upper++;
    if ((/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__m_upper & /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__m_upper++;
    if ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__m_upper & /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__OVERFLOW_MASK) == 0) {
      /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void ){
#line 82
  /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__overflow(void )
{
  /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCounter.nc"
inline static void HplAtmRfa1Timer1P__Timer__overflow(void ){
#line 49
  /*CounterMcu32C.AtmegaCounterC.AtmegaCounterP*/AtmegaCounterP__1__HplAtmegaCounter__overflow();
#line 49
}
#line 49
# 162 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void )
#line 162
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareA__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareA__default__fired();
#line 48
}
#line 48
# 172 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareB__default__fired(void )
#line 172
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareB__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareB__default__fired();
#line 48
}
#line 48
# 182 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareC__default__fired(void )
#line 182
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareC__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareC__default__fired();
#line 48
}
#line 48
# 322 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void )
#line 322
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmegaCapture.nc"
inline static void HplAtmRfa1Timer1P__Capture__fired(void ){
#line 48
  HplAtmRfa1Timer1P__Capture__default__fired();
#line 48
}
#line 48
# 108 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
__attribute((signal))   void __vector_68(void )
#line 108
{
#line 108
  HplAtmRfa1TimerMacP__Counter__overflow();
}

#line 185
__attribute((signal))   void __vector_65(void )
#line 185
{
#line 185
  HplAtmRfa1TimerMacP__CompareA__fired();
}

# 170 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 107 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void )
{
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type now = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
#line 109
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type remaining;




  expires = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;


  remaining = (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 = now + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = remaining - /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 += /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = 0;
    }
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt((/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type )now << 6, 
  (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type )remaining << 6);
}

# 80 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 71 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static uint32_t HplAtmRfa1TimerMacP__Counter__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  /* atomic removed: atomic calls only */
  {
    time.ll = * (volatile uint8_t *)0xE1;
    time.lh = * (volatile uint8_t *)0xE2;
    time.hl = * (volatile uint8_t *)0xE3;
    time.hh = * (volatile uint8_t *)0xE4;
  }

  return time.full;
}

#line 265
__attribute((signal))   void __vector_66(void )
#line 265
{
#line 265
  HplAtmRfa1TimerMacP__CompareB__fired();
}

#line 345
__attribute((signal))   void __vector_67(void )
#line 345
{
#line 345
  HplAtmRfa1TimerMacP__CompareC__fired();
}

# 197 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
__attribute((noinline))   void assertEqualsFailed(char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId)
#line 197
{
  if (!TUnitP__TUnitState__isIdle()) {
      TUnitP__TUnitProcessing__testEqualsFailed(TUnitP__currentTest, failMsg, expected, actual, assertionId);
    }
}

# 133 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 203 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static error_t Link_TUnitProcessingP__insert(uint8_t cmd, uint8_t testId, char *failMsg, uint32_t expected, uint32_t actual, uint8_t assertionId)
#line 203
{
  unsigned char __nesc_temp43;
  unsigned char *__nesc_temp42;
#line 204
  TUnitProcessingMsg *tunitMsg;
  bool failed = (((cmd == TUNITPROCESSING_EVENT_TESTRESULT_FAILED
   || cmd == TUNITPROCESSING_EVENT_TESTRESULT_EQUALS_FAILED)
   || cmd == TUNITPROCESSING_EVENT_TESTRESULT_NOTEQUALS_FAILED)
   || cmd == TUNITPROCESSING_EVENT_TESTRESULT_BELOW_FAILED)
   || cmd == TUNITPROCESSING_EVENT_TESTRESULT_ABOVE_FAILED;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 211
    {
      while (TRUE) {
          if (__nesc_ntoh_uint8((tunitMsg = (TUnitProcessingMsg *)(&Link_TUnitProcessingP__eventMsg[Link_TUnitProcessingP__writingEventMsg])->data)->cmd.nxdata) == Link_TUnitProcessingP__EMPTY) {


              __nesc_hton_uint8(tunitMsg->cmd.nxdata, cmd);
              __nesc_hton_uint8(tunitMsg->id.nxdata, testId);
              __nesc_hton_uint8(tunitMsg->failMsgLength.nxdata, 0);
              __nesc_hton_uint32(tunitMsg->expected.nxdata, expected);
              __nesc_hton_uint32(tunitMsg->actual.nxdata, actual);
              __nesc_hton_uint8(tunitMsg->assertionId.nxdata, assertionId);

              memset(tunitMsg->failMsg, 0x0, 28 - 13);

              if (failed && failMsg != (void *)0) {
                  while (*failMsg && __nesc_ntoh_uint8(tunitMsg->failMsgLength.nxdata) < 28 - 13) {
                      __nesc_hton_uint8(tunitMsg->failMsg[__nesc_ntoh_uint8(tunitMsg->failMsgLength.nxdata)].nxdata, * failMsg++);
                      (__nesc_temp42 = tunitMsg->failMsgLength.nxdata, __nesc_hton_uint8(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint8(__nesc_temp42)) + 1), __nesc_temp43);
                    }
                }

              Link_TUnitProcessingP__writingEventMsg++;
              Link_TUnitProcessingP__writingEventMsg %= 5;

              if (failed && failMsg != (void *)0 && *failMsg) {

                  if (__nesc_ntoh_uint8(((TUnitProcessingMsg *)(&Link_TUnitProcessingP__eventMsg[Link_TUnitProcessingP__writingEventMsg])->data)->cmd.nxdata) != Link_TUnitProcessingP__EMPTY) {

                      __nesc_hton_int8(tunitMsg->lastMsg.nxdata, TRUE);
                      break;
                    }
                  else {

                      __nesc_hton_int8(tunitMsg->lastMsg.nxdata, FALSE);
                    }
                }
              else {

                  __nesc_hton_int8(tunitMsg->lastMsg.nxdata, TRUE);
                  break;
                }
            }
          else {

              Link_TUnitProcessingP__attemptEventSend();
              {
                unsigned char __nesc_temp = 
#line 256
                FAIL;

                {
#line 256
                  __nesc_atomic_end(__nesc_atomic); 
#line 256
                  return __nesc_temp;
                }
              }
            }
        }
    }
#line 261
    __nesc_atomic_end(__nesc_atomic); }
#line 261
  Link_TUnitProcessingP__attemptEventSend();
  return SUCCESS;
}





static void Link_TUnitProcessingP__attemptEventSend(void )
#line 269
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (Link_TUnitProcessingP__SendState__isIdle()) {

          if (__nesc_ntoh_uint8(((TUnitProcessingMsg *)(&Link_TUnitProcessingP__eventMsg[Link_TUnitProcessingP__sendingEventMsg])->data)->cmd.nxdata) != Link_TUnitProcessingP__EMPTY) {

              Link_TUnitProcessingP__SendState__forceState(Link_TUnitProcessingP__S_BUSY);
              Link_TUnitProcessingP__sendEventMsg__postTask();
            }
        }
    }
#line 279
    __nesc_atomic_end(__nesc_atomic); }
}

# 203 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
__attribute((noinline))   void assertNotEqualsFailed(char *failMsg, uint32_t actual, uint8_t assertionId)
#line 203
{
  if (!TUnitP__TUnitState__isIdle()) {
      TUnitP__TUnitProcessing__testNotEqualsFailed(TUnitP__currentTest, failMsg, actual, assertionId);
    }
}

__attribute((noinline))   void assertResultIsBelowFailed(char *failMsg, uint32_t upperbound, uint32_t actual, uint8_t assertionId)
#line 209
{
  if (!TUnitP__TUnitState__isIdle()) {
      TUnitP__TUnitProcessing__testResultIsBelowFailed(TUnitP__currentTest, failMsg, upperbound, actual, assertionId);
    }
}

__attribute((noinline))   void assertResultIsAboveFailed(char *failMsg, uint32_t lowerbound, uint32_t actual, uint8_t assertionId)
#line 215
{
  if (!TUnitP__TUnitState__isIdle()) {
      TUnitP__TUnitProcessing__testResultIsAboveFailed(TUnitP__currentTest, failMsg, lowerbound, actual, assertionId);
    }
}

__attribute((noinline))   void assertTunitSuccess(uint8_t assertionId)
#line 221
{
  if (!TUnitP__TUnitState__isIdle()) {
      TUnitP__TUnitProcessing__testSuccess(TUnitP__currentTest, assertionId);
    }
}

__attribute((noinline))   void assertTunitFail(char *failMsg, uint8_t assertionId)
#line 227
{
  if (!TUnitP__TUnitState__isIdle()) {
      TUnitP__TUnitProcessing__testFailed(TUnitP__currentTest, failMsg, assertionId);
    }
}




__attribute((noinline))   void setTUnitTestName(char *name)
#line 236
{
}

# 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        __eewr_byte_m128rfa1((void *)0x900, * (volatile uint8_t *)(0x34 + 0x20));
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b8fd3b87ab0){
#line 75
  switch (arg_0x2b8fd3b87ab0) {
#line 75
    case /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case TUnitP__begin:
#line 75
      TUnitP__begin__runTask();
#line 75
      break;
#line 75
    case TUnitP__waitForSendDone:
#line 75
      TUnitP__waitForSendDone__runTask();
#line 75
      break;
#line 75
    case TUnitP__runDone:
#line 75
      TUnitP__runDone__runTask();
#line 75
      break;
#line 75
    case Link_TUnitProcessingP__sendEventMsg:
#line 75
      Link_TUnitProcessingP__sendEventMsg__runTask();
#line 75
      break;
#line 75
    case Link_TUnitProcessingP__allDone:
#line 75
      Link_TUnitProcessingP__allDone__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case ChargerMonitorP__timerstart:
#line 75
      ChargerMonitorP__timerstart__runTask();
#line 75
      break;
#line 75
    case ChargerMonitorP__timerstop:
#line 75
      ChargerMonitorP__timerstop__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b8fd3b87ab0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 29 "../../ChargerMonitor/ChargerMonitorP.nc"
static void ChargerMonitorP__checkLeds(void )
{






  if (ChargerMonitorP__PG__get() == FALSE) {

      ChargerMonitorP__pg = 1;
    }
  else 
#line 40
    {

      ChargerMonitorP__pg = 0;
    }

  if (ChargerMonitorP__STAT1__get() == FALSE) {

      ChargerMonitorP__stat1 = 1;
    }
  else 
#line 48
    {

      ChargerMonitorP__stat1 = 0;
    }

  if (ChargerMonitorP__STAT2__get() == FALSE) {

      ChargerMonitorP__stat2 = 1;
    }
  else 
#line 56
    {

      ChargerMonitorP__stat2 = 0;
    }

  if (ChargerMonitorP__pg == 0) {

      ChargerMonitorP__combinedvar = 0;
    }
  else {
#line 64
    if (ChargerMonitorP__pg == 1 && ChargerMonitorP__stat1 == 1) {

        ChargerMonitorP__combinedvar = 2;
      }
    else {
#line 67
      if (ChargerMonitorP__pg == 1 && ChargerMonitorP__stat2 == 1) {

          ChargerMonitorP__combinedvar = 4;
        }
      else 
#line 70
        {

          ChargerMonitorP__combinedvar = 1;
        }
      }
    }
#line 75
  if (ChargerMonitorP__oldbin != ChargerMonitorP__combinedvar) {
      ChargerMonitorP__Notify__notify(ChargerMonitorP__combinedvar);
      ChargerMonitorP__oldbin = ChargerMonitorP__combinedvar;
      ChargerMonitorP__combinedvar = 0;
    }
  else {
    }
}

# 174 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 148 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 148
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 150
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 68
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 519 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 519
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 520
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 526
    __nesc_atomic_end(__nesc_atomic); }
}

# 118 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/Link_TUnitProcessingP.nc"
static void Link_TUnitProcessingP__SerialEventSend__sendDone(message_t *msg, error_t error)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    {
      __nesc_hton_uint8(((TUnitProcessingMsg *)(&Link_TUnitProcessingP__eventMsg[Link_TUnitProcessingP__sendingEventMsg])->data)->cmd.nxdata, Link_TUnitProcessingP__EMPTY);
      Link_TUnitProcessingP__sendingEventMsg++;
      Link_TUnitProcessingP__sendingEventMsg %= 5;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  Link_TUnitProcessingP__SendState__toIdle();
  Link_TUnitProcessingP__attemptEventSend();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static void TUnitP__TestState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(3U);
#line 56
}
#line 56
# 143 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static uint8_t StateImplP__State__getState(uint8_t id)
#line 143
{
  uint8_t theState;

#line 145
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    theState = StateImplP__state[id];
#line 145
    __nesc_atomic_end(__nesc_atomic); }
  return theState;
}

# 267 "/opt/tinyos-2.x-contrib/tunit/tos/lib/tunit/TUnitP.nc"
static void TUnitP__setUpOneTimeDone(void )
#line 267
{
  if (TUnitP__TestState__getState() == TUnitP__S_SETUP_ONETIME) {
      TUnitP__TestState__toIdle();
      if (!TUnitP__driver) {
          TUnitP__TestState__forceState(TUnitP__S_RUN);
        }
      else {
          TUnitP__attemptTest();
        }
    }
}

#line 301
static void TUnitP__attemptTest(void )
#line 301
{
  if (TUnitP__currentTest < 8U) {
      if (TUnitP__TestState__requestState(TUnitP__S_SETUP) == SUCCESS) {

          TUnitP__SetUp__run();
        }
    }
  else 
    {
      TUnitP__TUnitProcessing__allDone();
    }
}

# 97 "../../ChargerMonitor/ChargerMonitorP.nc"
static void ChargerMonitorP__PGNotify__notify(bool m_pinHigh)
#line 97
{

  ChargerMonitorP__pinHigh = m_pinHigh;



  if (ChargerMonitorP__pinHigh == FALSE) {
      ChargerMonitorP__timerstart__postTask();
    }
  else 
#line 105
    {
      ChargerMonitorP__timerstop__postTask();
    }
}

# 357 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 209 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 210
    {
      * (volatile uint8_t *)0xC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 213
    __nesc_atomic_end(__nesc_atomic); }
}

# 348 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 147 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 = t0;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = dt;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 135 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 216 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
#line 216
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0xC6);
    }
}

# 412 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
              SerialP__rxState = SerialP__RXSTATE_TOKEN;
              }
            else {
#line 433
              SerialP__rxState = SerialP__RXSTATE_INFO;
              }
#line 434
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
                          SerialP__ack_queue_push(SerialP__rxSeqno);
                          }
#line 459
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 296 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 222 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 222
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 313 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 313
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0xCE);
    }
}

#line 318
__attribute((interrupt))   void __vector_38(void )
#line 318
{
  HplAtm128UartP__HplUart1__txDone();
}

# 73 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
__attribute((signal))   void __vector_20(void )
#line 73
{
#line 73
  HplAtmRfa1Timer1P__Timer__overflow();
}

#line 164
__attribute((signal))   void __vector_17(void )
#line 164
{
#line 164
  HplAtmRfa1Timer1P__CompareA__fired();
}








__attribute((signal))   void __vector_18(void )
#line 174
{
#line 174
  HplAtmRfa1Timer1P__CompareB__fired();
}








__attribute((signal))   void __vector_19(void )
#line 184
{
#line 184
  HplAtmRfa1Timer1P__CompareC__fired();
}

#line 324
__attribute((signal))   void __vector_16(void )
#line 324
{
#line 324
  HplAtmRfa1Timer1P__Capture__fired();
}

