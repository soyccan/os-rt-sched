/*
 * ported from linux-5.5 source
 * after first compilation, run:
 * $ gcc -E -Iinclude -Iarch/x86/include include/linux/list.h > target_name
 *
 */
# 1 "include/linux/list.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "include/linux/list.h"




# 1 "include/linux/types.h" 1





# 1 "include/uapi/linux/types.h" 1




# 1 "/usr/include/x86_64-linux-gnu/asm/types.h" 1 3 4




# 1 "/usr/include/asm-generic/types.h" 1 3 4






# 1 "include/asm-generic/int-ll64.h" 1 3 4
# 11 "include/asm-generic/int-ll64.h" 3 4
# 1 "include/uapi/asm-generic/int-ll64.h" 1 3 4
# 12 "include/uapi/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "include/asm-generic/bitsperlong.h" 1 3 4




# 1 "include/uapi/asm-generic/bitsperlong.h" 1 3 4
# 6 "include/asm-generic/bitsperlong.h" 2 3 4
# 12 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 13 "include/uapi/asm-generic/int-ll64.h" 2 3 4








# 20 "include/uapi/asm-generic/int-ll64.h" 3 4
typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 12 "include/asm-generic/int-ll64.h" 2 3 4




typedef __s8 s8;
typedef __u8 u8;
typedef __s16 s16;
typedef __u16 u16;
typedef __s32 s32;
typedef __u32 u32;
typedef __s64 s64;
typedef __u64 u64;
# 8 "/usr/include/asm-generic/types.h" 2 3 4
# 6 "/usr/include/x86_64-linux-gnu/asm/types.h" 2 3 4
# 6 "include/uapi/linux/types.h" 2
# 14 "include/uapi/linux/types.h"
# 1 "/usr/include/linux/posix_types.h" 1 3 4




# 1 "include/linux/stddef.h" 1 3 4




# 1 "include/uapi/linux/stddef.h" 1 3 4

# 1 "include/linux/compiler_types.h" 1 3 4
# 3 "include/uapi/linux/stddef.h" 2 3 4
# 6 "include/linux/stddef.h" 2 3 4




enum {
 false = 0,
 true = 1
};
# 6 "/usr/include/linux/posix_types.h" 2 3 4
# 25 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "arch/x86/include/asm/posix_types.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 3 4
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;


typedef unsigned long __kernel_old_dev_t;


# 1 "/usr/include/asm-generic/posix_types.h" 1 3 4
# 15 "/usr/include/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;



typedef unsigned int __kernel_mode_t;



typedef int __kernel_pid_t;



typedef int __kernel_ipc_pid_t;



typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;



typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
# 72 "/usr/include/asm-generic/posix_types.h" 3 4
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;




typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_time_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 19 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 2 3 4
# 6 "arch/x86/include/asm/posix_types.h" 2 3 4
# 37 "/usr/include/linux/posix_types.h" 2 3 4
# 15 "include/uapi/linux/types.h" 2
# 29 "include/uapi/linux/types.h"

# 29 "include/uapi/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 52 "include/uapi/linux/types.h"
typedef unsigned __poll_t;
# 7 "include/linux/types.h" 2






typedef u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef unsigned short umode_t;
typedef u32 nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;

typedef _Bool bool;

typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;

typedef unsigned long uintptr_t;
# 46 "include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 55 "include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_old_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef u8 u_int8_t;
typedef s8 int8_t;
typedef u16 u_int16_t;
typedef s16 int16_t;
typedef u32 u_int32_t;
typedef s32 int32_t;



typedef u8 uint8_t;
typedef u16 uint16_t;
typedef u32 uint32_t;


typedef u64 uint64_t;
typedef u64 u_int64_t;
typedef s64 int64_t;
# 130 "include/linux/types.h"
typedef u64 sector_t;
typedef u64 blkcnt_t;
# 150 "include/linux/types.h"
typedef u32 dma_addr_t;


typedef unsigned int gfp_t;
typedef unsigned int slab_flags_t;
typedef unsigned int fmode_t;




typedef u32 phys_addr_t;


typedef phys_addr_t resource_size_t;





typedef unsigned long irq_hw_number_t;

typedef struct {
 int counter;
} atomic_t;







struct list_head {
 struct list_head *next, *prev;
};

struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};

struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 219 "include/linux/types.h"
struct callback_head {
 struct callback_head *next;
 void (*func)(struct callback_head *head);
} __attribute__((aligned(sizeof(void *))));


typedef void (*rcu_callback_t)(struct callback_head *head);
typedef void (*call_rcu_func_t)(struct callback_head *head, rcu_callback_t func);

typedef void (*swap_func_t)(void *a, void *b, int size);

typedef int (*cmp_r_func_t)(const void *a, const void *b, const void *priv);
typedef int (*cmp_func_t)(const void *a, const void *b);
# 6 "include/linux/list.h" 2

# 1 "include/linux/poison.h" 1
# 8 "include/linux/list.h" 2
# 1 "include/linux/const.h" 1



# 1 "include/uapi/linux/const.h" 1
# 5 "include/linux/const.h" 2
# 9 "include/linux/list.h" 2
# 1 "include/linux/kernel.h" 1





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 7 "include/linux/kernel.h" 2
# 1 "include/linux/limits.h" 1




# 1 "include/uapi/linux/limits.h" 1
# 6 "include/linux/limits.h" 2
# 8 "include/linux/kernel.h" 2
# 1 "include/linux/linkage.h" 1





# 1 "include/linux/stringify.h" 1
# 7 "include/linux/linkage.h" 2
# 1 "include/linux/export.h" 1
# 72 "include/linux/export.h"

# 72 "include/linux/export.h"
struct kernel_symbol {
 unsigned long value;
 const char *name;
 const char *namespace;
};
# 8 "include/linux/linkage.h" 2
# 1 "arch/x86/include/asm/linkage.h" 1
# 9 "include/linux/linkage.h" 2
# 9 "include/linux/kernel.h" 2


# 1 "include/linux/compiler.h" 1
# 308 "include/linux/compiler.h"
static inline void *offset_to_ptr(const int *off)
{
 return (void *)((unsigned long)off + *off);
}
# 12 "include/linux/kernel.h" 2
# 1 "include/linux/bitops.h" 1




# 1 "include/linux/bits.h" 1
# 6 "include/linux/bitops.h" 2
# 17 "include/linux/bitops.h"
extern unsigned int __sw_hweight8(unsigned int w);
extern unsigned int __sw_hweight16(unsigned int w);
extern unsigned int __sw_hweight32(unsigned int w);
extern unsigned long __sw_hweight64(__u64 w);





# 1 "arch/x86/include/asm/bitops.h" 1
# 17 "arch/x86/include/asm/bitops.h"
# 1 "arch/x86/include/asm/alternative.h" 1
# 10 "arch/x86/include/asm/alternative.h"
# 1 "arch/x86/include/asm/asm.h" 1
# 182 "arch/x86/include/asm/asm.h"
register unsigned long current_stack_pointer asm("rsp");
# 11 "arch/x86/include/asm/alternative.h" 2
# 58 "arch/x86/include/asm/alternative.h"
struct alt_instr {
 s32 instr_offset;
 s32 repl_offset;
 u16 cpuid;
 u8 instrlen;
 u8 replacementlen;
 u8 padlen;
} __packed;





extern int alternatives_patched;

extern void alternative_instructions(void);
extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;
# 87 "arch/x86/include/asm/alternative.h"
static inline void alternatives_smp_module_add(struct module *mod, char *name,
            void *locks, void *locks_end,
            void *text, void *text_end) {}
static inline void alternatives_smp_module_del(struct module *mod) {}
static inline void alternatives_enable_smp(void) {}
static inline int alternatives_text_reserved(void *start, void *end)
{
 return 0;
}
# 18 "arch/x86/include/asm/bitops.h" 2
# 1 "arch/x86/include/asm/rmwcc.h" 1
# 19 "arch/x86/include/asm/bitops.h" 2
# 1 "arch/x86/include/asm/barrier.h" 1





# 1 "arch/x86/include/asm/nops.h" 1
# 143 "arch/x86/include/asm/nops.h"
extern const unsigned char * const *ideal_nops;
extern void arch_init_ideal_nops(void);
# 7 "arch/x86/include/asm/barrier.h" 2
# 36 "arch/x86/include/asm/barrier.h"
static inline unsigned long array_index_mask_nospec(unsigned long index,
  unsigned long size)
{
 unsigned long mask;

 asm volatile ("cmp %1,%2; sbb %0,%0;"
   :"=r" (mask)
   :"g"(size),"r" (index)
   :"cc");
 return mask;
}
# 85 "arch/x86/include/asm/barrier.h"
# 1 "include/asm-generic/barrier.h" 1
# 86 "arch/x86/include/asm/barrier.h" 2
# 20 "arch/x86/include/asm/bitops.h" 2
# 51 "arch/x86/include/asm/bitops.h"
static
# 51 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 51 "arch/x86/include/asm/bitops.h"
                      void
arch_set_bit(long nr, volatile unsigned long *addr)
{
 if (__builtin_constant_p(nr)) {
  asm volatile("" "orb %1,%0"
   : "+m" (*(volatile char *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7)))
   : "memory");
 } else {
  asm volatile("" " " "btsq" " " " %1,%0"
   : : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");
 }
}

static
# 65 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 65 "arch/x86/include/asm/bitops.h"
                      void
arch___set_bit(long nr, volatile unsigned long *addr)
{
 asm volatile(" " "btsq" " " " %1,%0" : : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");
}

static
# 71 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 71 "arch/x86/include/asm/bitops.h"
                      void
arch_clear_bit(long nr, volatile unsigned long *addr)
{
 if (__builtin_constant_p(nr)) {
  asm volatile("" "andb %1,%0"
   : "+m" (*(volatile char *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)~(1 << ((nr) & 7))));
 } else {
  asm volatile("" " " "btrq" " " " %1,%0"
   : : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");
 }
}

static
# 84 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 84 "arch/x86/include/asm/bitops.h"
                      void
arch_clear_bit_unlock(long nr, volatile unsigned long *addr)
{
 barrier();
 arch_clear_bit(nr, addr);
}

static
# 91 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 91 "arch/x86/include/asm/bitops.h"
                      void
arch___clear_bit(long nr, volatile unsigned long *addr)
{
 asm volatile(" " "btrq" " " " %1,%0" : : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");
}

static
# 97 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 97 "arch/x86/include/asm/bitops.h"
                      bool
arch_clear_bit_unlock_is_negative_byte(long nr, volatile unsigned long *addr)
{
 bool negative;
 asm volatile("" "andb %2,%1"
  "\n\t/* output condition code " "s" "*/\n"
  : "=@cc" "s" (negative), "+m" (*(volatile char *) (addr))
  : "ir" ((char) ~(1 << nr)) : "memory");
 return negative;
}



static
# 110 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 110 "arch/x86/include/asm/bitops.h"
                      void
arch___clear_bit_unlock(long nr, volatile unsigned long *addr)
{
 arch___clear_bit(nr, addr);
}

static
# 116 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 116 "arch/x86/include/asm/bitops.h"
                      void
arch___change_bit(long nr, volatile unsigned long *addr)
{
 asm volatile(" " "btcq" " " " %1,%0" : : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");
}

static
# 122 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 122 "arch/x86/include/asm/bitops.h"
                      void
arch_change_bit(long nr, volatile unsigned long *addr)
{
 if (__builtin_constant_p(nr)) {
  asm volatile("" "xorb %1,%0"
   : "+m" (*(volatile char *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7))));
 } else {
  asm volatile("" " " "btcq" " " " %1,%0"
   : : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");
 }
}

static
# 135 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 135 "arch/x86/include/asm/bitops.h"
                      bool
arch_test_and_set_bit(long nr, volatile unsigned long *addr)
{
 return ({ bool c; asm volatile ("" " " "btsq" " " " %[val], " "%[var]" "\n\t/* output condition code " "c" "*/\n" : [var] "+m" (*addr), "=@cc" "c" (c) : [val] "Ir" (nr) : "memory"); c; });
}

static
# 141 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 141 "arch/x86/include/asm/bitops.h"
                      bool
arch_test_and_set_bit_lock(long nr, volatile unsigned long *addr)
{
 return arch_test_and_set_bit(nr, addr);
}

static
# 147 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 147 "arch/x86/include/asm/bitops.h"
                      bool
arch___test_and_set_bit(long nr, volatile unsigned long *addr)
{
 bool oldbit;

 asm(" " "btsq" " " " %2,%1"
     "\n\t/* output condition code " "c" "*/\n"
     : "=@cc" "c" (oldbit)
     : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");
 return oldbit;
}

static
# 159 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 159 "arch/x86/include/asm/bitops.h"
                      bool
arch_test_and_clear_bit(long nr, volatile unsigned long *addr)
{
 return ({ bool c; asm volatile ("" " " "btrq" " " " %[val], " "%[var]" "\n\t/* output condition code " "c" "*/\n" : [var] "+m" (*addr), "=@cc" "c" (c) : [val] "Ir" (nr) : "memory"); c; });
}
# 173 "arch/x86/include/asm/bitops.h"
static
# 173 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 173 "arch/x86/include/asm/bitops.h"
                      bool
arch___test_and_clear_bit(long nr, volatile unsigned long *addr)
{
 bool oldbit;

 asm volatile(" " "btrq" " " " %2,%1"
       "\n\t/* output condition code " "c" "*/\n"
       : "=@cc" "c" (oldbit)
       : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");
 return oldbit;
}

static
# 185 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 185 "arch/x86/include/asm/bitops.h"
                      bool
arch___test_and_change_bit(long nr, volatile unsigned long *addr)
{
 bool oldbit;

 asm volatile(" " "btcq" " " " %2,%1"
       "\n\t/* output condition code " "c" "*/\n"
       : "=@cc" "c" (oldbit)
       : "m" (*(volatile long *) (addr)), "Ir" (nr) : "memory");

 return oldbit;
}

static
# 198 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 198 "arch/x86/include/asm/bitops.h"
                      bool
arch_test_and_change_bit(long nr, volatile unsigned long *addr)
{
 return ({ bool c; asm volatile ("" " " "btcq" " " " %[val], " "%[var]" "\n\t/* output condition code " "c" "*/\n" : [var] "+m" (*addr), "=@cc" "c" (c) : [val] "Ir" (nr) : "memory"); c; });
}

static
# 204 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 204 "arch/x86/include/asm/bitops.h"
                      bool constant_test_bit(long nr, const volatile unsigned long *addr)
{
 return ((1UL << (nr & (
# 206 "arch/x86/include/asm/bitops.h" 3 4
                       32
# 206 "arch/x86/include/asm/bitops.h"
                                    -1))) &
  (addr[nr >> 5])) != 0;
}

static
# 210 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 210 "arch/x86/include/asm/bitops.h"
                      bool variable_test_bit(long nr, volatile const unsigned long *addr)
{
 bool oldbit;

 asm volatile(" " "btq" " " " %2,%1"
       "\n\t/* output condition code " "c" "*/\n"
       : "=@cc" "c" (oldbit)
       : "m" (*(unsigned long *)addr), "Ir" (nr) : "memory");

 return oldbit;
}
# 233 "arch/x86/include/asm/bitops.h"
static
# 233 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 233 "arch/x86/include/asm/bitops.h"
                      unsigned long __ffs(unsigned long word)
{
 asm("rep; bsf %1,%0"
  : "=r" (word)
  : "rm" (word));
 return word;
}







static
# 247 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 247 "arch/x86/include/asm/bitops.h"
                      unsigned long ffz(unsigned long word)
{
 asm("rep; bsf %1,%0"
  : "=r" (word)
  : "r" (~word));
 return word;
}







static
# 261 "arch/x86/include/asm/bitops.h" 3 4
      inline
# 261 "arch/x86/include/asm/bitops.h"
                      unsigned long __fls(unsigned long word)
{
 asm("bsr %1,%0"
     : "=r" (word)
     : "rm" (word));
 return word;
}
# 27 "include/linux/bitops.h" 2
# 62 "include/linux/bitops.h"
static inline int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static
# 70 "include/linux/bitops.h" 3 4
      inline
# 70 "include/linux/bitops.h"
                      unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
}






static inline __u64 rol64(__u64 word, unsigned int shift)
{
 return (word << (shift & 63)) | (word >> ((-shift) & 63));
}






static inline __u64 ror64(__u64 word, unsigned int shift)
{
 return (word >> (shift & 63)) | (word << ((-shift) & 63));
}






static inline __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << (shift & 31)) | (word >> ((-shift) & 31));
}






static inline __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> (shift & 31)) | (word << ((-shift) & 31));
}






static inline __u16 rol16(__u16 word, unsigned int shift)
{
 return (word << (shift & 15)) | (word >> ((-shift) & 15));
}






static inline __u16 ror16(__u16 word, unsigned int shift)
{
 return (word >> (shift & 15)) | (word << ((-shift) & 15));
}






static inline __u8 rol8(__u8 word, unsigned int shift)
{
 return (word << (shift & 7)) | (word >> ((-shift) & 7));
}






static inline __u8 ror8(__u8 word, unsigned int shift)
{
 return (word >> (shift & 7)) | (word << ((-shift) & 7));
}
# 162 "include/linux/bitops.h"
static inline __s32 sign_extend32(__u32 value, int index)
{
 __u8 shift = 31 - index;
 return (__s32)(value << shift) >> shift;
}






static inline __s64 sign_extend64(__u64 value, int index)
{
 __u8 shift = 63 - index;
 return (__s64)(value << shift) >> shift;
}

static inline unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}

static inline int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}







static inline int get_count_order_long(unsigned long l)
{
 if (l == 0UL)
  return -1;
 else if (l & (l - 1UL))
  return (int)fls_long(l);
 else
  return (int)fls_long(l) - 1;
}
# 220 "include/linux/bitops.h"
static inline unsigned long __ffs64(u64 word)
{

 if (((u32)word) == 0UL)
  return __ffs((u32)(word >> 32)) + 32;



 return __ffs((unsigned long)word);
}







static
# 237 "include/linux/bitops.h" 3 4
      inline
# 237 "include/linux/bitops.h"
                      void assign_bit(long nr, volatile unsigned long *addr,
           bool value)
{
 if (value)
  set_bit(nr, addr);
 else
  clear_bit(nr, addr);
}

static
# 246 "include/linux/bitops.h" 3 4
      inline
# 246 "include/linux/bitops.h"
                      void __assign_bit(long nr, volatile unsigned long *addr,
      bool value)
{
 if (value)
  __set_bit(nr, addr);
 else
  __clear_bit(nr, addr);
}
# 13 "include/linux/kernel.h" 2
# 1 "include/linux/log2.h" 1
# 21 "include/linux/log2.h"
static inline __attribute__((const))
int __ilog2_u32(u32 n)
{
 return fls(n) - 1;
}



static inline __attribute__((const))
int __ilog2_u64(u64 n)
{
 return fls64(n) - 1;
}
# 44 "include/linux/log2.h"
static inline __attribute__((const))
bool is_power_of_2(unsigned long n)
{
 return (n != 0 && ((n & (n - 1)) == 0));
}





static inline __attribute__((const))
unsigned long __roundup_pow_of_two(unsigned long n)
{
 return 1UL << fls_long(n - 1);
}





static inline __attribute__((const))
unsigned long __rounddown_pow_of_two(unsigned long n)
{
 return 1UL << (fls_long(n) - 1);
}
# 197 "include/linux/log2.h"
static inline __attribute_const__
int __order_base_2(unsigned long n)
{
 return n > 1 ? ( __builtin_constant_p(n - 1) ? ( __builtin_constant_p(n - 1) ? ( (n - 1) < 2 ? 0 : (n - 1) & (1ULL << 63) ? 63 : (n - 1) & (1ULL << 62) ? 62 : (n - 1) & (1ULL << 61) ? 61 : (n - 1) & (1ULL << 60) ? 60 : (n - 1) & (1ULL << 59) ? 59 : (n - 1) & (1ULL << 58) ? 58 : (n - 1) & (1ULL << 57) ? 57 : (n - 1) & (1ULL << 56) ? 56 : (n - 1) & (1ULL << 55) ? 55 : (n - 1) & (1ULL << 54) ? 54 : (n - 1) & (1ULL << 53) ? 53 : (n - 1) & (1ULL << 52) ? 52 : (n - 1) & (1ULL << 51) ? 51 : (n - 1) & (1ULL << 50) ? 50 : (n - 1) & (1ULL << 49) ? 49 : (n - 1) & (1ULL << 48) ? 48 : (n - 1) & (1ULL << 47) ? 47 : (n - 1) & (1ULL << 46) ? 46 : (n - 1) & (1ULL << 45) ? 45 : (n - 1) & (1ULL << 44) ? 44 : (n - 1) & (1ULL << 43) ? 43 : (n - 1) & (1ULL << 42) ? 42 : (n - 1) & (1ULL << 41) ? 41 : (n - 1) & (1ULL << 40) ? 40 : (n - 1) & (1ULL << 39) ? 39 : (n - 1) & (1ULL << 38) ? 38 : (n - 1) & (1ULL << 37) ? 37 : (n - 1) & (1ULL << 36) ? 36 : (n - 1) & (1ULL << 35) ? 35 : (n - 1) & (1ULL << 34) ? 34 : (n - 1) & (1ULL << 33) ? 33 : (n - 1) & (1ULL << 32) ? 32 : (n - 1) & (1ULL << 31) ? 31 : (n - 1) & (1ULL << 30) ? 30 : (n - 1) & (1ULL << 29) ? 29 : (n - 1) & (1ULL << 28) ? 28 : (n - 1) & (1ULL << 27) ? 27 : (n - 1) & (1ULL << 26) ? 26 : (n - 1) & (1ULL << 25) ? 25 : (n - 1) & (1ULL << 24) ? 24 : (n - 1) & (1ULL << 23) ? 23 : (n - 1) & (1ULL << 22) ? 22 : (n - 1) & (1ULL << 21) ? 21 : (n - 1) & (1ULL << 20) ? 20 : (n - 1) & (1ULL << 19) ? 19 : (n - 1) & (1ULL << 18) ? 18 : (n - 1) & (1ULL << 17) ? 17 : (n - 1) & (1ULL << 16) ? 16 : (n - 1) & (1ULL << 15) ? 15 : (n - 1) & (1ULL << 14) ? 14 : (n - 1) & (1ULL << 13) ? 13 : (n - 1) & (1ULL << 12) ? 12 : (n - 1) & (1ULL << 11) ? 11 : (n - 1) & (1ULL << 10) ? 10 : (n - 1) & (1ULL << 9) ? 9 : (n - 1) & (1ULL << 8) ? 8 : (n - 1) & (1ULL << 7) ? 7 : (n - 1) & (1ULL << 6) ? 6 : (n - 1) & (1ULL << 5) ? 5 : (n - 1) & (1ULL << 4) ? 4 : (n - 1) & (1ULL << 3) ? 3 : (n - 1) & (1ULL << 2) ? 2 : 1) : -1) : (sizeof(n - 1) <= 4) ? __ilog2_u32(n - 1) : __ilog2_u64(n - 1) ) + 1 : 0;
}
# 224 "include/linux/log2.h"
static inline __attribute__((const))
int __bits_per(unsigned long n)
{
 if (n < 2)
  return 1;
 if (is_power_of_2(n))
  return ( __builtin_constant_p(n) ? ( ((n) == 0 || (n) == 1) ? 0 : ( __builtin_constant_p((n) - 1) ? ( __builtin_constant_p((n) - 1) ? ( ((n) - 1) < 2 ? 0 : ((n) - 1) & (1ULL << 63) ? 63 : ((n) - 1) & (1ULL << 62) ? 62 : ((n) - 1) & (1ULL << 61) ? 61 : ((n) - 1) & (1ULL << 60) ? 60 : ((n) - 1) & (1ULL << 59) ? 59 : ((n) - 1) & (1ULL << 58) ? 58 : ((n) - 1) & (1ULL << 57) ? 57 : ((n) - 1) & (1ULL << 56) ? 56 : ((n) - 1) & (1ULL << 55) ? 55 : ((n) - 1) & (1ULL << 54) ? 54 : ((n) - 1) & (1ULL << 53) ? 53 : ((n) - 1) & (1ULL << 52) ? 52 : ((n) - 1) & (1ULL << 51) ? 51 : ((n) - 1) & (1ULL << 50) ? 50 : ((n) - 1) & (1ULL << 49) ? 49 : ((n) - 1) & (1ULL << 48) ? 48 : ((n) - 1) & (1ULL << 47) ? 47 : ((n) - 1) & (1ULL << 46) ? 46 : ((n) - 1) & (1ULL << 45) ? 45 : ((n) - 1) & (1ULL << 44) ? 44 : ((n) - 1) & (1ULL << 43) ? 43 : ((n) - 1) & (1ULL << 42) ? 42 : ((n) - 1) & (1ULL << 41) ? 41 : ((n) - 1) & (1ULL << 40) ? 40 : ((n) - 1) & (1ULL << 39) ? 39 : ((n) - 1) & (1ULL << 38) ? 38 : ((n) - 1) & (1ULL << 37) ? 37 : ((n) - 1) & (1ULL << 36) ? 36 : ((n) - 1) & (1ULL << 35) ? 35 : ((n) - 1) & (1ULL << 34) ? 34 : ((n) - 1) & (1ULL << 33) ? 33 : ((n) - 1) & (1ULL << 32) ? 32 : ((n) - 1) & (1ULL << 31) ? 31 : ((n) - 1) & (1ULL << 30) ? 30 : ((n) - 1) & (1ULL << 29) ? 29 : ((n) - 1) & (1ULL << 28) ? 28 : ((n) - 1) & (1ULL << 27) ? 27 : ((n) - 1) & (1ULL << 26) ? 26 : ((n) - 1) & (1ULL << 25) ? 25 : ((n) - 1) & (1ULL << 24) ? 24 : ((n) - 1) & (1ULL << 23) ? 23 : ((n) - 1) & (1ULL << 22) ? 22 : ((n) - 1) & (1ULL << 21) ? 21 : ((n) - 1) & (1ULL << 20) ? 20 : ((n) - 1) & (1ULL << 19) ? 19 : ((n) - 1) & (1ULL << 18) ? 18 : ((n) - 1) & (1ULL << 17) ? 17 : ((n) - 1) & (1ULL << 16) ? 16 : ((n) - 1) & (1ULL << 15) ? 15 : ((n) - 1) & (1ULL << 14) ? 14 : ((n) - 1) & (1ULL << 13) ? 13 : ((n) - 1) & (1ULL << 12) ? 12 : ((n) - 1) & (1ULL << 11) ? 11 : ((n) - 1) & (1ULL << 10) ? 10 : ((n) - 1) & (1ULL << 9) ? 9 : ((n) - 1) & (1ULL << 8) ? 8 : ((n) - 1) & (1ULL << 7) ? 7 : ((n) - 1) & (1ULL << 6) ? 6 : ((n) - 1) & (1ULL << 5) ? 5 : ((n) - 1) & (1ULL << 4) ? 4 : ((n) - 1) & (1ULL << 3) ? 3 : ((n) - 1) & (1ULL << 2) ? 2 : 1) : -1) : (sizeof((n) - 1) <= 4) ? __ilog2_u32((n) - 1) : __ilog2_u64((n) - 1) ) + 1) : __order_base_2(n) ) + 1;
 return ( __builtin_constant_p(n) ? ( ((n) == 0 || (n) == 1) ? 0 : ( __builtin_constant_p((n) - 1) ? ( __builtin_constant_p((n) - 1) ? ( ((n) - 1) < 2 ? 0 : ((n) - 1) & (1ULL << 63) ? 63 : ((n) - 1) & (1ULL << 62) ? 62 : ((n) - 1) & (1ULL << 61) ? 61 : ((n) - 1) & (1ULL << 60) ? 60 : ((n) - 1) & (1ULL << 59) ? 59 : ((n) - 1) & (1ULL << 58) ? 58 : ((n) - 1) & (1ULL << 57) ? 57 : ((n) - 1) & (1ULL << 56) ? 56 : ((n) - 1) & (1ULL << 55) ? 55 : ((n) - 1) & (1ULL << 54) ? 54 : ((n) - 1) & (1ULL << 53) ? 53 : ((n) - 1) & (1ULL << 52) ? 52 : ((n) - 1) & (1ULL << 51) ? 51 : ((n) - 1) & (1ULL << 50) ? 50 : ((n) - 1) & (1ULL << 49) ? 49 : ((n) - 1) & (1ULL << 48) ? 48 : ((n) - 1) & (1ULL << 47) ? 47 : ((n) - 1) & (1ULL << 46) ? 46 : ((n) - 1) & (1ULL << 45) ? 45 : ((n) - 1) & (1ULL << 44) ? 44 : ((n) - 1) & (1ULL << 43) ? 43 : ((n) - 1) & (1ULL << 42) ? 42 : ((n) - 1) & (1ULL << 41) ? 41 : ((n) - 1) & (1ULL << 40) ? 40 : ((n) - 1) & (1ULL << 39) ? 39 : ((n) - 1) & (1ULL << 38) ? 38 : ((n) - 1) & (1ULL << 37) ? 37 : ((n) - 1) & (1ULL << 36) ? 36 : ((n) - 1) & (1ULL << 35) ? 35 : ((n) - 1) & (1ULL << 34) ? 34 : ((n) - 1) & (1ULL << 33) ? 33 : ((n) - 1) & (1ULL << 32) ? 32 : ((n) - 1) & (1ULL << 31) ? 31 : ((n) - 1) & (1ULL << 30) ? 30 : ((n) - 1) & (1ULL << 29) ? 29 : ((n) - 1) & (1ULL << 28) ? 28 : ((n) - 1) & (1ULL << 27) ? 27 : ((n) - 1) & (1ULL << 26) ? 26 : ((n) - 1) & (1ULL << 25) ? 25 : ((n) - 1) & (1ULL << 24) ? 24 : ((n) - 1) & (1ULL << 23) ? 23 : ((n) - 1) & (1ULL << 22) ? 22 : ((n) - 1) & (1ULL << 21) ? 21 : ((n) - 1) & (1ULL << 20) ? 20 : ((n) - 1) & (1ULL << 19) ? 19 : ((n) - 1) & (1ULL << 18) ? 18 : ((n) - 1) & (1ULL << 17) ? 17 : ((n) - 1) & (1ULL << 16) ? 16 : ((n) - 1) & (1ULL << 15) ? 15 : ((n) - 1) & (1ULL << 14) ? 14 : ((n) - 1) & (1ULL << 13) ? 13 : ((n) - 1) & (1ULL << 12) ? 12 : ((n) - 1) & (1ULL << 11) ? 11 : ((n) - 1) & (1ULL << 10) ? 10 : ((n) - 1) & (1ULL << 9) ? 9 : ((n) - 1) & (1ULL << 8) ? 8 : ((n) - 1) & (1ULL << 7) ? 7 : ((n) - 1) & (1ULL << 6) ? 6 : ((n) - 1) & (1ULL << 5) ? 5 : ((n) - 1) & (1ULL << 4) ? 4 : ((n) - 1) & (1ULL << 3) ? 3 : ((n) - 1) & (1ULL << 2) ? 2 : 1) : -1) : (sizeof((n) - 1) <= 4) ? __ilog2_u32((n) - 1) : __ilog2_u64((n) - 1) ) + 1) : __order_base_2(n) );
}
# 14 "include/linux/kernel.h" 2
# 1 "include/linux/typecheck.h" 1
# 15 "include/linux/kernel.h" 2
# 1 "include/linux/printk.h" 1





# 1 "include/linux/init.h" 1
# 116 "include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);
# 127 "include/linux/init.h"
typedef initcall_t initcall_entry_t;

static inline initcall_t initcall_from_entry(initcall_entry_t *entry)
{
 return *entry;
}


extern initcall_entry_t __con_initcall_start[], __con_initcall_end[];


typedef void (*ctor_fn_t)(void);

struct file_system_type;


extern int do_one_initcall(initcall_t fn);
extern char __section(.init.data) boot_command_line[];
extern char *saved_command_line;
extern unsigned int reset_devices;


void setup_arch(char **);
void prepare_namespace(void);
void __section(.init.text) __cold init_rootfs(void);
extern struct file_system_type rootfs_fs_type;
# 161 "include/linux/init.h"
extern void (*late_time_init)(void);

extern bool initcall_debug;
# 241 "include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 290 "include/linux/init.h"
void __section(.init.text) __cold parse_early_param(void);
void __section(.init.text) __cold parse_early_options(char *cmdline);
# 7 "include/linux/printk.h" 2
# 1 "include/linux/kern_levels.h" 1
# 8 "include/linux/printk.h" 2

# 1 "include/linux/cache.h" 1




# 1 "include/uapi/linux/kernel.h" 1




# 1 "/usr/include/linux/sysinfo.h" 1 3 4








# 8 "/usr/include/linux/sysinfo.h" 3 4
struct sysinfo {
 __kernel_long_t uptime;
 __kernel_ulong_t loads[3];
 __kernel_ulong_t totalram;
 __kernel_ulong_t freeram;
 __kernel_ulong_t sharedram;
 __kernel_ulong_t bufferram;
 __kernel_ulong_t totalswap;
 __kernel_ulong_t freeswap;
 __u16 procs;
 __u16 pad;
 __kernel_ulong_t totalhigh;
 __kernel_ulong_t freehigh;
 __u32 mem_unit;
 char _f[20-2*sizeof(__kernel_ulong_t)-sizeof(__u32)];
};
# 6 "include/uapi/linux/kernel.h" 2
# 6 "include/linux/cache.h" 2
# 1 "arch/x86/include/asm/cache.h" 1
# 7 "include/linux/cache.h" 2
# 10 "include/linux/printk.h" 2


# 11 "include/linux/printk.h"
extern const char linux_banner[];
extern const char linux_proc_banner[];



static inline int printk_get_level(const char *buffer)
{
 if (buffer[0] == '\001' && buffer[1]) {
  switch (buffer[1]) {
  case '0' ... '7':
  case 'c':
   return buffer[1];
  }
 }
 return 0;
}

static inline const char *printk_skip_level(const char *buffer)
{
 if (printk_get_level(buffer))
  return buffer + 2;

 return buffer;
}

static inline const char *printk_skip_headers(const char *buffer)
{
 while (printk_get_level(buffer))
  buffer = printk_skip_level(buffer);

 return buffer;
}
# 62 "include/linux/printk.h"
extern int console_printk[];






static inline void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}



extern char devkmsg_log_str[];
struct ctl_table;

extern int suppress_printk;

struct va_format {
 const char *fmt;
 va_list *va;
};
# 145 "include/linux/printk.h"
static inline __printf(1, 2) __cold
void early_printk(const char *s, ...) { }
# 155 "include/linux/printk.h"
static inline void printk_nmi_enter(void) { }
static inline void printk_nmi_exit(void) { }
static inline void printk_nmi_direct_enter(void) { }
static inline void printk_nmi_direct_exit(void) { }
# 209 "include/linux/printk.h"
static inline __printf(1, 0)
int vprintk(const char *s, va_list args)
{
 return 0;
}
static inline __printf(1, 2) __cold
int printk(const char *s, ...)
{
 return 0;
}
static inline __printf(1, 2) __cold
int printk_deferred(const char *s, ...)
{
 return 0;
}
static inline int printk_ratelimit(void)
{
 return 0;
}
static inline bool printk_timed_ratelimit(unsigned long *caller_jiffies,
       unsigned int interval_msec)
{
 return false;
}

static inline void wake_up_klogd(void)
{
}

static inline char *log_buf_addr_get(void)
{
 return
# 240 "include/linux/printk.h" 3 4
       ((void *)0)
# 240 "include/linux/printk.h"
           ;
}

static inline u32 log_buf_len_get(void)
{
 return 0;
}

static inline void log_buf_vmcoreinfo_setup(void)
{
}

static inline void setup_log_buf(int early)
{
}

static inline __printf(1, 2) void dump_stack_set_arch_desc(const char *fmt, ...)
{
}

static inline void dump_stack_print_info(const char *log_lvl)
{
}

static inline void show_regs_print_info(const char *log_lvl)
{
}

static inline void dump_stack(void)
{
}

static inline void printk_safe_init(void)
{
}

static inline void printk_safe_flush(void)
{
}

static inline void printk_safe_flush_on_panic(void)
{
}


extern int kptr_restrict;
# 476 "include/linux/printk.h"
extern const struct file_operations kmsg_fops;

enum {
 DUMP_PREFIX_NONE,
 DUMP_PREFIX_ADDRESS,
 DUMP_PREFIX_OFFSET
};
extern int hex_dump_to_buffer(const void *buf, size_t len, int rowsize,
         int groupsize, char *linebuf, size_t linebuflen,
         bool ascii);





static inline void print_hex_dump(const char *level, const char *prefix_str,
      int prefix_type, int rowsize, int groupsize,
      const void *buf, size_t len, bool ascii)
{
}
static inline void print_hex_dump_bytes(const char *prefix_str, int prefix_type,
     const void *buf, size_t len)
{
}
# 514 "include/linux/printk.h"
static inline void print_hex_dump_debug(const char *prefix_str, int prefix_type,
     int rowsize, int groupsize,
     const void *buf, size_t len, bool ascii)
{
}
# 16 "include/linux/kernel.h" 2
# 1 "include/linux/build_bug.h" 1
# 17 "include/linux/kernel.h" 2
# 1 "/usr/include/x86_64-linux-gnu/asm/byteorder.h" 1 3 4




# 1 "include/linux/byteorder/little_endian.h" 1 3 4




# 1 "include/uapi/linux/byteorder/little_endian.h" 1 3 4
# 13 "include/uapi/linux/byteorder/little_endian.h" 3 4
# 1 "include/linux/swab.h" 1 3 4




# 1 "include/uapi/linux/swab.h" 1 3 4






# 1 "/usr/include/x86_64-linux-gnu/asm/swab.h" 1 3 4








# 8 "/usr/include/x86_64-linux-gnu/asm/swab.h" 3 4
static __inline__ __u32 __arch_swab32(__u32 val)
{
 __asm__("bswapl %0" : "=r" (val) : "0" (val));
 return val;
}


static __inline__ __u64 __arch_swab64(__u64 val)
{
# 31 "/usr/include/x86_64-linux-gnu/asm/swab.h" 3 4
 __asm__("bswapq %0" : "=r" (val) : "0" (val));
 return val;

}
# 8 "include/uapi/linux/swab.h" 2 3 4
# 47 "include/uapi/linux/swab.h" 3 4
static inline __attribute_const__ __u16 __fswab16(__u16 val)
{



 return ((__u16)( (((__u16)(val) & (__u16)0x00ffU) << 8) | (((__u16)(val) & (__u16)0xff00U) >> 8)));

}

static inline __attribute_const__ __u32 __fswab32(__u32 val)
{

 return __arch_swab32(val);



}

static inline __attribute_const__ __u64 __fswab64(__u64 val)
{

 return __arch_swab64(val);







}

static inline __attribute_const__ __u32 __fswahw32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x0000ffffUL) << 16) | (((__u32)(val) & (__u32)0xffff0000UL) >> 16)));

}

static inline __attribute_const__ __u32 __fswahb32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(val) & (__u32)0xff00ff00UL) >> 8)));

}
# 161 "include/uapi/linux/swab.h" 3 4
static inline __u16 __swab16p(const __u16 *p)
{



 return (__builtin_constant_p((__u16)(*p)) ? ((__u16)( (((__u16)(*p) & (__u16)0x00ffU) << 8) | (((__u16)(*p) & (__u16)0xff00U) >> 8))) : __fswab16(*p));

}





static inline __u32 __swab32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x000000ffUL) << 24) | (((__u32)(*p) & (__u32)0x0000ff00UL) << 8) | (((__u32)(*p) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(*p) & (__u32)0xff000000UL) >> 24))) : __fswab32(*p));

}





static inline __u64 __swab64p(const __u64 *p)
{



 return (__builtin_constant_p((__u64)(*p)) ? ((__u64)( (((__u64)(*p) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(*p) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(*p) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(*p) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(*p) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(*p) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(*p) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(*p) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(*p));

}







static inline __u32 __swahw32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x0000ffffUL) << 16) | (((__u32)(*p) & (__u32)0xffff0000UL) >> 16))) : __fswahw32(*p));

}







static inline __u32 __swahb32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(*p) & (__u32)0xff00ff00UL) >> 8))) : __fswahb32(*p));

}





static inline void __swab16s(__u16 *p)
{



 *p = __swab16p(p);

}




static inline void __swab32s(__u32 *p)
{



 *p = __swab32p(p);

}





static inline void __swab64s(__u64 *p)
{



 *p = __swab64p(p);

}







static inline void __swahw32s(__u32 *p)
{



 *p = __swahw32p(p);

}







static inline void __swahb32s(__u32 *p)
{



 *p = __swahb32p(p);

}
# 6 "include/linux/swab.h" 2 3 4
# 14 "include/uapi/linux/byteorder/little_endian.h" 2 3 4
# 44 "include/uapi/linux/byteorder/little_endian.h" 3 4
static inline __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 6 "include/linux/byteorder/little_endian.h" 2 3 4





# 1 "include/linux/byteorder/generic.h" 1 3 4
# 144 "include/linux/byteorder/generic.h" 3 4
static inline void le16_add_cpu(__le16 *var, u16 val)
{
 *var = (( __le16)(__u16)((( __u16)(__le16)(*var)) + val));
}

static inline void le32_add_cpu(__le32 *var, u32 val)
{
 *var = (( __le32)(__u32)((( __u32)(__le32)(*var)) + val));
}

static inline void le64_add_cpu(__le64 *var, u64 val)
{
 *var = (( __le64)(__u64)((( __u64)(__le64)(*var)) + val));
}


static inline void le32_to_cpu_array(u32 *buf, unsigned int words)
{
 while (words--) {
  do { (void)(buf); } while (0);
  buf++;
 }
}

static inline void cpu_to_le32_array(u32 *buf, unsigned int words)
{
 while (words--) {
  do { (void)(buf); } while (0);
  buf++;
 }
}

static inline void be16_add_cpu(__be16 *var, u16 val)
{
 *var = (( __be16)(__builtin_constant_p((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))) ? ((__u16)( (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0x00ffU) << 8) | (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0xff00U) >> 8))) : __fswab16(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))));
}

static inline void be32_add_cpu(__be32 *var, u32 val)
{
 *var = (( __be32)(__builtin_constant_p((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))) ? ((__u32)( (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x000000ffUL) << 24) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0xff000000UL) >> 24))) : __fswab32(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))));
}

static inline void be64_add_cpu(__be64 *var, u64 val)
{
 *var = (( __be64)(__builtin_constant_p((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))) ? ((__u64)( (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))));
}

static inline void cpu_to_be32_array(__be32 *dst, const u32 *src, size_t len)
{
 int i;

 for (i = 0; i < len; i++)
  dst[i] = (( __be32)(__builtin_constant_p((__u32)((src[i]))) ? ((__u32)( (((__u32)((src[i])) & (__u32)0x000000ffUL) << 24) | (((__u32)((src[i])) & (__u32)0x0000ff00UL) << 8) | (((__u32)((src[i])) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((src[i])) & (__u32)0xff000000UL) >> 24))) : __fswab32((src[i]))));
}

static inline void be32_to_cpu_array(u32 *dst, const __be32 *src, size_t len)
{
 int i;

 for (i = 0; i < len; i++)
  dst[i] = (__builtin_constant_p((__u32)(( __u32)(__be32)(src[i]))) ? ((__u32)( (((__u32)(( __u32)(__be32)(src[i])) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(src[i])) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(src[i])) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(src[i])) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(src[i])));
}
# 12 "include/linux/byteorder/little_endian.h" 2 3 4
# 6 "/usr/include/x86_64-linux-gnu/asm/byteorder.h" 2 3 4
# 18 "include/linux/kernel.h" 2
# 1 "arch/x86/include/asm/div64.h" 1
# 75 "arch/x86/include/asm/div64.h"
# 1 "include/asm-generic/div64.h" 1
# 175 "include/asm-generic/div64.h"

# 175 "include/asm-generic/div64.h"
static inline uint64_t __arch_xprod_64(const uint64_t m, uint64_t n, bool bias)
{
 uint32_t m_lo = m;
 uint32_t m_hi = m >> 32;
 uint32_t n_lo = n;
 uint32_t n_hi = n >> 32;
 uint64_t res;
 uint32_t res_lo, res_hi, tmp;

 if (!bias) {
  res = ((uint64_t)m_lo * n_lo) >> 32;
 } else if (!(m & ((1ULL << 63) | (1ULL << 31)))) {

  res = (m + (uint64_t)m_lo * n_lo) >> 32;
 } else {
  res = m + (uint64_t)m_lo * n_lo;
  res_lo = res >> 32;
  res_hi = (res_lo < m_hi);
  res = res_lo | ((uint64_t)res_hi << 32);
 }

 if (!(m & ((1ULL << 63) | (1ULL << 31)))) {

  res += (uint64_t)m_lo * n_hi;
  res += (uint64_t)m_hi * n_lo;
  res >>= 32;
 } else {
  res += (uint64_t)m_lo * n_hi;
  tmp = res >> 32;
  res += (uint64_t)m_hi * n_lo;
  res_lo = res >> 32;
  res_hi = (res_lo < tmp);
  res = res_lo | ((uint64_t)res_hi << 32);
 }

 res += (uint64_t)m_hi * n_hi;

 return res;
}



extern uint32_t __div64_32(uint64_t *dividend, uint32_t divisor);
# 76 "arch/x86/include/asm/div64.h" 2

static inline u64 mul_u64_u32_div(u64 a, u32 mul, u32 div)
{
 u64 q;

 asm ("mulq %2; divq %3" : "=a" (q)
    : "a" (a), "rm" ((u64)mul), "rm" ((u64)div)
    : "rdx");

 return q;
}
# 19 "include/linux/kernel.h" 2
# 191 "include/linux/kernel.h"
struct completion;
struct pt_regs;
struct user;
# 247 "include/linux/kernel.h"
  static inline void ___might_sleep(const char *file, int line,
       int preempt_offset) { }
  static inline void __might_sleep(const char *file, int line,
       int preempt_offset) { }
# 297 "include/linux/kernel.h"
static inline u32 reciprocal_scale(u32 val, u32 ep_ro)
{
 return (u32)(((u64) val * ep_ro) >> 32);
}






static inline void might_fault(void) { }


extern struct atomic_notifier_head panic_notifier_list;
extern long (*panic_blink)(int state);
__printf(1, 2)
void panic(const char *fmt, ...) __noreturn __cold;
void nmi_panic(struct pt_regs *regs, const char *msg);
extern void oops_enter(void);
extern void oops_exit(void);
void print_oops_end_marker(void);
extern int oops_may_print(void);
void do_exit(long error_code) __noreturn;
void complete_and_exit(struct completion *, long) __noreturn;


int __must_check _kstrtoul(const char *s, unsigned int base, unsigned long *res);
int __must_check _kstrtol(const char *s, unsigned int base, long *res);

int __must_check kstrtoull(const char *s, unsigned int base, unsigned long long *res);
int __must_check kstrtoll(const char *s, unsigned int base, long long *res);
# 344 "include/linux/kernel.h"
static inline int __must_check kstrtoul(const char *s, unsigned int base, unsigned long *res)
{




 if (sizeof(unsigned long) == sizeof(unsigned long long) &&
     __alignof__(unsigned long) == __alignof__(unsigned long long))
  return kstrtoull(s, base, (unsigned long long *)res);
 else
  return _kstrtoul(s, base, res);
}
# 372 "include/linux/kernel.h"
static inline int __must_check kstrtol(const char *s, unsigned int base, long *res)
{




 if (sizeof(long) == sizeof(long long) &&
     __alignof__(long) == __alignof__(long long))
  return kstrtoll(s, base, (long long *)res);
 else
  return _kstrtol(s, base, res);
}

int __must_check kstrtouint(const char *s, unsigned int base, unsigned int *res);
int __must_check kstrtoint(const char *s, unsigned int base, int *res);

static inline int __must_check kstrtou64(const char *s, unsigned int base, u64 *res)
{
 return kstrtoull(s, base, res);
}

static inline int __must_check kstrtos64(const char *s, unsigned int base, s64 *res)
{
 return kstrtoll(s, base, res);
}

static inline int __must_check kstrtou32(const char *s, unsigned int base, u32 *res)
{
 return kstrtouint(s, base, res);
}

static inline int __must_check kstrtos32(const char *s, unsigned int base, s32 *res)
{
 return kstrtoint(s, base, res);
}

int __must_check kstrtou16(const char *s, unsigned int base, u16 *res);
int __must_check kstrtos16(const char *s, unsigned int base, s16 *res);
int __must_check kstrtou8(const char *s, unsigned int base, u8 *res);
int __must_check kstrtos8(const char *s, unsigned int base, s8 *res);
int __must_check kstrtobool(const char *s, bool *res);

int __must_check kstrtoull_from_user(const char *s, size_t count, unsigned int base, unsigned long long *res);
int __must_check kstrtoll_from_user(const char *s, size_t count, unsigned int base, long long *res);
int __must_check kstrtoul_from_user(const char *s, size_t count, unsigned int base, unsigned long *res);
int __must_check kstrtol_from_user(const char *s, size_t count, unsigned int base, long *res);
int __must_check kstrtouint_from_user(const char *s, size_t count, unsigned int base, unsigned int *res);
int __must_check kstrtoint_from_user(const char *s, size_t count, unsigned int base, int *res);
int __must_check kstrtou16_from_user(const char *s, size_t count, unsigned int base, u16 *res);
int __must_check kstrtos16_from_user(const char *s, size_t count, unsigned int base, s16 *res);
int __must_check kstrtou8_from_user(const char *s, size_t count, unsigned int base, u8 *res);
int __must_check kstrtos8_from_user(const char *s, size_t count, unsigned int base, s8 *res);
int __must_check kstrtobool_from_user(const char *s, size_t count, bool *res);

static inline int __must_check kstrtou64_from_user(const char *s, size_t count, unsigned int base, u64 *res)
{
 return kstrtoull_from_user(s, count, base, res);
}

static inline int __must_check kstrtos64_from_user(const char *s, size_t count, unsigned int base, s64 *res)
{
 return kstrtoll_from_user(s, count, base, res);
}

static inline int __must_check kstrtou32_from_user(const char *s, size_t count, unsigned int base, u32 *res)
{
 return kstrtouint_from_user(s, count, base, res);
}

static inline int __must_check kstrtos32_from_user(const char *s, size_t count, unsigned int base, s32 *res)
{
 return kstrtoint_from_user(s, count, base, res);
}
# 459 "include/linux/kernel.h"
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);

extern int num_to_str(char *buf, int size,
        unsigned long long num, unsigned int width);



extern __printf(2, 3) int sprintf(char *buf, const char * fmt, ...);
extern __printf(2, 0) int vsprintf(char *buf, const char *, va_list);
extern __printf(3, 4)
int snprintf(char *buf, size_t size, const char *fmt, ...);
extern __printf(3, 0)
int vsnprintf(char *buf, size_t size, const char *fmt, va_list args);
extern __printf(3, 4)
int scnprintf(char *buf, size_t size, const char *fmt, ...);
extern __printf(3, 0)
int vscnprintf(char *buf, size_t size, const char *fmt, va_list args);
extern __printf(2, 3) __malloc
char *kasprintf(gfp_t gfp, const char *fmt, ...);
extern __printf(2, 0) __malloc
char *kvasprintf(gfp_t gfp, const char *fmt, va_list args);
extern __printf(2, 0)
const char *kvasprintf_const(gfp_t gfp, const char *fmt, va_list args);

extern __scanf(2, 3)
int sscanf(const char *, const char *, ...);
extern __scanf(2, 0)
int vsscanf(const char *, const char *, va_list);

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(const char *ptr, char **retptr);
extern bool parse_option_str(const char *str, const char *option);
extern char *next_arg(char *args, char **param, char **val);

extern int core_kernel_text(unsigned long addr);
extern int init_kernel_text(unsigned long addr);
extern int core_kernel_data(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int func_ptr_is_kernel_text(void *ptr);

u64 int_pow(u64 base, unsigned int exp);
unsigned long int_sqrt(unsigned long);


u32 int_sqrt64(u64 x);







extern void bust_spinlocks(int yes);
extern int oops_in_progress;
extern int panic_timeout;
extern unsigned long panic_print;
extern int panic_on_oops;
extern int panic_on_unrecovered_nmi;
extern int panic_on_io_nmi;
extern int panic_on_warn;
extern int sysctl_panic_on_rcu_stall;
extern int sysctl_panic_on_stackoverflow;

extern bool crash_kexec_post_notifiers;






extern atomic_t panic_cpu;






static inline void set_arch_panic_timeout(int timeout, int arch_default_timeout)
{
 if (panic_timeout == arch_default_timeout)
  panic_timeout = timeout;
}
extern const char *print_tainted(void);
enum lockdep_ok {
 LOCKDEP_STILL_OK,
 LOCKDEP_NOW_UNRELIABLE
};
extern void add_taint(unsigned flag, enum lockdep_ok);
extern int test_taint(unsigned flag);
extern unsigned long get_taint(void);
extern int root_mountflags;

extern bool early_boot_irqs_disabled;





extern enum system_states {
 SYSTEM_BOOTING,
 SYSTEM_SCHEDULING,
 SYSTEM_RUNNING,
 SYSTEM_HALT,
 SYSTEM_POWER_OFF,
 SYSTEM_RESTART,
 SYSTEM_SUSPEND,
} system_state;
# 593 "include/linux/kernel.h"
struct taint_flag {
 char c_true;
 char c_false;
 bool module;
};

extern const struct taint_flag taint_flags[18];

extern const char hex_asc[];



static inline char *hex_byte_pack(char *buf, u8 byte)
{
 *buf++ = hex_asc[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc[((byte) & 0x0f)];
 return buf;
}

extern const char hex_asc_upper[];



static inline char *hex_byte_pack_upper(char *buf, u8 byte)
{
 *buf++ = hex_asc_upper[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc_upper[((byte) & 0x0f)];
 return buf;
}

extern int hex_to_bin(char ch);
extern int __must_check hex2bin(u8 *dst, const char *src, size_t count);
extern char *bin2hex(char *dst, const void *src, size_t count);

bool mac_pton(const char *s, u8 *mac);
# 649 "include/linux/kernel.h"
enum ftrace_dump_mode {
 DUMP_NONE,
 DUMP_ALL,
 DUMP_ORIG,
};
# 799 "include/linux/kernel.h"
static inline void tracing_start(void) { }
static inline void tracing_stop(void) { }
static inline void trace_dump_stack(int skip) { }

static inline void tracing_on(void) { }
static inline void tracing_off(void) { }
static inline int tracing_is_on(void) { return 0; }
static inline void tracing_snapshot(void) { }
static inline void tracing_snapshot_alloc(void) { }

static inline __printf(1, 2)
int trace_printk(const char *fmt, ...)
{
 return 0;
}
static __printf(1, 0) inline int
ftrace_vprintk(const char *fmt, va_list ap)
{
 return 0;
}
static inline void ftrace_dump(enum ftrace_dump_mode oops_dump_mode) { }
# 10 "include/linux/list.h" 2
# 26 "include/linux/list.h"
static inline void INIT_LIST_HEAD(struct list_head *list)
{
 WRITE_ONCE(list->next, list);
 list->prev = list;
}







static inline bool __list_add_valid(struct list_head *new,
    struct list_head *prev,
    struct list_head *next)
{
 return true;
}
static inline bool __list_del_entry_valid(struct list_head *entry)
{
 return true;
}
# 56 "include/linux/list.h"
static inline void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 if (!__list_add_valid(new, prev, next))
  return;

 next->prev = new;
 new->next = next;
 new->prev = prev;
 WRITE_ONCE(prev->next, new);
}
# 77 "include/linux/list.h"
static inline void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 91 "include/linux/list.h"
static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}
# 103 "include/linux/list.h"
static inline void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 WRITE_ONCE(prev->next, next);
}
# 117 "include/linux/list.h"
static inline void __list_del_clearprev(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev =
# 120 "include/linux/list.h" 3 4
              ((void *)0)
# 120 "include/linux/list.h"
                  ;
}







static inline void __list_del_entry(struct list_head *entry)
{
 if (!__list_del_entry_valid(entry))
  return;

 __list_del(entry->prev, entry->next);
}

static inline void list_del(struct list_head *entry)
{
 __list_del_entry(entry);
 entry->next = ((void *) 0x100 + 0);
 entry->prev = ((void *) 0x122 + 0);
}
# 151 "include/linux/list.h"
static inline void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}






static inline void list_swap(struct list_head *entry1,
        struct list_head *entry2)
{
 struct list_head *pos = entry2->prev;

 list_del(entry2);
 list_replace(entry1, entry2);
 if (pos == entry1)
  pos = entry2;
 list_add(entry1, pos);
}





static inline void list_del_init(struct list_head *entry)
{
 __list_del_entry(entry);
 INIT_LIST_HEAD(entry);
}






static inline void list_move(struct list_head *list, struct list_head *head)
{
 __list_del_entry(list);
 list_add(list, head);
}






static inline void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del_entry(list);
 list_add_tail(list, head);
}
# 226 "include/linux/list.h"
static inline void list_bulk_move_tail(struct list_head *head,
           struct list_head *first,
           struct list_head *last)
{
 first->prev->next = last->next;
 last->next->prev = first->prev;

 head->prev->next = first;
 first->prev = head->prev;

 last->next = head;
 head->prev = last;
}






static inline int list_is_first(const struct list_head *list,
     const struct list_head *head)
{
 return list->prev == head;
}






static inline int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline int list_empty(const struct list_head *head)
{
 return READ_ONCE(head->next) == head;
}
# 284 "include/linux/list.h"
static inline int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}





static inline void list_rotate_left(struct list_head *head)
{
 struct list_head *first;

 if (!list_empty(head)) {
  first = head->next;
  list_move_tail(first, head);
 }
}
# 311 "include/linux/list.h"
static inline void list_rotate_to_front(struct list_head *list,
     struct list_head *head)
{





 list_move_tail(head, list);
}





static inline int list_is_singular(const struct list_head *head)
{
 return !list_empty(head) && (head->next == head->prev);
}

static inline void __list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 struct list_head *new_first = entry->next;
 list->next = head->next;
 list->next->prev = list;
 list->prev = entry;
 entry->next = list;
 head->next = new_first;
 new_first->prev = head;
}
# 357 "include/linux/list.h"
static inline void list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 if (list_empty(head))
  return;
 if (list_is_singular(head) &&
  (head->next != entry && head != entry))
  return;
 if (entry == head)
  INIT_LIST_HEAD(list);
 else
  __list_cut_position(list, head, entry);
}
# 385 "include/linux/list.h"
static inline void list_cut_before(struct list_head *list,
       struct list_head *head,
       struct list_head *entry)
{
 if (head->next == entry) {
  INIT_LIST_HEAD(list);
  return;
 }
 list->next = head->next;
 list->next->prev = list;
 list->prev = entry->prev;
 list->prev->next = list;
 head->next = entry;
 entry->prev = head;
}

static inline void __list_splice(const struct list_head *list,
     struct list_head *prev,
     struct list_head *next)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;

 first->prev = prev;
 prev->next = first;

 last->next = next;
 next->prev = last;
}






static inline void list_splice(const struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head, head->next);
}






static inline void list_splice_tail(struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head->prev, head);
}
# 446 "include/linux/list.h"
static inline void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head, head->next);
  INIT_LIST_HEAD(list);
 }
}
# 463 "include/linux/list.h"
static inline void list_splice_tail_init(struct list_head *list,
      struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head->prev, head);
  INIT_LIST_HEAD(list);
 }
}
# 741 "include/linux/list.h"
static inline void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next =
# 743 "include/linux/list.h" 3 4
          ((void *)0)
# 743 "include/linux/list.h"
              ;
 h->pprev =
# 744 "include/linux/list.h" 3 4
           ((void *)0)
# 744 "include/linux/list.h"
               ;
}

static inline int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline int hlist_empty(const struct hlist_head *h)
{
 return !READ_ONCE(h->first);
}

static inline void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;

 WRITE_ONCE(*pprev, next);
 if (next)
  next->pprev = pprev;
}

static inline void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x100 + 0);
 n->pprev = ((void *) 0x122 + 0);
}

static inline void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}

static inline void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 WRITE_ONCE(h->first, n);
 n->pprev = &h->first;
}


static inline void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 WRITE_ONCE(*(n->pprev), n);
}

static inline void hlist_add_behind(struct hlist_node *n,
        struct hlist_node *prev)
{
 n->next = prev->next;
 prev->next = n;
 n->pprev = &prev->next;

 if (n->next)
  n->next->pprev = &n->next;
}


static inline void hlist_add_fake(struct hlist_node *n)
{
 n->pprev = &n->next;
}

static inline bool hlist_fake(struct hlist_node *h)
{
 return h->pprev == &h->next;
}





static inline bool
hlist_is_singular_node(struct hlist_node *n, struct hlist_head *h)
{
 return !n->next && n->pprev == &h->first;
}





static inline void hlist_move_list(struct hlist_head *old,
       struct hlist_head *new)
{
 new->first = old->first;
 if (new->first)
  new->first->pprev = &new->first;
 old->first =
# 844 "include/linux/list.h" 3 4
             ((void *)0)
# 844 "include/linux/list.h"
                 ;
}
