#include <linux/kernel.h>

long sys_mysyscall(long val)
{
	printk(KERN_INFO "Welcome to  Embedded system!! app value = %ld\n",val);
	return val*val;
}
