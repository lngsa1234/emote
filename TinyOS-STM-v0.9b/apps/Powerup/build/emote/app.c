#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef unsigned int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
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
# 27 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
#line 41
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
#line 63
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
#line 89
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
#line 120
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
#line 146
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
#line 168
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
#line 186
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
#line 200
typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 20 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/stdint.h" 3
typedef __int8_t int8_t;
typedef __uint8_t uint8_t;




typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int16_t int16_t;
typedef __uint16_t uint16_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int32_t int32_t;
typedef __uint32_t uint32_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int64_t int64_t;
typedef __uint64_t uint64_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;










typedef int int_fast8_t;
typedef unsigned int uint_fast8_t;








typedef int int_fast16_t;
typedef unsigned int uint_fast16_t;








typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;








typedef long long int int_fast64_t;
typedef long long unsigned int uint_fast64_t;
#line 153
typedef long long int intmax_t;








typedef long long unsigned int uintmax_t;






typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;
# 274 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/inttypes.h" 3
#line 271
typedef struct __nesc_unnamed4242 {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;
# 431 "/usr/lib/ncc/nesc_nx.h"
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
# 6 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 16 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/sys/_types.h" 3
typedef long _off_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ 
#line 31
typedef long long _off64_t;







typedef long _fpos_t;
#line 55
typedef signed int _ssize_t;
# 353 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/include/stddef.h" 3
typedef unsigned int wint_t;
# 79 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/sys/_types.h" 3
#line 71
typedef struct __nesc_unnamed4243 {

  int __count;
  union __nesc_unnamed4244 {

    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;




typedef void *_iconv_t;
# 22 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 38
struct _reent;






struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
  void *_fnargs[32];
  void *_dso_handle[32];

  __ULong _fntypes;


  __ULong _is_cxa;
};










struct _atexit {
  struct _atexit *_next;
  int _ind;

  void (*_fns[32])(void );
  struct _on_exit_args _on_exit_args;
};
#line 115
struct __sbuf {
  unsigned char *_base;
  int _size;
};
#line 179
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void *_cookie;

  int (*_read)(struct _reent *arg_0x2abf68917e10, void *arg_0x2abf68916100, char *arg_0x2abf689163a0, int arg_0x2abf68916608);

  int (*_write)(struct _reent *arg_0x2abf68916d18, void *arg_0x2abf6891c020, const char *arg_0x2abf6891c2f8, int arg_0x2abf6891c560);


  _fpos_t (*_seek)(struct _reent *arg_0x2abf6891ccb0, void *arg_0x2abf6891b020, _fpos_t arg_0x2abf6891b2d0, int arg_0x2abf6891b538);
  int (*_close)(struct _reent *arg_0x2abf6891bc48, void *arg_0x2abf6891a020);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
#line 285
typedef struct __sFILE __FILE;



struct _glue {

  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
#line 317
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
#line 569
struct _reent {

  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x2abf68921198);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4245 {

    struct __nesc_unnamed4246 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
      _mbstate_t _mblen_state;
      _mbstate_t _mbtowc_state;
      _mbstate_t _wctomb_state;
      char _l64a_buf[8];
      char _signal_buf[24];
      int _getdate_err;
      _mbstate_t _mbrlen_state;
      _mbstate_t _mbrtowc_state;
      _mbstate_t _mbsrtowcs_state;
      _mbstate_t _wcrtomb_state;
      _mbstate_t _wcsrtombs_state;
      int _h_errno;
    } _reent;



    struct __nesc_unnamed4247 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**_sig_func)(int arg_0x2abf6892e580);




  struct _glue __sglue;
  __FILE __sf[3];
};
#line 762
struct _reent;
struct _reent;
# 25 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/string.h" 3
void *memset(void *arg_0x2abf6893e680, int arg_0x2abf6893e8e8, size_t arg_0x2abf6893eb90);
# 34 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/stdlib.h" 3
#line 30
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;





#line 36
typedef struct __nesc_unnamed4249 {

  long quot;
  long rem;
} ldiv_t;








#line 45
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;




typedef int (*__compar_fn_t)(const void *arg_0x2abf68974b38, const void *arg_0x2abf68974e10);
# 14 "/usr/bin/../lib/gcc/arm-none-eabi/4.9.3/../../../../arm-none-eabi/include/math.h" 3
union __dmath {

  double d;
  __ULong i[2];
};

union __fmath {

  float f;
  __ULong i[1];
};


union __ldmath {

  long double ld;
  __ULong i[4];
};
#line 155
typedef float float_t;
typedef double double_t;
#line 520
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 584
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 23 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4251 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/mnt/shared/TinyOS-STM-v0.9b/tos/types/TinyError.h"
enum __nesc_unnamed4252 {
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
# 42 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/stm32exceptions.h"
void NMIException(void );


void HardFaultException(void );


void MemManageException(void );


void BusFaultException(void );


void UsageFaultException(void );

void __STM32ReservedException7(void );
void __STM32ReservedException8(void );
void __STM32ReservedException9(void );
void __STM32ReservedException10(void );


void SVCHandler(void );


void DebugMonitor(void );

void __STM32ReservedException13(void );


void PendSVC(void );


void SysTickHandler(void );


void WWDG_IRQHandler(void );


void PVD_IRQHandler(void );


void TAMPER_IRQHandler(void );


void RTC_IRQHandler(void );


void FLASH_IRQHandler(void );


void RCC_IRQHandler(void );


void EXTI0_IRQHandler(void );


void EXTI1_IRQHandler(void );


void EXTI2_IRQHandler(void );


void EXTI3_IRQHandler(void );


void EXTI4_IRQHandler(void );


void DMAChannel1_IRQHandler(void );


void DMAChannel2_IRQHandler(void );


void DMAChannel3_IRQHandler(void );


void DMAChannel4_IRQHandler(void );


void DMAChannel5_IRQHandler(void );


void DMAChannel6_IRQHandler(void );


void DMAChannel7_IRQHandler(void );


void ADC_IRQHandler(void );


void USB_HP_CAN_TX_IRQHandler(void );


void USB_LP_CAN_RX0_IRQHandler(void );


void CAN_RX1_IRQHandler(void );


void CAN_SCE_IRQHandler(void );


void EXTI9_5_IRQHandler(void );


void TIM1_BRK_IRQHandler(void );


void TIM1_UP_IRQHandler(void );


void TIM1_TRG_COM_IRQHandler(void );


void TIM1_CC_IRQHandler(void );


void TIM2_IRQHandler(void );


void TIM3_IRQHandler(void );


void TIM4_IRQHandler(void );


void I2C1_EV_IRQHandler(void );


void I2C1_ER_IRQHandler(void );


void I2C2_EV_IRQHandler(void );


void I2C2_ER_IRQHandler(void );


void SPI1_IRQHandler(void );


void SPI2_IRQHandler(void );


void USART1_IRQHandler(void );


void USART2_IRQHandler(void );


void USART3_IRQHandler(void );


void EXTI15_10_IRQHandler(void );


void USBWakeUp_IRQHandler(void );
# 36 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/stm32hardware.h"
typedef uint32_t __nesc_atomic_t;


__inline __nesc_atomic_t __nesc_atomic_start(void )  ;
#line 58
__inline void __nesc_atomic_end(__nesc_atomic_t oldState)  ;
#line 80
static __inline void __nesc_enable_interrupt();
#line 95
static __inline void __nesc_disable_interrupt();
#line 112
typedef uint8_t mcu_power_t  ;
# 458 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/stm32f10x.h"
#line 152
typedef enum IRQn {


  NonMaskableInt_IRQn = -14, 
  MemoryManagement_IRQn = -12, 
  BusFault_IRQn = -11, 
  UsageFault_IRQn = -10, 
  SVCall_IRQn = -5, 
  DebugMonitor_IRQn = -4, 
  PendSV_IRQn = -2, 
  SysTick_IRQn = -1, 


  WWDG_IRQn = 0, 
  PVD_IRQn = 1, 
  TAMPER_IRQn = 2, 
  RTC_IRQn = 3, 
  FLASH_IRQn = 4, 
  RCC_IRQn = 5, 
  EXTI0_IRQn = 6, 
  EXTI1_IRQn = 7, 
  EXTI2_IRQn = 8, 
  EXTI3_IRQn = 9, 
  EXTI4_IRQn = 10, 
  DMA1_Channel1_IRQn = 11, 
  DMA1_Channel2_IRQn = 12, 
  DMA1_Channel3_IRQn = 13, 
  DMA1_Channel4_IRQn = 14, 
  DMA1_Channel5_IRQn = 15, 
  DMA1_Channel6_IRQn = 16, 
  DMA1_Channel7_IRQn = 17, 
#line 369
  ADC1_2_IRQn = 18, 
  USB_HP_CAN1_TX_IRQn = 19, 
  USB_LP_CAN1_RX0_IRQn = 20, 
  CAN1_RX1_IRQn = 21, 
  CAN1_SCE_IRQn = 22, 
  EXTI9_5_IRQn = 23, 
  TIM1_BRK_TIM9_IRQn = 24, 
  TIM1_UP_TIM10_IRQn = 25, 
  TIM1_TRG_COM_TIM11_IRQn = 26, 
  TIM1_CC_IRQn = 27, 
  TIM2_IRQn = 28, 
  TIM3_IRQn = 29, 
  TIM4_IRQn = 30, 
  I2C1_EV_IRQn = 31, 
  I2C1_ER_IRQn = 32, 
  I2C2_EV_IRQn = 33, 
  I2C2_ER_IRQn = 34, 
  SPI1_IRQn = 35, 
  SPI2_IRQn = 36, 
  USART1_IRQn = 37, 
  USART2_IRQn = 38, 
  USART3_IRQn = 39, 
  EXTI15_10_IRQn = 40, 
  RTCAlarm_IRQn = 41, 
  USBWakeUp_IRQn = 42, 
  TIM8_BRK_TIM12_IRQn = 43, 
  TIM8_UP_TIM13_IRQn = 44, 
  TIM8_TRG_COM_TIM14_IRQn = 45, 
  TIM8_CC_IRQn = 46, 
  ADC3_IRQn = 47, 
  FSMC_IRQn = 48, 
  SDIO_IRQn = 49, 
  TIM5_IRQn = 50, 
  SPI3_IRQn = 51, 
  UART4_IRQn = 52, 
  UART5_IRQn = 53, 
  TIM6_IRQn = 54, 
  TIM7_IRQn = 55, 
  DMA2_Channel1_IRQn = 56, 
  DMA2_Channel2_IRQn = 57, 
  DMA2_Channel3_IRQn = 58, 
  DMA2_Channel4_5_IRQn = 59
} 
#line 458
IRQn_Type;
# 147 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/core_cm3.h"
#line 132
typedef struct __nesc_unnamed4253 {

  volatile uint32_t ISER[8];
  uint32_t RESERVED0[24];
  volatile uint32_t ICER[8];
  uint32_t RSERVED1[24];
  volatile uint32_t ISPR[8];
  uint32_t RESERVED2[24];
  volatile uint32_t ICPR[8];
  uint32_t RESERVED3[24];
  volatile uint32_t IABR[8];
  uint32_t RESERVED4[56];
  volatile uint8_t IP[240];
  uint32_t RESERVED5[644];
  volatile uint32_t STIR;
} NVIC_Type;
#line 176
#line 155
typedef struct __nesc_unnamed4254 {

  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4];
  volatile const uint32_t ISAR[5];
} SCB_Type;
#line 371
#line 365
typedef struct __nesc_unnamed4255 {

  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
#line 444
#line 410
typedef struct __nesc_unnamed4256 {

  volatile union __nesc_unnamed4257 {

    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT[32];
  uint32_t RESERVED0[864];
  volatile uint32_t TER;
  uint32_t RESERVED1[15];
  volatile uint32_t TPR;
  uint32_t RESERVED2[15];
  volatile uint32_t TCR;
  uint32_t RESERVED3[29];
  volatile uint32_t IWR;
  volatile uint32_t IRR;
  volatile uint32_t IMCR;
  uint32_t RESERVED4[43];
  volatile uint32_t LAR;
  volatile uint32_t LSR;
  uint32_t RESERVED5[6];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
#line 512
#line 503
typedef struct __nesc_unnamed4258 {

  uint32_t RESERVED0;
  volatile const uint32_t ICTR;



  uint32_t RESERVED1;
} 
InterruptType_Type;
#line 548
#line 535
typedef struct __nesc_unnamed4259 {

  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
#line 626
#line 620
typedef struct __nesc_unnamed4260 {

  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 78 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/system_stm32f10x.h"
extern void SystemInit(void );
# 473 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/stm32f10x.h"
typedef int32_t s32;
typedef int16_t s16;
typedef int8_t s8;

typedef const int32_t sc32;
typedef const int16_t sc16;
typedef const int8_t sc8;

typedef volatile int32_t vs32;
typedef volatile int16_t vs16;
typedef volatile int8_t vs8;

typedef volatile const int32_t vsc32;
typedef volatile const int16_t vsc16;
typedef volatile const int8_t vsc8;

typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

typedef const uint32_t uc32;
typedef const uint16_t uc16;
typedef const uint8_t uc8;

typedef volatile uint32_t vu32;
typedef volatile uint16_t vu16;
typedef volatile uint8_t vu8;

typedef volatile const uint32_t vuc32;
typedef volatile const uint16_t vuc16;
typedef volatile const uint8_t vuc8;

typedef enum __nesc_unnamed4261 {
#line 505
  RESET = 0, SET = !RESET
} 
#line 505
FlagStatus;
#line 505
typedef enum __nesc_unnamed4261 ITStatus;

typedef enum __nesc_unnamed4262 {
#line 507
  DISABLE = 0, ENABLE = !DISABLE
} 
#line 507
FunctionalState;


typedef enum __nesc_unnamed4263 {
#line 510
  ERROR = 0, SUCCESS_fwlib = !ERROR
} 
#line 510
ErrorStatus;
#line 550
#line 528
typedef struct __nesc_unnamed4264 {

  volatile uint32_t SR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  volatile uint32_t JOFR1;
  volatile uint32_t JOFR2;
  volatile uint32_t JOFR3;
  volatile uint32_t JOFR4;
  volatile uint32_t HTR;
  volatile uint32_t LTR;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t JSQR;
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  volatile uint32_t DR;
} ADC_TypeDef;
#line 649
#line 556
typedef struct __nesc_unnamed4265 {

  uint32_t RESERVED0;
  volatile uint16_t DR1;
  uint16_t RESERVED1;
  volatile uint16_t DR2;
  uint16_t RESERVED2;
  volatile uint16_t DR3;
  uint16_t RESERVED3;
  volatile uint16_t DR4;
  uint16_t RESERVED4;
  volatile uint16_t DR5;
  uint16_t RESERVED5;
  volatile uint16_t DR6;
  uint16_t RESERVED6;
  volatile uint16_t DR7;
  uint16_t RESERVED7;
  volatile uint16_t DR8;
  uint16_t RESERVED8;
  volatile uint16_t DR9;
  uint16_t RESERVED9;
  volatile uint16_t DR10;
  uint16_t RESERVED10;
  volatile uint16_t RTCCR;
  uint16_t RESERVED11;
  volatile uint16_t CR;
  uint16_t RESERVED12;
  volatile uint16_t CSR;
  uint16_t RESERVED13[5];
  volatile uint16_t DR11;
  uint16_t RESERVED14;
  volatile uint16_t DR12;
  uint16_t RESERVED15;
  volatile uint16_t DR13;
  uint16_t RESERVED16;
  volatile uint16_t DR14;
  uint16_t RESERVED17;
  volatile uint16_t DR15;
  uint16_t RESERVED18;
  volatile uint16_t DR16;
  uint16_t RESERVED19;
  volatile uint16_t DR17;
  uint16_t RESERVED20;
  volatile uint16_t DR18;
  uint16_t RESERVED21;
  volatile uint16_t DR19;
  uint16_t RESERVED22;
  volatile uint16_t DR20;
  uint16_t RESERVED23;
  volatile uint16_t DR21;
  uint16_t RESERVED24;
  volatile uint16_t DR22;
  uint16_t RESERVED25;
  volatile uint16_t DR23;
  uint16_t RESERVED26;
  volatile uint16_t DR24;
  uint16_t RESERVED27;
  volatile uint16_t DR25;
  uint16_t RESERVED28;
  volatile uint16_t DR26;
  uint16_t RESERVED29;
  volatile uint16_t DR27;
  uint16_t RESERVED30;
  volatile uint16_t DR28;
  uint16_t RESERVED31;
  volatile uint16_t DR29;
  uint16_t RESERVED32;
  volatile uint16_t DR30;
  uint16_t RESERVED33;
  volatile uint16_t DR31;
  uint16_t RESERVED34;
  volatile uint16_t DR32;
  uint16_t RESERVED35;
  volatile uint16_t DR33;
  uint16_t RESERVED36;
  volatile uint16_t DR34;
  uint16_t RESERVED37;
  volatile uint16_t DR35;
  uint16_t RESERVED38;
  volatile uint16_t DR36;
  uint16_t RESERVED39;
  volatile uint16_t DR37;
  uint16_t RESERVED40;
  volatile uint16_t DR38;
  uint16_t RESERVED41;
  volatile uint16_t DR39;
  uint16_t RESERVED42;
  volatile uint16_t DR40;
  uint16_t RESERVED43;
  volatile uint16_t DR41;
  uint16_t RESERVED44;
  volatile uint16_t DR42;
  uint16_t RESERVED45;
} BKP_TypeDef;
#line 661
#line 655
typedef struct __nesc_unnamed4266 {

  volatile uint32_t TIR;
  volatile uint32_t TDTR;
  volatile uint32_t TDLR;
  volatile uint32_t TDHR;
} CAN_TxMailBox_TypeDef;
#line 673
#line 667
typedef struct __nesc_unnamed4267 {

  volatile uint32_t RIR;
  volatile uint32_t RDTR;
  volatile uint32_t RDLR;
  volatile uint32_t RDHR;
} CAN_FIFOMailBox_TypeDef;









#line 679
typedef struct __nesc_unnamed4268 {

  volatile uint32_t FR1;
  volatile uint32_t FR2;
} CAN_FilterRegister_TypeDef;
#line 717
#line 689
typedef struct __nesc_unnamed4269 {

  volatile uint32_t MCR;
  volatile uint32_t MSR;
  volatile uint32_t TSR;
  volatile uint32_t RF0R;
  volatile uint32_t RF1R;
  volatile uint32_t IER;
  volatile uint32_t ESR;
  volatile uint32_t BTR;
  uint32_t RESERVED0[88];
  CAN_TxMailBox_TypeDef sTxMailBox[3];
  CAN_FIFOMailBox_TypeDef sFIFOMailBox[2];
  uint32_t RESERVED1[12];
  volatile uint32_t FMR;
  volatile uint32_t FM1R;
  uint32_t RESERVED2;
  volatile uint32_t FS1R;
  uint32_t RESERVED3;
  volatile uint32_t FFA1R;
  uint32_t RESERVED4;
  volatile uint32_t FA1R;
  uint32_t RESERVED5[8];

  CAN_FilterRegister_TypeDef sFilterRegister[14];
} 


CAN_TypeDef;
#line 731
#line 722
typedef struct __nesc_unnamed4270 {

  volatile uint32_t CFGR;
  volatile uint32_t OAR;
  volatile uint32_t PRES;
  volatile uint32_t ESR;
  volatile uint32_t CSR;
  volatile uint32_t TXD;
  volatile uint32_t RXD;
} CEC_TypeDef;
#line 744
#line 737
typedef struct __nesc_unnamed4271 {

  volatile uint32_t DR;
  volatile uint8_t IDR;
  uint8_t RESERVED0;
  uint16_t RESERVED1;
  volatile uint32_t CR;
} CRC_TypeDef;
#line 768
#line 750
typedef struct __nesc_unnamed4272 {

  volatile uint32_t CR;
  volatile uint32_t SWTRIGR;
  volatile uint32_t DHR12R1;
  volatile uint32_t DHR12L1;
  volatile uint32_t DHR8R1;
  volatile uint32_t DHR12R2;
  volatile uint32_t DHR12L2;
  volatile uint32_t DHR8R2;
  volatile uint32_t DHR12RD;
  volatile uint32_t DHR12LD;
  volatile uint32_t DHR8RD;
  volatile uint32_t DOR1;
  volatile uint32_t DOR2;
} 


DAC_TypeDef;









#line 774
typedef struct __nesc_unnamed4273 {

  volatile uint32_t IDCODE;
  volatile uint32_t CR;
} DBGMCU_TypeDef;
#line 790
#line 784
typedef struct __nesc_unnamed4274 {

  volatile uint32_t CCR;
  volatile uint32_t CNDTR;
  volatile uint32_t CPAR;
  volatile uint32_t CMAR;
} DMA_Channel_TypeDef;





#line 792
typedef struct __nesc_unnamed4275 {

  volatile uint32_t ISR;
  volatile uint32_t IFCR;
} DMA_TypeDef;
#line 867
#line 802
typedef struct __nesc_unnamed4276 {

  volatile uint32_t MACCR;
  volatile uint32_t MACFFR;
  volatile uint32_t MACHTHR;
  volatile uint32_t MACHTLR;
  volatile uint32_t MACMIIAR;
  volatile uint32_t MACMIIDR;
  volatile uint32_t MACFCR;
  volatile uint32_t MACVLANTR;
  uint32_t RESERVED0[2];
  volatile uint32_t MACRWUFFR;
  volatile uint32_t MACPMTCSR;
  uint32_t RESERVED1[2];
  volatile uint32_t MACSR;
  volatile uint32_t MACIMR;
  volatile uint32_t MACA0HR;
  volatile uint32_t MACA0LR;
  volatile uint32_t MACA1HR;
  volatile uint32_t MACA1LR;
  volatile uint32_t MACA2HR;
  volatile uint32_t MACA2LR;
  volatile uint32_t MACA3HR;
  volatile uint32_t MACA3LR;
  uint32_t RESERVED2[40];
  volatile uint32_t MMCCR;
  volatile uint32_t MMCRIR;
  volatile uint32_t MMCTIR;
  volatile uint32_t MMCRIMR;
  volatile uint32_t MMCTIMR;
  uint32_t RESERVED3[14];
  volatile uint32_t MMCTGFSCCR;
  volatile uint32_t MMCTGFMSCCR;
  uint32_t RESERVED4[5];
  volatile uint32_t MMCTGFCR;
  uint32_t RESERVED5[10];
  volatile uint32_t MMCRFCECR;
  volatile uint32_t MMCRFAECR;
  uint32_t RESERVED6[10];
  volatile uint32_t MMCRGUFCR;
  uint32_t RESERVED7[334];
  volatile uint32_t PTPTSCR;
  volatile uint32_t PTPSSIR;
  volatile uint32_t PTPTSHR;
  volatile uint32_t PTPTSLR;
  volatile uint32_t PTPTSHUR;
  volatile uint32_t PTPTSLUR;
  volatile uint32_t PTPTSAR;
  volatile uint32_t PTPTTHR;
  volatile uint32_t PTPTTLR;
  uint32_t RESERVED8[567];
  volatile uint32_t DMABMR;
  volatile uint32_t DMATPDR;
  volatile uint32_t DMARPDR;
  volatile uint32_t DMARDLAR;
  volatile uint32_t DMATDLAR;
  volatile uint32_t DMASR;
  volatile uint32_t DMAOMR;
  volatile uint32_t DMAIER;
  volatile uint32_t DMAMFBOCR;
  uint32_t RESERVED9[9];
  volatile uint32_t DMACHTDR;
  volatile uint32_t DMACHRDR;
  volatile uint32_t DMACHTBAR;
  volatile uint32_t DMACHRBAR;
} ETH_TypeDef;
#line 881
#line 873
typedef struct __nesc_unnamed4277 {

  volatile uint32_t IMR;
  volatile uint32_t EMR;
  volatile uint32_t RTSR;
  volatile uint32_t FTSR;
  volatile uint32_t SWIER;
  volatile uint32_t PR;
} EXTI_TypeDef;
#line 906
#line 887
typedef struct __nesc_unnamed4278 {

  volatile uint32_t ACR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t AR;
  volatile uint32_t RESERVED;
  volatile uint32_t OBR;
  volatile uint32_t WRPR;

  uint32_t RESERVED1[8];
  volatile uint32_t KEYR2;
  uint32_t RESERVED2;
  volatile uint32_t SR2;
  volatile uint32_t CR2;
  volatile uint32_t AR2;
} 
FLASH_TypeDef;
#line 922
#line 912
typedef struct __nesc_unnamed4279 {

  volatile uint16_t RDP;
  volatile uint16_t USER;
  volatile uint16_t Data0;
  volatile uint16_t Data1;
  volatile uint16_t WRP0;
  volatile uint16_t WRP1;
  volatile uint16_t WRP2;
  volatile uint16_t WRP3;
} OB_TypeDef;








#line 928
typedef struct __nesc_unnamed4280 {

  volatile uint32_t BTCR[8];
} FSMC_Bank1_TypeDef;








#line 937
typedef struct __nesc_unnamed4281 {

  volatile uint32_t BWTR[7];
} FSMC_Bank1E_TypeDef;
#line 954
#line 946
typedef struct __nesc_unnamed4282 {

  volatile uint32_t PCR2;
  volatile uint32_t SR2;
  volatile uint32_t PMEM2;
  volatile uint32_t PATT2;
  uint32_t RESERVED0;
  volatile uint32_t ECCR2;
} FSMC_Bank2_TypeDef;
#line 968
#line 960
typedef struct __nesc_unnamed4283 {

  volatile uint32_t PCR3;
  volatile uint32_t SR3;
  volatile uint32_t PMEM3;
  volatile uint32_t PATT3;
  uint32_t RESERVED0;
  volatile uint32_t ECCR3;
} FSMC_Bank3_TypeDef;
#line 981
#line 974
typedef struct __nesc_unnamed4284 {

  volatile uint32_t PCR4;
  volatile uint32_t SR4;
  volatile uint32_t PMEM4;
  volatile uint32_t PATT4;
  volatile uint32_t PIO4;
} FSMC_Bank4_TypeDef;
#line 996
#line 987
typedef struct __nesc_unnamed4285 {

  volatile uint32_t CRL;
  volatile uint32_t CRH;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t BRR;
  volatile uint32_t LCKR;
} GPIO_TypeDef;
#line 1009
#line 1002
typedef struct __nesc_unnamed4286 {

  volatile uint32_t EVCR;
  volatile uint32_t MAPR;
  volatile uint32_t EXTICR[4];
  uint32_t RESERVED0;
  volatile uint32_t MAPR2;
} AFIO_TypeDef;
#line 1034
#line 1014
typedef struct __nesc_unnamed4287 {

  volatile uint16_t CR1;
  uint16_t RESERVED0;
  volatile uint16_t CR2;
  uint16_t RESERVED1;
  volatile uint16_t OAR1;
  uint16_t RESERVED2;
  volatile uint16_t OAR2;
  uint16_t RESERVED3;
  volatile uint16_t DR;
  uint16_t RESERVED4;
  volatile uint16_t SR1;
  uint16_t RESERVED5;
  volatile uint16_t SR2;
  uint16_t RESERVED6;
  volatile uint16_t CCR;
  uint16_t RESERVED7;
  volatile uint16_t TRISE;
  uint16_t RESERVED8;
} I2C_TypeDef;
#line 1046
#line 1040
typedef struct __nesc_unnamed4288 {

  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
} IWDG_TypeDef;









#line 1052
typedef struct __nesc_unnamed4289 {

  volatile uint32_t CR;
  volatile uint32_t CSR;
} PWR_TypeDef;
#line 1084
#line 1062
typedef struct __nesc_unnamed4290 {

  volatile uint32_t CR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t APB2RSTR;
  volatile uint32_t APB1RSTR;
  volatile uint32_t AHBENR;
  volatile uint32_t APB2ENR;
  volatile uint32_t APB1ENR;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
} 









RCC_TypeDef;
#line 1112
#line 1090
typedef struct __nesc_unnamed4291 {

  volatile uint16_t CRH;
  uint16_t RESERVED0;
  volatile uint16_t CRL;
  uint16_t RESERVED1;
  volatile uint16_t PRLH;
  uint16_t RESERVED2;
  volatile uint16_t PRLL;
  uint16_t RESERVED3;
  volatile uint16_t DIVH;
  uint16_t RESERVED4;
  volatile uint16_t DIVL;
  uint16_t RESERVED5;
  volatile uint16_t CNTH;
  uint16_t RESERVED6;
  volatile uint16_t CNTL;
  uint16_t RESERVED7;
  volatile uint16_t ALRH;
  uint16_t RESERVED8;
  volatile uint16_t ALRL;
  uint16_t RESERVED9;
} RTC_TypeDef;
#line 1140
#line 1118
typedef struct __nesc_unnamed4292 {

  volatile uint32_t POWER;
  volatile uint32_t CLKCR;
  volatile uint32_t ARG;
  volatile uint32_t CMD;
  volatile const uint32_t RESPCMD;
  volatile const uint32_t RESP1;
  volatile const uint32_t RESP2;
  volatile const uint32_t RESP3;
  volatile const uint32_t RESP4;
  volatile uint32_t DTIMER;
  volatile uint32_t DLEN;
  volatile uint32_t DCTRL;
  volatile const uint32_t DCOUNT;
  volatile const uint32_t STA;
  volatile uint32_t ICR;
  volatile uint32_t MASK;
  uint32_t RESERVED0[2];
  volatile const uint32_t FIFOCNT;
  uint32_t RESERVED1[13];
  volatile uint32_t FIFO;
} SDIO_TypeDef;
#line 1166
#line 1146
typedef struct __nesc_unnamed4293 {

  volatile uint16_t CR1;
  uint16_t RESERVED0;
  volatile uint16_t CR2;
  uint16_t RESERVED1;
  volatile uint16_t SR;
  uint16_t RESERVED2;
  volatile uint16_t DR;
  uint16_t RESERVED3;
  volatile uint16_t CRCPR;
  uint16_t RESERVED4;
  volatile uint16_t RXCRCR;
  uint16_t RESERVED5;
  volatile uint16_t TXCRCR;
  uint16_t RESERVED6;
  volatile uint16_t I2SCFGR;
  uint16_t RESERVED7;
  volatile uint16_t I2SPR;
  uint16_t RESERVED8;
} SPI_TypeDef;
#line 1214
#line 1172
typedef struct __nesc_unnamed4294 {

  volatile uint16_t CR1;
  uint16_t RESERVED0;
  volatile uint16_t CR2;
  uint16_t RESERVED1;
  volatile uint16_t SMCR;
  uint16_t RESERVED2;
  volatile uint16_t DIER;
  uint16_t RESERVED3;
  volatile uint16_t SR;
  uint16_t RESERVED4;
  volatile uint16_t EGR;
  uint16_t RESERVED5;
  volatile uint16_t CCMR1;
  uint16_t RESERVED6;
  volatile uint16_t CCMR2;
  uint16_t RESERVED7;
  volatile uint16_t CCER;
  uint16_t RESERVED8;
  volatile uint16_t CNT;
  uint16_t RESERVED9;
  volatile uint16_t PSC;
  uint16_t RESERVED10;
  volatile uint16_t ARR;
  uint16_t RESERVED11;
  volatile uint16_t RCR;
  uint16_t RESERVED12;
  volatile uint16_t CCR1;
  uint16_t RESERVED13;
  volatile uint16_t CCR2;
  uint16_t RESERVED14;
  volatile uint16_t CCR3;
  uint16_t RESERVED15;
  volatile uint16_t CCR4;
  uint16_t RESERVED16;
  volatile uint16_t BDTR;
  uint16_t RESERVED17;
  volatile uint16_t DCR;
  uint16_t RESERVED18;
  volatile uint16_t DMAR;
  uint16_t RESERVED19;
} TIM_TypeDef;
#line 1236
#line 1220
typedef struct __nesc_unnamed4295 {

  volatile uint16_t SR;
  uint16_t RESERVED0;
  volatile uint16_t DR;
  uint16_t RESERVED1;
  volatile uint16_t BRR;
  uint16_t RESERVED2;
  volatile uint16_t CR1;
  uint16_t RESERVED3;
  volatile uint16_t CR2;
  uint16_t RESERVED4;
  volatile uint16_t CR3;
  uint16_t RESERVED5;
  volatile uint16_t GTPR;
  uint16_t RESERVED6;
} USART_TypeDef;










#line 1242
typedef struct __nesc_unnamed4296 {

  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;
# 67 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/inc/misc.h"
#line 49
typedef struct __nesc_unnamed4297 {

  uint8_t NVIC_IRQChannel;




  uint8_t NVIC_IRQChannelPreemptionPriority;



  uint8_t NVIC_IRQChannelSubPriority;



  FunctionalState NVIC_IRQChannelCmd;
} 

NVIC_InitTypeDef;
# 53 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/inc/stm32f10x_exti.h"
#line 49
typedef enum __nesc_unnamed4298 {

  EXTI_Mode_Interrupt = 0x00, 
  EXTI_Mode_Event = 0x04
} EXTIMode_TypeDef;
#line 66
#line 61
typedef enum __nesc_unnamed4299 {

  EXTI_Trigger_Rising = 0x08, 
  EXTI_Trigger_Falling = 0x0C, 
  EXTI_Trigger_Rising_Falling = 0x10
} EXTITrigger_TypeDef;
#line 88
#line 75
typedef struct __nesc_unnamed4300 {

  uint32_t EXTI_Line;


  EXTIMode_TypeDef EXTI_Mode;


  EXTITrigger_TypeDef EXTI_Trigger;


  FunctionalState EXTI_LineCmd;
} 
EXTI_InitTypeDef;
#line 164
void EXTI_ClearITPendingBit(uint32_t EXTI_Line);
# 52 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/inc/stm32f10x_rcc.h"
#line 45
typedef struct __nesc_unnamed4301 {

  uint32_t SYSCLK_Frequency;
  uint32_t HCLK_Frequency;
  uint32_t PCLK1_Frequency;
  uint32_t PCLK2_Frequency;
  uint32_t ADCCLK_Frequency;
} RCC_ClocksTypeDef;
#line 692
void RCC_APB2PeriphClockCmd(uint32_t RCC_APB2Periph, FunctionalState NewState);
# 62 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/inc/stm32f10x_gpio.h"
#line 57
typedef enum __nesc_unnamed4302 {

  GPIO_Speed_10MHz = 1, 
  GPIO_Speed_2MHz, 
  GPIO_Speed_50MHz
} GPIOSpeed_TypeDef;
#line 79
#line 70
typedef enum __nesc_unnamed4303 {
  GPIO_Mode_AIN = 0x0, 
  GPIO_Mode_IN_FLOATING = 0x04, 
  GPIO_Mode_IPD = 0x28, 
  GPIO_Mode_IPU = 0x48, 
  GPIO_Mode_Out_OD = 0x14, 
  GPIO_Mode_Out_PP = 0x10, 
  GPIO_Mode_AF_OD = 0x1C, 
  GPIO_Mode_AF_PP = 0x18
} GPIOMode_TypeDef;
#line 100
#line 90
typedef struct __nesc_unnamed4304 {

  uint16_t GPIO_Pin;


  GPIOSpeed_TypeDef GPIO_Speed;


  GPIOMode_TypeDef GPIO_Mode;
} 
GPIO_InitTypeDef;









#line 107
typedef enum __nesc_unnamed4305 {
  Bit_RESET = 0, 
  Bit_SET
} BitAction;
# 114 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/inc/stm32f10x_rtc.h"
ITStatus RTC_GetITStatus(uint16_t RTC_IT);
# 135 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/inc/stm32f10x_pwr.h"
FlagStatus PWR_GetFlagStatus(uint32_t PWR_FLAG);
void PWR_ClearFlag(uint32_t PWR_FLAG);
# 56 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/fwlib/inc/stm32f10x_flash.h"
#line 49
typedef enum __nesc_unnamed4306 {

  FLASH_BUSY = 1, 
  FLASH_ERROR_PG, 
  FLASH_ERROR_WRP, 
  FLASH_COMPLETE, 
  FLASH_TIMEOUT
} FLASH_Status;
# 32 "/mnt/shared/TinyOS-STM-v0.9b/tos/types/Leds.h"
enum __nesc_unnamed4307 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 51 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
# 31 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/HplSTM32Interrupt.nc"
static void PlatformP__Interrupt__fired(void );
# 59 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 51 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__default__init(void );
# 64 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 45 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2abf68aeca18);
# 46 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 61
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 54
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 49 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Boot.nc"
static void PowerupC__Boot__booted(void );
# 45 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0On(void );
# 30 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/GeneralIO.nc"
static void /*HplSTM32GeneralIOC.PortF.Bit6*/HplSTM32GeneralIOPinP__86__IO__clr(void );
# 29 "/mnt/shared/TinyOS-STM-v0.9b/tos/platforms/emote/PlatformP.nc"
static error_t PlatformP__Init__init(void );
#line 92
static void PlatformP__Interrupt__fired(void );
# 72 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/McuSleepC.nc"
static void McuSleepC__McuSleep__sleep(void );
#line 169
void RTCAlarm_IRQHandler(void )   ;
# 31 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/HplSTM32Interrupt.nc"
static void HplSTM32InterruptM__Irq__fired(void );
# 50 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/HplSTM32InterruptM.nc"
void NMIException(void )   ;






void HardFaultException(void )   ;





void MemManageException(void )   ;





void BusFaultException(void )   ;





void UsageFaultException(void )   ;




void __STM32ReservedException7(void )   ;




void __STM32ReservedException8(void )   ;




void __STM32ReservedException9(void )   ;




void __STM32ReservedException10(void )   ;





void SVCHandler(void )   ;





void DebugMonitor(void )   ;




void __STM32ReservedException13(void )   ;






void PendSVC(void )   ;





void SysTickHandler(void )   ;





void WWDG_IRQHandler(void )   ;





void PVD_IRQHandler(void )   ;





void TAMPER_IRQHandler(void )   ;
#line 157
void FLASH_IRQHandler(void )   ;





void RCC_IRQHandler(void )   ;





void EXTI0_IRQHandler(void )   ;





void EXTI1_IRQHandler(void )   ;





void EXTI2_IRQHandler(void )   ;





void EXTI3_IRQHandler(void )   ;





void EXTI4_IRQHandler(void )   ;





void DMAChannel1_IRQHandler(void )   ;





void DMAChannel2_IRQHandler(void )   ;





void DMAChannel3_IRQHandler(void )   ;





void DMAChannel4_IRQHandler(void )   ;





void DMAChannel5_IRQHandler(void )   ;





void DMAChannel6_IRQHandler(void )   ;





void DMAChannel7_IRQHandler(void )   ;





void ADC_IRQHandler(void )   ;





void USB_HP_CAN_TX_IRQHandler(void )   ;






void USB_LP_CAN_RX0_IRQHandler(void )   ;





void CAN_RX1_IRQHandler(void )   ;





void CAN_SCE_IRQHandler(void )   ;





void EXTI9_5_IRQHandler(void )   ;





void TIM1_BRK_IRQHandler(void )   ;





void TIM1_UP_IRQHandler(void )   ;





void TIM1_TRG_COM_IRQHandler(void )   ;





void TIM1_CC_IRQHandler(void )   ;





void TIM2_IRQHandler(void )   ;





void TIM3_IRQHandler(void )   ;





void TIM4_IRQHandler(void )   ;





void I2C1_EV_IRQHandler(void )   ;





void I2C1_ER_IRQHandler(void )   ;





void I2C2_EV_IRQHandler(void )   ;





void I2C2_ER_IRQHandler(void )   ;





void SPI1_IRQHandler(void )   ;





void SPI2_IRQHandler(void )   ;






void USART1_IRQHandler(void )   ;





void USART2_IRQHandler(void )   ;





void USART3_IRQHandler(void )   ;





void EXTI15_10_IRQHandler(void )   ;
#line 390
void USBWakeUp_IRQHandler(void )   ;
# 51 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 49 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 51 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 46 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 61
static void RealMainP__Scheduler__taskLoop(void );
#line 54
static bool RealMainP__Scheduler__runNextTask(void );
# 52 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/RealMainP.nc"
int main(void )   ;
#line 94
static error_t RealMainP__SoftwareInit__default__init(void );
# 64 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 45 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2abf68aeca18);
# 59 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 50 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4308 {

  SchedulerBasicP__NUM_TASKS = 0U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 113
static void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 138
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 164
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 45 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Leds.nc"
static void PowerupC__Leds__led0On(void );
# 44 "PowerupC.nc"
static void PowerupC__Boot__booted(void );
# 30 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__clr(void );
# 63 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/LedsP.nc"
static void LedsP__Leds__led0On(void );
# 55 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/gpio/HplSTM32GeneralIOPinP.nc"
static __inline void /*HplSTM32GeneralIOC.PortF.Bit6*/HplSTM32GeneralIOPinP__86__IO__clr(void );
# 80 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/stm32hardware.h"
static __inline void __nesc_enable_interrupt()
#line 80
{
  uint32_t statusReg = 0;









   __asm volatile ("CPSIE I");
  return;
}

#line 39
__inline  __nesc_atomic_t __nesc_atomic_start(void )
{
  uint32_t result = 0;
  uint32_t temp = 0;

  __nesc_enable_interrupt();










  return result;
}

__inline  void __nesc_atomic_end(__nesc_atomic_t oldState)
{
  uint32_t statusReg = 0;


  __nesc_disable_interrupt();
#line 77
  return;
}

# 67 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 72
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

# 55 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/gpio/HplSTM32GeneralIOPinP.nc"
static __inline void /*HplSTM32GeneralIOC.PortF.Bit6*/HplSTM32GeneralIOPinP__86__IO__clr(void )
#line 55
{
  GPIO_TypeDef *port = (GPIO_TypeDef *)1073814528U;


  port->BRR = 1 << 6;
}

# 95 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/stm32hardware.h"
static __inline void __nesc_disable_interrupt()
#line 95
{
  uint32_t statusReg = 0;









   __asm volatile ("CPSID I");
  return;
}

# 169 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/McuSleepC.nc"
  void RTCAlarm_IRQHandler(void )
{
  if (RTC_GetITStatus((uint16_t )0x0002) != RESET) 
    {

      EXTI_ClearITPendingBit((uint32_t )0x20000);


      if (PWR_GetFlagStatus((uint32_t )0x00000001) != RESET) 
        {

          PWR_ClearFlag((uint32_t )0x00000001);
        }
    }
  RTC_IRQHandler();
}

# 50 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/HplSTM32InterruptM.nc"
  void NMIException(void )
{
  while (1) ;
#line 52
  ;
  HplSTM32InterruptM__Irq__fired();
}

# 31 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/HplSTM32Interrupt.nc"
static void HplSTM32InterruptM__Irq__fired(void ){
#line 31
  PlatformP__Interrupt__fired();
#line 31
}
#line 31
# 92 "/mnt/shared/TinyOS-STM-v0.9b/tos/platforms/emote/PlatformP.nc"
static void PlatformP__Interrupt__fired(void )
{
}

# 57 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/HplSTM32InterruptM.nc"
  void HardFaultException(void )
{
  while (1) ;
#line 59
  ;
}


  void MemManageException(void )
{
  while (1) ;
#line 65
  ;
}


  void BusFaultException(void )
{
  while (1) ;
#line 71
  ;
}


  void UsageFaultException(void )
{
  while (1) ;
#line 77
  ;
}

  void __STM32ReservedException7(void )
{
  while (1) ;
#line 82
  ;
}

  void __STM32ReservedException8(void )
{
  while (1) ;
#line 87
  ;
}

  void __STM32ReservedException9(void )
{
  while (1) ;
#line 92
  ;
}

  void __STM32ReservedException10(void )
{
  while (1) ;
#line 97
  ;
}


  void SVCHandler(void )
{
  while (1) ;
#line 103
  ;
}


  void DebugMonitor(void )
{
  while (1) ;
#line 109
  ;
}

  void __STM32ReservedException13(void )
{
  while (1) ;
#line 114
  ;
}



  void PendSVC(void )
{
  while (1) ;
#line 121
  ;
}


  void SysTickHandler(void )
{
  while (1) ;
#line 127
  ;
}


  void WWDG_IRQHandler(void )
{
  while (1) ;
#line 133
  ;
}


  void PVD_IRQHandler(void )
{
  while (1) ;
#line 139
  ;
}


  void TAMPER_IRQHandler(void )
{
  while (1) ;
#line 145
  ;
}










  void FLASH_IRQHandler(void )
{
  while (1) ;
#line 159
  ;
}


  void RCC_IRQHandler(void )
{
  while (1) ;
#line 165
  ;
}


  void EXTI0_IRQHandler(void )
{
  while (1) ;
#line 171
  ;
}


  void EXTI1_IRQHandler(void )
{
  while (1) ;
#line 177
  ;
}


  void EXTI2_IRQHandler(void )
{
  while (1) ;
#line 183
  ;
}


  void EXTI3_IRQHandler(void )
{
  while (1) ;
#line 189
  ;
}


  void EXTI4_IRQHandler(void )
{
  while (1) ;
#line 195
  ;
}


  void DMAChannel1_IRQHandler(void )
{
  while (1) ;
#line 201
  ;
}


  void DMAChannel2_IRQHandler(void )
{
  while (1) ;
#line 207
  ;
}


  void DMAChannel3_IRQHandler(void )
{
  while (1) ;
#line 213
  ;
}


  void DMAChannel4_IRQHandler(void )
{
  while (1) ;
#line 219
  ;
}


  void DMAChannel5_IRQHandler(void )
{
  while (1) ;
#line 225
  ;
}


  void DMAChannel6_IRQHandler(void )
{
  while (1) ;
#line 231
  ;
}


  void DMAChannel7_IRQHandler(void )
{
  while (1) ;
#line 237
  ;
}


  void ADC_IRQHandler(void )
{
  while (1) ;
#line 243
  ;
}


  void USB_HP_CAN_TX_IRQHandler(void )
{
  while (1) ;
#line 249
  ;
}



  void USB_LP_CAN_RX0_IRQHandler(void )
{
  while (1) ;
#line 256
  ;
}


  void CAN_RX1_IRQHandler(void )
{
  while (1) ;
#line 262
  ;
}


  void CAN_SCE_IRQHandler(void )
{
  while (1) ;
#line 268
  ;
}


  void EXTI9_5_IRQHandler(void )
{
  while (1) ;
#line 274
  ;
}


  void TIM1_BRK_IRQHandler(void )
{
  while (1) ;
#line 280
  ;
}


  void TIM1_UP_IRQHandler(void )
{
  while (1) ;
#line 286
  ;
}


  void TIM1_TRG_COM_IRQHandler(void )
{
  while (1) ;
#line 292
  ;
}


  void TIM1_CC_IRQHandler(void )
{
  while (1) ;
#line 298
  ;
}


  void TIM2_IRQHandler(void )
{
  while (1) ;
#line 304
  ;
}


  void TIM3_IRQHandler(void )
{
  while (1) ;
#line 310
  ;
}


  void TIM4_IRQHandler(void )
{
  while (1) ;
#line 316
  ;
}


  void I2C1_EV_IRQHandler(void )
{
  while (1) ;
#line 322
  ;
}


  void I2C1_ER_IRQHandler(void )
{
  while (1) ;
#line 328
  ;
}


  void I2C2_EV_IRQHandler(void )
{
  while (1) ;
#line 334
  ;
}


  void I2C2_ER_IRQHandler(void )
{
  while (1) ;
#line 340
  ;
}


  void SPI1_IRQHandler(void )
{
  while (1) ;
#line 346
  ;
}


  void SPI2_IRQHandler(void )
{
  while (1) ;
#line 352
  ;
}



  void USART1_IRQHandler(void )
{
  while (1) ;
#line 359
  ;
}


  void USART2_IRQHandler(void )
{
  while (1) ;
#line 365
  ;
}


  void USART3_IRQHandler(void )
{
  while (1) ;
#line 371
  ;
}


  void EXTI15_10_IRQHandler(void )
{
  while (1) ;
#line 377
  ;
}











  void USBWakeUp_IRQHandler(void )
{
  while (1) ;
#line 392
  ;
}

# 52 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 46 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void ){
#line 46
  SchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 113 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/SchedulerBasicP.nc"
static void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 51 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 29 "/mnt/shared/TinyOS-STM-v0.9b/tos/platforms/emote/PlatformP.nc"
static error_t PlatformP__Init__init(void )
#line 29
{


  GPIO_InitTypeDef GPIO_InitStructure;


  SystemInit();





  RCC_APB2PeriphClockCmd((((((uint32_t )0x00000004 | (uint32_t )0x00000008) | (uint32_t )0x00000010) | (uint32_t )0x00000020) | (uint32_t )0x00000040) | (uint32_t )0x00000080, ENABLE);
#line 65
  return SUCCESS;
}

# 54 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Scheduler.nc"
static bool RealMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 123 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2abf68aeca18){
#line 64
    SchedulerBasicP__TaskBasic__default__runTask(arg_0x2abf68aeca18);
#line 64
}
#line 64
# 94 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/RealMainP.nc"
static error_t RealMainP__SoftwareInit__default__init(void )
#line 94
{
#line 94
  return SUCCESS;
}

# 51 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = RealMainP__SoftwareInit__default__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void ){
#line 49
  PowerupC__Boot__booted();
#line 49
}
#line 49
# 44 "PowerupC.nc"
static void PowerupC__Boot__booted(void )
#line 44
{
  PowerupC__Leds__led0On();
}

# 45 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Leds.nc"
static void PowerupC__Leds__led0On(void ){
#line 45
  LedsP__Leds__led0On();
#line 45
}
#line 45
# 63 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/LedsP.nc"
static void LedsP__Leds__led0On(void )
#line 63
{
  LedsP__Led0__clr();
  ;
#line 65
  ;
}

# 30 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__clr(void ){
#line 30
  /*HplSTM32GeneralIOC.PortF.Bit6*/HplSTM32GeneralIOPinP__86__IO__clr();
#line 30
}
#line 30
# 61 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__taskLoop(void ){
#line 61
  SchedulerBasicP__Scheduler__taskLoop();
#line 61
}
#line 61
# 138 "/mnt/shared/TinyOS-STM-v0.9b/tos/system/SchedulerBasicP.nc"
static void SchedulerBasicP__Scheduler__taskLoop(void )
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
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 59 "/mnt/shared/TinyOS-STM-v0.9b/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void ){
#line 59
  McuSleepC__McuSleep__sleep();
#line 59
}
#line 59
# 72 "/mnt/shared/TinyOS-STM-v0.9b/tos/chips/stm32/McuSleepC.nc"
static void McuSleepC__McuSleep__sleep(void )
#line 72
{

  uint16_t i = 0;

#line 154
  return;
}

