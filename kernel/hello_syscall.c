#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(hello_syscall)
{
  pr_info("hello_syscall(): hello from the kernel!\n");
  return 0;
}



