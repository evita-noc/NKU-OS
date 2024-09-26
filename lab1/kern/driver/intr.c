// 中断也需要CPU的硬件支持，
// 这里提供了设置中断使能位的接口
// （其实只封装了一句riscv指令）。

#include <intr.h>
#include <riscv.h>

/* intr_enable - enable irq interrupt 
设置sstatus的Supervisor中断使能位*/
void intr_enable(void) { set_csr(sstatus, SSTATUS_SIE); }

/* intr_disable - disable irq interrupt */
void intr_disable(void) { clear_csr(sstatus, SSTATUS_SIE); }
