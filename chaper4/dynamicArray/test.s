    .file   "test.cpp"
    .section    .text$_ZStanSt13_Ios_FmtflagsS_,"x"
    .linkonce discard
.globl __ZStanSt13_Ios_FmtflagsS_
    .def    __ZStanSt13_Ios_FmtflagsS_; .scl    2;  .type   32; .endef
__ZStanSt13_Ios_FmtflagsS_:
LFB562:
    pushl   %ebp
LCFI0:
    movl    %esp, %ebp
LCFI1:
    movl    8(%ebp), %edx
    movl    12(%ebp), %eax
    andl    %edx, %eax
    leave
LCFI2:
    ret
LFE562:
    .section    .text$_ZStorSt13_Ios_FmtflagsS_,"x"
    .linkonce discard
.globl __ZStorSt13_Ios_FmtflagsS_
    .def    __ZStorSt13_Ios_FmtflagsS_; .scl    2;  .type   32; .endef
__ZStorSt13_Ios_FmtflagsS_:
LFB563:
    pushl   %ebp
LCFI3:
    movl    %esp, %ebp
LCFI4:
    movl    8(%ebp), %edx
    movl    12(%ebp), %eax
    orl %edx, %eax
    leave
LCFI5:
    ret
LFE563:
    .section    .text$_ZStoRRSt13_Ios_FmtflagsS_,"x"
    .linkonce discard
.globl __ZStoRRSt13_Ios_FmtflagsS_
    .def    __ZStoRRSt13_Ios_FmtflagsS_;    .scl    2;  .type   32; .endef
__ZStoRRSt13_Ios_FmtflagsS_:
LFB565:
    pushl   %ebp
LCFI6:
    movl    %esp, %ebp
LCFI7:
    subl    $8, %esp
LCFI8:
    movl    8(%ebp), %eax
    movl    (%eax), %eax
    movl    12(%ebp), %edx
    movl    %edx, 4(%esp)
    movl    %eax, (%esp)
    call    __ZStorSt13_Ios_FmtflagsS_
    movl    8(%ebp), %edx
    movl    %eax, (%edx)
    movl    8(%ebp), %eax
    leave
LCFI9:
    ret
LFE565:
    .section    .text$_ZStaNRSt13_Ios_FmtflagsS_,"x"
    .linkonce discard
.globl __ZStaNRSt13_Ios_FmtflagsS_
    .def    __ZStaNRSt13_Ios_FmtflagsS_;    .scl    2;  .type   32; .endef
__ZStaNRSt13_Ios_FmtflagsS_:
LFB566:
    pushl   %ebp
LCFI10:
    movl    %esp, %ebp
LCFI11:
    subl    $8, %esp
LCFI12:
    movl    8(%ebp), %eax
    movl    (%eax), %eax
    movl    12(%ebp), %edx
    movl    %edx, 4(%esp)
    movl    %eax, (%esp)
    call    __ZStanSt13_Ios_FmtflagsS_
    movl    8(%ebp), %edx
    movl    %eax, (%edx)
    movl    8(%ebp), %eax
    leave
LCFI13:
    ret
LFE566:
    .section    .text$_ZStcoSt13_Ios_Fmtflags,"x"
    .linkonce discard
.globl __ZStcoSt13_Ios_Fmtflags
    .def    __ZStcoSt13_Ios_Fmtflags;   .scl    2;  .type   32; .endef
__ZStcoSt13_Ios_Fmtflags:
LFB568:
    pushl   %ebp
LCFI14:
    movl    %esp, %ebp
LCFI15:
    movl    8(%ebp), %eax
    notl    %eax
    leave
LCFI16:
    ret
LFE568:
    .section    .text$_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,"x"
    .linkonce discard
    .align 2
.globl __ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
    .def    __ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_;  .scl    2;  .type   32; .endef
__ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_:
LFB594:
    pushl   %ebp
LCFI17:
    movl    %esp, %ebp
LCFI18:
    subl    $24, %esp
LCFI19:
    movl    8(%ebp), %eax
    movl    12(%eax), %eax
    movl    %eax, -4(%ebp)
    movl    16(%ebp), %eax
    movl    %eax, (%esp)
    call    __ZStcoSt13_Ios_Fmtflags
    movl    8(%ebp), %edx
    addl    $12, %edx
    movl    %eax, 4(%esp)
    movl    %edx, (%esp)
    call    __ZStaNRSt13_Ios_FmtflagsS_
    movl    16(%ebp), %eax
    movl    %eax, 4(%esp)
    movl    12(%ebp), %eax
    movl    %eax, (%esp)
    call    __ZStanSt13_Ios_FmtflagsS_
    movl    8(%ebp), %edx
    addl    $12, %edx
    movl    %eax, 4(%esp)
    movl    %edx, (%esp)
    call    __ZStoRRSt13_Ios_FmtflagsS_
    movl    -4(%ebp), %eax
    leave
LCFI20:
    ret
LFE594:
    .section    .text$_ZSt3hexRSt8ios_base,"x"
    .linkonce discard
.globl __ZSt3hexRSt8ios_base
    .def    __ZSt3hexRSt8ios_base;  .scl    2;  .type   32; .endef
__ZSt3hexRSt8ios_base:
LFB622:
    pushl   %ebp
LCFI21:
    movl    %esp, %ebp
LCFI22:
    subl    $12, %esp
LCFI23:
    movl    $74, 8(%esp)
    movl    $8, 4(%esp)
    movl    8(%ebp), %eax
    movl    %eax, (%esp)
    call    __ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
    movl    8(%ebp), %eax
    leave
LCFI24:
    ret
LFE622:
.lcomm __ZStL8__ioinit,1,1
    .def    ___main;    .scl    2;  .type   32; .endef
    .section .rdata,"dr"
LC0:
    .ascii "king\0"
LC1:
    .ascii "l\0"
LC2:
    .ascii "i\0"
LC3:
    .ascii "n\0"
LC4:
    .ascii "w\0"
LC5:
    .ascii "e\0"
    .text
.globl _main
    .def    _main;  .scl    2;  .type   32; .endef
_main:
LFB944:
    pushl   %ebp
LCFI25:
    movl    %esp, %ebp
LCFI26:
    andl    $-16, %esp
LCFI27:
    pushl   %edi
LCFI28:
    pushl   %esi
LCFI29:
    pushl   %ebx
LCFI30:
    subl    $52, %esp
LCFI31:
    call    ___main
    movl    $44, (%esp)
LEHB0:
    call    __Znaj
LEHE0:
    movl    %eax, %ebx
    movl    %ebx, %eax
    movl    $10, (%eax)
    movl    %ebx, %eax
    leal    4(%eax), %edi
    movl    %edi, 28(%esp)
    movl    $9, %esi
    jmp L9
L10:
    movl    28(%esp), %eax
    movl    %eax, (%esp)
LEHB1:
    call    __ZNSsC1Ev
LEHE1:
    addl    $4, 28(%esp)
    decl    %esi
L9:
    cmpl    $-1, %esi
    setne   %al
    testb   %al, %al
    jne L10
    movl    %ebx, %eax
    addl    $4, %eax
    movl    %eax, 40(%esp)
    movl    $LC0, 4(%esp)
    movl    40(%esp), %eax
    movl    %eax, (%esp)
LEHB2:
    call    __ZNSsaSEPKc
    movl    40(%esp), %eax
    addl    $4, %eax
    movl    $LC1, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSsaSEPKc
    movl    40(%esp), %eax
    addl    $8, %eax
    movl    $LC2, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSsaSEPKc
    movl    40(%esp), %eax
    addl    $12, %eax
    movl    $LC3, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSsaSEPKc
    movl    40(%esp), %eax
    addl    $16, %eax
    movl    $LC4, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSsaSEPKc
    movl    40(%esp), %eax
    addl    $20, %eax
    movl    $LC5, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSsaSEPKc
    movl    40(%esp), %eax
    addl    $24, %eax
    movl    $LC2, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSsaSEPKc
    movl    $0, 44(%esp)
    jmp L11
L12:
    movl    44(%esp), %eax
    sall    $2, %eax
    addl    40(%esp), %eax
    movl    %eax, 4(%esp)
    movl    $__ZSt4cout, (%esp)
    call    __ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E
    incl    44(%esp)
L11:
    cmpl    $9, 44(%esp)
    setbe   %al
    testb   %al, %al
    jne L12
    movl    $__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
    movl    $__ZSt4cout, (%esp)
    call    __ZNSolsEPFRSoS_E
    movl    40(%esp), %ebx
    addl    $4, 40(%esp)
    movl    $__ZSt3hexRSt8ios_base, 4(%esp)
    movl    $__ZSt4cout, (%esp)
    call    __ZNSolsEPFRSt8ios_baseS0_E
    movl    %ebx, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSolsEPKv
    movl    $__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSolsEPFRSoS_E
    movl    40(%esp), %ebx
    addl    $4, 40(%esp)
    movl    $__ZSt3hexRSt8ios_base, 4(%esp)
    movl    $__ZSt4cout, (%esp)
    call    __ZNSolsEPFRSt8ios_baseS0_E
    movl    %ebx, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSolsEPKv
    movl    $__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSolsEPFRSoS_E
    movl    $80, (%esp)
    call    __Znaj
    movl    %eax, %esi
    movl    %esi, %eax
    movl    %eax, %ecx
    movl    $9, %ebx
    jmp L13
L14:
    movl    $0, %eax
    movl    $0, %edx
    movl    %eax, (%ecx)
    movl    %edx, 4(%ecx)
    addl    $8, %ecx
    decl    %ebx
L13:
    cmpl    $-1, %ebx
    setne   %al
    testb   %al, %al
    jne L14
    movl    %esi, 36(%esp)
    movl    36(%esp), %eax
    addl    $8, 36(%esp)
    movl    %eax, 4(%esp)
    movl    $__ZSt4cout, (%esp)
    call    __ZNSolsEPKv
    movl    $__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSolsEPFRSoS_E
    movl    36(%esp), %eax
    addl    $8, 36(%esp)
    movl    %eax, 4(%esp)
    movl    $__ZSt4cout, (%esp)
    call    __ZNSolsEPKv
    movl    $__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSolsEPFRSoS_E
    movl    $0, (%esp)
    call    __Znaj
    movl    %eax, 32(%esp)
    movl    32(%esp), %eax
    movl    (%eax), %eax
    movl    %eax, 4(%esp)
    movl    $__ZSt4cout, (%esp)
    call    __ZNSolsEi
    movl    $__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
    movl    %eax, (%esp)
    call    __ZNSolsEPFRSoS_E
LEHE2:
    movl    $0, %eax
    addl    $52, %esp
    popl    %ebx
LCFI32:
    popl    %esi
LCFI33:
    popl    %edi
LCFI34:
    leave
LCFI35:
    ret
L18:
LCFI36:
    movl    %eax, 24(%esp)
    testl   %edi, %edi
    je  L16
    movl    $9, %eax
    subl    %esi, %eax
    sall    $2, %eax
    leal    (%edi,%eax), %esi
L17:
    cmpl    %edi, %esi
    je  L16
    subl    $4, %esi
    movl    %esi, (%esp)
    call    __ZNSsD1Ev
    jmp L17
L16:
    movl    24(%esp), %esi
    movl    %ebx, (%esp)
    call    __ZdaPv
    movl    %esi, %eax
    movl    %eax, (%esp)
LEHB3:
    call    __Unwind_Resume
LEHE3:
LFE944:
    .def    ___gxx_personality_v0;  .scl    2;  .type   32; .endef
    .section    .gcc_except_table,"w"
LLSDA944:
    .byte   0xff
    .byte   0xff
    .byte   0x1
    .uleb128 LLSDACSE944-LLSDACSB944
LLSDACSB944:
    .uleb128 LEHB0-LFB944
    .uleb128 LEHE0-LEHB0
    .uleb128 0x0
    .uleb128 0x0
    .uleb128 LEHB1-LFB944
    .uleb128 LEHE1-LEHB1
    .uleb128 L18-LFB944
    .uleb128 0x0
    .uleb128 LEHB2-LFB944
    .uleb128 LEHE2-LEHB2
    .uleb128 0x0
    .uleb128 0x0
    .uleb128 LEHB3-LFB944
    .uleb128 LEHE3-LEHB3
    .uleb128 0x0
    .uleb128 0x0
LLSDACSE944:
    .text
    .def    ___tcf_0;   .scl    3;  .type   32; .endef
___tcf_0:
LFB995:
    pushl   %ebp
LCFI37:
    movl    %esp, %ebp
LCFI38:
    subl    $24, %esp
LCFI39:
    movl    $__ZStL8__ioinit, (%esp)
    call    __ZNSt8ios_base4InitD1Ev
    leave
LCFI40:
    ret
LFE995:
    .def    __Z41__static_initialization_and_destruction_0ii;   .scl    3;  .type   32; .endef
__Z41__static_initialization_and_destruction_0ii:
LFB994:
    pushl   %ebp
LCFI41:
    movl    %esp, %ebp
LCFI42:
    subl    $24, %esp
LCFI43:
    cmpl    $1, 8(%ebp)
    jne L20
    cmpl    $65535, 12(%ebp)
    jne L20
    movl    $__ZStL8__ioinit, (%esp)
    call    __ZNSt8ios_base4InitC1Ev
    movl    $___tcf_0, (%esp)
    call    _atexit
L20:
    leave
LCFI44:
    ret
LFE994:
    .def    __GLOBAL__I_main;   .scl    3;  .type   32; .endef
__GLOBAL__I_main:
LFB996:
    pushl   %ebp
LCFI45:
    movl    %esp, %ebp
LCFI46:
    subl    $24, %esp
LCFI47:
    movl    $65535, 4(%esp)
    movl    $1, (%esp)
    call    __Z41__static_initialization_and_destruction_0ii
    leave
LCFI48:
    ret
LFE996:
    .section    .ctors,"w"
    .align 4
    .long   __GLOBAL__I_main
    .section    .eh_frame,"w"
Lframe1:
    .long   LECIE1-LSCIE1
LSCIE1:
    .long   0x0
    .byte   0x1
    .ascii "zPL\0"
    .uleb128 0x1
    .sleb128 -4
    .byte   0x8
    .uleb128 0x6
    .byte   0x0
    .long   ___gxx_personality_v0
    .byte   0x0
    .byte   0xc
    .uleb128 0x4
    .uleb128 0x4
    .byte   0x88
    .uleb128 0x1
    .align 4
LECIE1:
LSFDE1:
    .long   LEFDE1-LASFDE1
LASFDE1:
    .long   LASFDE1-Lframe1
    .long   LFB944
    .long   LFE944-LFB944
    .uleb128 0x4
    .long   LLSDA944
    .byte   0x4
    .long   LCFI25-LFB944
    .byte   0xe
    .uleb128 0x8
    .byte   0x85
    .uleb128 0x2
    .byte   0x4
    .long   LCFI26-LCFI25
    .byte   0xd
    .uleb128 0x5
    .byte   0x4
    .long   LCFI31-LCFI26
    .byte   0x10
    .byte   0x3
    .uleb128 0x8
    .byte   0x75
    .sleb128 0
    .byte   0x9
    .byte   0xf0
    .byte   0x1a
    .byte   0x9
    .byte   0xf4
    .byte   0x22
    .byte   0x10
    .byte   0x6
    .uleb128 0x8
    .byte   0x75
    .sleb128 0
    .byte   0x9
    .byte   0xf0
    .byte   0x1a
    .byte   0x9
    .byte   0xf8
    .byte   0x22
    .byte   0x10
    .byte   0x7
    .uleb128 0x8
    .byte   0x75
    .sleb128 0
    .byte   0x9
    .byte   0xf0
    .byte   0x1a
    .byte   0x9
    .byte   0xfc
    .byte   0x22
    .byte   0x4
    .long   LCFI32-LCFI31
    .byte   0xa
    .byte   0xc3
    .byte   0x4
    .long   LCFI33-LCFI32
    .byte   0xc6
    .byte   0x4
    .long   LCFI34-LCFI33
    .byte   0xc7
    .byte   0x4
    .long   LCFI35-LCFI34
    .byte   0xc5
    .byte   0xc
    .uleb128 0x4
    .uleb128 0x4
    .byte   0x4
    .long   LCFI36-LCFI35
    .byte   0xb
    .align 4
LEFDE1:
LSFDE3:
    .long   LEFDE3-LASFDE3
LASFDE3:
    .long   LASFDE3-Lframe1
    .long   LFB995
    .long   LFE995-LFB995
    .uleb128 0x4
    .long   0x0
    .byte   0x4
    .long   LCFI37-LFB995
    .byte   0xe
    .uleb128 0x8
    .byte   0x85
    .uleb128 0x2
    .byte   0x4
    .long   LCFI38-LCFI37
    .byte   0xd
    .uleb128 0x5
    .byte   0x4
    .long   LCFI40-LCFI38
    .byte   0xc5
    .byte   0xc
    .uleb128 0x4
    .uleb128 0x4
    .align 4
LEFDE3:
LSFDE5:
    .long   LEFDE5-LASFDE5
LASFDE5:
    .long   LASFDE5-Lframe1
    .long   LFB994
    .long   LFE994-LFB994
    .uleb128 0x4
    .long   0x0
    .byte   0x4
    .long   LCFI41-LFB994
    .byte   0xe
    .uleb128 0x8
    .byte   0x85
    .uleb128 0x2
    .byte   0x4
    .long   LCFI42-LCFI41
    .byte   0xd
    .uleb128 0x5
    .byte   0x4
    .long   LCFI44-LCFI42
    .byte   0xc5
    .byte   0xc
    .uleb128 0x4
    .uleb128 0x4
    .align 4
LEFDE5:
LSFDE7:
    .long   LEFDE7-LASFDE7
LASFDE7:
    .long   LASFDE7-Lframe1
    .long   LFB996
    .long   LFE996-LFB996
    .uleb128 0x4
    .long   0x0
    .byte   0x4
    .long   LCFI45-LFB996
    .byte   0xe
    .uleb128 0x8
    .byte   0x85
    .uleb128 0x2
    .byte   0x4
    .long   LCFI46-LCFI45
    .byte   0xd
    .uleb128 0x5
    .byte   0x4
    .long   LCFI48-LCFI46
    .byte   0xc5
    .byte   0xc
    .uleb128 0x4
    .uleb128 0x4
    .align 4
LEFDE7:
    .def    __ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;    .scl    2;  .type   32; .endef
    .def    __Unwind_Resume;    .scl    2;  .type   32; .endef
    .def    __Znaj; .scl    2;  .type   32; .endef
    .def    __ZNSsC1Ev; .scl    2;  .type   32; .endef
    .def    __ZNSsaSEPKc;   .scl    2;  .type   32; .endef
    .def    __ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E;   .scl    2;  .type   32; .endef
    .def    __ZNSolsEPFRSoS_E;  .scl    2;  .type   32; .endef
    .def    __ZNSolsEPFRSt8ios_baseS0_E;    .scl    2;  .type   32; .endef
    .def    __ZNSolsEPKv;   .scl    2;  .type   32; .endef
    .def    __ZNSolsEi; .scl    2;  .type   32; .endef
    .def    __ZNSsD1Ev; .scl    2;  .type   32; .endef
    .def    __ZdaPv;    .scl    2;  .type   32; .endef
    .def    __ZNSt8ios_base4InitD1Ev;   .scl    2;  .type   32; .endef
    .def    __ZNSt8ios_base4InitC1Ev;   .scl    2;  .type   32; .endef
    .def    _atexit;    .scl    2;  .type   32; .endef
