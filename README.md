# CentOS
CentOS installation detail information
# installtion
CentOS Stream installation begins by downloading the official ISO file from the CentOS website.
Next, a new virtual machine is created in VirtualBox with appropriate hardware settings.
The ISO file is mounted to the virtual machine to boot and start the installation.
Users then configure language, disk, network, and user settings through the installer GUI.
Once installation completes, the system reboots into a fully functional CentOS Stream environment.
# systemcall implementation
The brk() system call adjusts the end of a process's heap segment, allowing dynamic memory allocation. In a toy OS, it involves tracking heap_start, heap_end, and heap_max in the process structure. The sys_brk function checks that the requested new end is within valid bounds and updates heap_end accordingly. It's then registered in the syscall table and invoked by user programs for memory management. This simulates how real operating systems manage heap memory using brk() or sbrk().






