#include <config.h>

OUTPUT_ARCH(powerpc)

MEMORY {
	code (rx): org = CONFIG_SYS_TEXT_BASE, len = CONFIG_SYS_INIT_RAM_ADDR - CONFIG_SYS_TEXT_BASE
	data (rw): org = CONFIG_SYS_INIT_RAM_ADDR, len = CONFIG_SYS_INIT_RAM_SIZE - RCM_PPC_STACK_SIZE - CONFIG_SYS_MALLOC_LEN - 0x4000 /* other reservation */
}

SECTIONS
{
    . = CONFIG_SYS_TEXT_BASE;
    __image_copy_start = .;
    .text :
    {
        KEEP(*(.text.start))
        *(.text)
        _GOT2_TABLE_ = .;
        KEEP(*(.got2))
        KEEP(*(.got))
        . = ALIGN(4);
    } > code AT> code

    .data : {
            *(.data*)
	        *(.rodata*)
            *(.sdata*)
            KEEP(*(SORT(.u_boot_list*)));
    } > data AT> code
    . = ALIGN(4);
   	__init_end = .;
    __image_copy_end = .;

    __init_start = LOADADDR(.data);
    __init_size = SIZEOF(.data);

    .bss :
    {
        PROVIDE(__bss_start = .);
        *(.bss*)
        *(.sbss*)
        *(COMMON)
         PROVIDE(__bss_end = .);
    } > data

    _image_binary_end = LOADADDR(.data);
    _image_binary_end += SIZEOF(.data); 
    _end = _image_binary_end; 

}
