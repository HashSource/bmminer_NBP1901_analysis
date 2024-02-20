
        processor p16f1704
        radix dec
        include p16f1704.inc

; The recognition of labels and registers is not always good, therefore
; be treated cautiously the results.

        CONFIG  FOSC     = INTOSC
        CONFIG  WDTE     = NSLEEP
        CONFIG  PWRTE    = ON
        CONFIG  MCLRE    = OFF
        CONFIG  CP       = OFF
        CONFIG  BOREN    = ON
        CONFIG  CLKOUTEN = OFF
        CONFIG  IESO     = ON
        CONFIG  FCMEN    = ON
        CONFIG  WRT      = BOOT
        CONFIG  PPS1WAY  = ON
        CONFIG  ZCDDIS   = ON
        CONFIG  PLLEN    = ON
        CONFIG  STVREN   = ON
        CONFIG  BORV     = LO
        CONFIG  LPBOR    = OFF
        CONFIG  DEBUG    = OFF
        CONFIG  LVP      = OFF

;===============================================================================
; DATA address definitions

Common_RAM      equ     0x0070                              ; size: 16 bytes

;===============================================================================
; CODE area

        ; code

        org     __CODE_START                                ; address: 0x0000

vector_reset                                                ; address: 0x0000

        movlp   0x00
        goto    label_002

        ; code

        org     __VECTOR_INT                                ; address: 0x0004

vector_int                                                  ; address: 0x0004

        bsf     (Common_RAM + 14), 0x0                      ; reg: 0x07e
        movlp   0x00
        movlb   0x00
        movf    (Common_RAM + 15), W                        ; reg: 0x07f
        movwf   Common_RAM                                  ; reg: 0x070
        goto    function_018
        movf    Common_RAM, W                               ; reg: 0x070
        movlb   0x00
        movwf   (Common_RAM + 15)                           ; reg: 0x07f
        bcf     (Common_RAM + 14), 0x0                      ; reg: 0x07e
        retfie

label_002                                                   ; address: 0x000f

        movlp   0x00
        goto    label_003

label_003                                                   ; address: 0x0011

        clrf    (Common_RAM + 11)                           ; reg: 0x07b
        clrf    (Common_RAM + 12)                           ; reg: 0x07c
        movlw   0x58
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x00
        movwf   FSR0H                                       ; reg: 0x005
        movlw   0x0f
        movlp   0x05
        call    function_017
        movlp   0x00
        movlw   0xa0
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x00
        movwf   FSR0H                                       ; reg: 0x005
        movlw   0x50
        movlp   0x05
        call    function_017
        movlp   0x00
        movlw   0x20
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x01
        movwf   FSR0H                                       ; reg: 0x005
        movlw   0x20
        movlp   0x05
        call    function_017
        bcf     (Common_RAM + 14), 0x0                      ; reg: 0x07e
        movlb   0x00
        movlp   0x04
        goto    label_076

function_000                                                ; address: 0x002e

        movwf   (Common_RAM + 8)                            ; reg: 0x078
        clrf    (Common_RAM + 9)                            ; reg: 0x079
        clrf    (Common_RAM + 10)                           ; reg: 0x07a
        clrf    (Common_RAM + 4)                            ; reg: 0x074
        clrf    (Common_RAM + 5)                            ; reg: 0x075
        clrf    (Common_RAM + 6)                            ; reg: 0x076
        clrf    (Common_RAM + 7)                            ; reg: 0x077
        goto    label_018

label_004                                                   ; address: 0x0036

        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        movf    0x78, W                                     ; reg: 0x0f8
        addlw   0x03
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movf    (Common_RAM + 8), W                         ; reg: 0x078
        addlw   0x02
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x22                                        ; reg: 0x022
        clrf    0x23                                        ; reg: 0x023
        movf    0x22, W                                     ; reg: 0x022
        movwf   0x23                                        ; reg: 0x023
        clrf    0x22                                        ; reg: 0x022
        movf    0x20, W                                     ; reg: 0x020
        iorwf   0x22, W                                     ; reg: 0x022
        movwf   (Common_RAM + 9)                            ; reg: 0x079
        movf    0x21, W                                     ; reg: 0x021
        iorwf   0x23, W                                     ; reg: 0x023
        movwf   (Common_RAM + 10)                           ; reg: 0x07a
        movlw   0x06
        subwf   (Common_RAM + 10), W                        ; reg: 0x07a
        movlw   0x00
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 9), W                         ; reg: 0x079
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_005
        movlb   0x01
        clrf    0x21                                        ; reg: 0x0a1
        goto    label_006

label_005                                                   ; address: 0x005e

        movf    (Common_RAM + 8), W                         ; reg: 0x078
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        moviw   .2[INDF1]
        movlb   0x00
        movwf   0x5d                                        ; reg: 0x05d
        movf    (Common_RAM + 8), W                         ; reg: 0x078
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        moviw   .3[INDF1]
        movwf   0x5c                                        ; reg: 0x05c
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x21                                        ; reg: 0x0a1

label_006                                                   ; address: 0x006e

        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x65                                        ; reg: 0x065
        return

label_007                                                   ; address: 0x0079

        clrf    (Common_RAM + 9)                            ; reg: 0x079
        clrf    (Common_RAM + 10)                           ; reg: 0x07a
        movlw   0x00
        subwf   (Common_RAM + 10), W                        ; reg: 0x07a
        movlw   0x10
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 9), W                         ; reg: 0x079
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_009

label_008                                                   ; address: 0x0082

        movf    (Common_RAM + 9), W                         ; reg: 0x079
        addlw   0x02
        addwf   (Common_RAM + 8), W                         ; reg: 0x078
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x21                                        ; reg: 0x021
        movf    (Common_RAM + 9), W                         ; reg: 0x079
        addlw   0xe0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x21, W                                     ; reg: 0x021
        movwf   INDF1                                       ; reg: 0x001
        movlw   0x01
        addwf   (Common_RAM + 9), F                         ; reg: 0x079
        movlw   0x00
        addwfc  (Common_RAM + 10), F                        ; reg: 0x07a
        movlw   0x00
        subwf   (Common_RAM + 10), W                        ; reg: 0x07a
        movlw   0x10
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 9), W                         ; reg: 0x079
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_008

label_009                                                   ; address: 0x009d

        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x21                                        ; reg: 0x0a1
        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x65                                        ; reg: 0x065
        return

label_010                                                   ; address: 0x00b4

        movlw   0x14
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        movlw   0x03
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x21                                        ; reg: 0x0a1
        movf    0x20, W                                     ; reg: 0x0a0
        addwf   0x21, W                                     ; reg: 0x0a1
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        rlf     0x21, F                                     ; reg: 0x021
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 6)                            ; reg: 0x076
        movf    0x21, W                                     ; reg: 0x021
        movwf   (Common_RAM + 7)                            ; reg: 0x077
        clrf    (Common_RAM + 9)                            ; reg: 0x079
        clrf    (Common_RAM + 10)                           ; reg: 0x07a
        movlw   0x00
        subwf   (Common_RAM + 10), W                        ; reg: 0x07a
        movlw   0x10
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 9), W                         ; reg: 0x079
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_012

label_011                                                   ; address: 0x00d3

        movf    0x5d, W                                     ; reg: 0x05d
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    0x5c, W                                     ; reg: 0x05c
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlp   0x05
        call    function_012
        movlp   0x00
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movwf   (Common_RAM + 5)                            ; reg: 0x075
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   (Common_RAM + 4)                            ; reg: 0x074
        movf    (Common_RAM + 5), W                         ; reg: 0x075
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    (Common_RAM + 9), W                         ; reg: 0x079
        addlw   0x02
        addlw   0xa0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x20, W                                     ; reg: 0x020
        movwf   INDF1                                       ; reg: 0x001
        movf    (Common_RAM + 4), W                         ; reg: 0x074
        movwf   0x20                                        ; reg: 0x020
        movf    (Common_RAM + 9), W                         ; reg: 0x079
        addlw   0x03
        addlw   0xa0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x20, W                                     ; reg: 0x020
        movwf   INDF1                                       ; reg: 0x001
        movlw   0x01
        addwf   0x5c, F                                     ; reg: 0x05c
        movlw   0x00
        addwfc  0x5d, F                                     ; reg: 0x05d
        movf    (Common_RAM + 9), W                         ; reg: 0x079
        addlw   0x02
        addlw   0xa0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movf    0x20, W                                     ; reg: 0x020
        addwf   (Common_RAM + 6), F                         ; reg: 0x076
        movf    0x21, W                                     ; reg: 0x021
        addwfc  (Common_RAM + 7), F                         ; reg: 0x077
        movf    (Common_RAM + 9), W                         ; reg: 0x079
        addlw   0x03
        addlw   0xa0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movf    0x20, W                                     ; reg: 0x020
        addwf   (Common_RAM + 6), F                         ; reg: 0x076
        movf    0x21, W                                     ; reg: 0x021
        addwfc  (Common_RAM + 7), F                         ; reg: 0x077
        movlw   0x02
        addwf   (Common_RAM + 9), F                         ; reg: 0x079
        movlw   0x00
        addwfc  (Common_RAM + 10), F                        ; reg: 0x07a
        movlw   0x00
        subwf   (Common_RAM + 10), W                        ; reg: 0x07a
        movlw   0x10
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 9), W                         ; reg: 0x079
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_011

label_012                                                   ; address: 0x0118

        movf    (Common_RAM + 7), W                         ; reg: 0x077
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x32                                        ; reg: 0x0b2
        movf    0x76, W                                     ; reg: 0x0f6
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x33                                        ; reg: 0x0b3
        movlw   0x14
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x65                                        ; reg: 0x065
        return

label_013                                                   ; address: 0x012e

        movlw   0x04
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x21                                        ; reg: 0x0a1
        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x65                                        ; reg: 0x065
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x60                                        ; reg: 0x060
        return

label_014                                                   ; address: 0x0149

        movlw   0x05
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x21                                        ; reg: 0x0a1
        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x65                                        ; reg: 0x065
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x5f                                        ; reg: 0x05f
        return

label_015                                                   ; address: 0x0164

        movlw   0x06
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x21                                        ; reg: 0x0a1
        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x65                                        ; reg: 0x065
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x61                                        ; reg: 0x061
        return

label_016                                                   ; address: 0x017f

        movlw   0x07
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x21                                        ; reg: 0x0a1
        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x65                                        ; reg: 0x065
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x62                                        ; reg: 0x062
        return

label_017                                                   ; address: 0x019a

        movlw   0x06
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        movlw   0x08
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x21                                        ; reg: 0x0a1
        movlb   0x00
        movf    0x5d, W                                     ; reg: 0x05d
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x22                                        ; reg: 0x0a2
        movlb   0x00
        movf    0x5c, W                                     ; reg: 0x05c
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x23                                        ; reg: 0x0a3
        movf    0x23, W                                     ; reg: 0x0a3
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movlb   0x01
        movf    0x22, W                                     ; reg: 0x0a2
        movlb   0x00
        movwf   0x22                                        ; reg: 0x022
        clrf    0x23                                        ; reg: 0x023
        movlb   0x01
        movf    0x20, W                                     ; reg: 0x0a0
        addwf   0x21, W                                     ; reg: 0x0a1
        movlb   0x00
        movwf   0x24                                        ; reg: 0x024
        clrf    0x25                                        ; reg: 0x025
        rlf     0x25, F                                     ; reg: 0x025
        movf    0x22, W                                     ; reg: 0x022
        addwf   0x24, W                                     ; reg: 0x024
        movwf   0x26                                        ; reg: 0x026
        movf    0x23, W                                     ; reg: 0x023
        addwfc  0x25, W                                     ; reg: 0x025
        movwf   0x27                                        ; reg: 0x027
        movf    0x20, W                                     ; reg: 0x020
        addwf   0x26, W                                     ; reg: 0x026
        movwf   0x28                                        ; reg: 0x028
        movf    0x21, W                                     ; reg: 0x021
        addwfc  0x27, W                                     ; reg: 0x027
        movwf   0x29                                        ; reg: 0x029
        movf    0x28, W                                     ; reg: 0x028
        movwf   (Common_RAM + 9)                            ; reg: 0x079
        movf    0x29, W                                     ; reg: 0x029
        movwf   (Common_RAM + 10)                           ; reg: 0x07a
        movf    (Common_RAM + 10), W                        ; reg: 0x07a
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x24                                        ; reg: 0x0a4
        movf    0x79, W                                     ; reg: 0x0f9
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x25                                        ; reg: 0x0a5
        movlw   0x06
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x65                                        ; reg: 0x065
        return

label_018                                                   ; address: 0x01e8

        incf    (Common_RAM + 8), W                         ; reg: 0x078

label_019                                                   ; address: 0x01e9

        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        addlw   0xff
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        return

label_020                                                   ; address: 0x01ef

        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x08
        subwf   FSR0L, W                                    ; reg: 0x004
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        return
        movlp   0x05
        lslf    FSR0L, W                                    ; reg: 0x004

label_021                                                   ; address: 0x01f6

        addlw   0x21
        movwf   PCL                                         ; reg: 0x002
        return

function_001                                                ; address: 0x01f9

        movlb   0x00
        clrf    0x4c                                        ; reg: 0x04c
        clrf    0x4d                                        ; reg: 0x04d
        clrf    0x50                                        ; reg: 0x050
        clrf    0x51                                        ; reg: 0x051
        clrf    0x4e                                        ; reg: 0x04e
        clrf    0x4f                                        ; reg: 0x04f
        movlw   0x20
        movwf   FSR1L                                       ; reg: 0x006
        movlw   0x01
        movwf   FSR1H                                       ; reg: 0x007
        movlw   0x2c
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x00
        movwf   FSR0H                                       ; reg: 0x005
        movlw   0x20
        movwf   0x2a                                        ; reg: 0x02a

label_022                                                   ; address: 0x020a

        moviw   INDF1++
        movwi   INDF0++
        decfsz  0x2a, F                                     ; reg: 0x02a
        goto    label_022
        movf    0x63, W                                     ; reg: 0x063
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2

label_023                                                   ; address: 0x0210

        return
        clrf    0x63                                        ; reg: 0x063
        clrf    (Common_RAM + 12)                           ; reg: 0x07c
        movlb   0x01
        movf    0x42, W                                     ; reg: 0x0c2
        movlb   0x00

label_024                                                   ; address: 0x0216

        movwf   0x2a                                        ; reg: 0x02a
        clrf    0x2b                                        ; reg: 0x02b
        movf    0x2a, W                                     ; reg: 0x02a
        movwf   0x4e                                        ; reg: 0x04e
        movf    0x2b, W                                     ; reg: 0x02b
        movwf   0x4f                                        ; reg: 0x04f

label_025                                                   ; address: 0x021c

        clrf    0x50                                        ; reg: 0x050
        clrf    0x51                                        ; reg: 0x051

label_026                                                   ; address: 0x021e

        movf    0x4f, W                                     ; reg: 0x04f
        subwf   0x51, W                                     ; reg: 0x051
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_027
        movf    0x4e, W                                     ; reg: 0x04e
        subwf   0x50, W                                     ; reg: 0x050

label_027                                                   ; address: 0x0224

        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0

label_028                                                   ; address: 0x0225

        goto    label_033
        movf    0x50, W                                     ; reg: 0x050
        addlw   0x02
        addlw   0xc0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007

label_029                                                   ; address: 0x022b

        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x2a                                        ; reg: 0x02a
        movf    0x50, W                                     ; reg: 0x050
        addlw   0x2c
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007

label_030                                                   ; address: 0x0231

        movf    0x2a, W                                     ; reg: 0x02a
        movwf   INDF1                                       ; reg: 0x001
        movf    0x50, W                                     ; reg: 0x050
        addlw   0xc0
        movwf   FSR1L                                       ; reg: 0x006

label_031                                                   ; address: 0x0236

        clrf    FSR1H                                       ; reg: 0x007
        clrf    INDF1                                       ; reg: 0x001
        movlw   0x01
        addwf   0x50, F                                     ; reg: 0x050

label_032                                                   ; address: 0x023a

        movlw   0x00
        addwfc  0x51, F                                     ; reg: 0x051
        goto    label_026

label_033                                                   ; address: 0x023d

        movlb   0x01

label_034                                                   ; address: 0x023e

        clrf    0x40                                        ; reg: 0x040
        clrf    0x41                                        ; reg: 0x041
        movlw   0x55
        movlp   0x05
        call    function_016
        movlp   0x01
        movlw   0xaa
        movlp   0x05
        call    function_016
        movlp   0x01
        movlb   0x00
        clrf    0x50                                        ; reg: 0x050
        clrf    0x51                                        ; reg: 0x051

label_035                                                   ; address: 0x024b

        movf    0x4f, W                                     ; reg: 0x04f
        subwf   0x51, W                                     ; reg: 0x051
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_036
        movf    0x4e, W                                     ; reg: 0x04e
        subwf   0x50, W                                     ; reg: 0x050

label_036                                                   ; address: 0x0251

        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0

label_037                                                   ; address: 0x0252

        goto    label_040
        movf    0x50, W                                     ; reg: 0x050
        addlw   0x2c
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001

label_038                                                   ; address: 0x0258

        movlp   0x05
        call    function_016
        movlp   0x01
        movlw   0x01
        movlb   0x00
        addwf   0x50, F                                     ; reg: 0x050

label_039                                                   ; address: 0x025e

        movlw   0x00
        addwfc  0x51, F                                     ; reg: 0x051
        goto    label_035

label_040                                                   ; address: 0x0261

        clrf    0x50                                        ; reg: 0x050
        clrf    0x51                                        ; reg: 0x051

label_041                                                   ; address: 0x0263

        movf    0x4e, W                                     ; reg: 0x04e
        addlw   0xfe
        movwf   0x2a                                        ; reg: 0x02a
        movlw   0xff

label_042                                                   ; address: 0x0267

        addwfc  0x4f, W                                     ; reg: 0x04f
        movwf   0x2b                                        ; reg: 0x02b
        movf    0x2b, W                                     ; reg: 0x02b
        subwf   0x51, W                                     ; reg: 0x051
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_044

label_043                                                   ; address: 0x026d

        movf    0x2a, W                                     ; reg: 0x02a
        subwf   0x50, W                                     ; reg: 0x050

label_044                                                   ; address: 0x026f

        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_046
        movf    0x50, W                                     ; reg: 0x050
        addlw   0x2c

label_045                                                   ; address: 0x0273

        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x2a                                        ; reg: 0x02a
        clrf    0x2b                                        ; reg: 0x02b
        movf    0x2a, W                                     ; reg: 0x02a
        addwf   0x4c, F                                     ; reg: 0x04c
        movf    0x2b, W                                     ; reg: 0x02b
        addwfc  0x4d, F                                     ; reg: 0x04d
        movlw   0x01
        addwf   0x50, F                                     ; reg: 0x050
        movlw   0x00
        addwfc  0x51, F                                     ; reg: 0x051
        goto    label_041

label_046                                                   ; address: 0x0281

        movf    0x4e, W                                     ; reg: 0x04e
        addlw   0xfe
        addlw   0x2c
        movwf   FSR1L                                       ; reg: 0x006

label_047                                                   ; address: 0x0285

        clrf    FSR1H                                       ; reg: 0x007
        movf    0x4d, W                                     ; reg: 0x04d
        movwf   0x2b                                        ; reg: 0x02b
        movf    0x4c, W                                     ; reg: 0x04c
        movwf   0x2a                                        ; reg: 0x02a
        movf    0x2b, W                                     ; reg: 0x02b
        movwf   0x2a                                        ; reg: 0x02a
        clrf    0x2b                                        ; reg: 0x02b
        movf    0x2a, W                                     ; reg: 0x02a
        xorwf   INDF1, W                                    ; reg: 0x001
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_050
        movf    0x4e, W                                     ; reg: 0x04e
        addlw   0xff
        addlw   0x2c
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        xorwf   0x4c, W                                     ; reg: 0x04c
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_050
        clrf    0x50                                        ; reg: 0x050
        clrf    0x51                                        ; reg: 0x051
        movlw   0x00
        subwf   0x51, W                                     ; reg: 0x051
        movlw   0x20
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x50, W                                     ; reg: 0x050
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_049

label_048                                                   ; address: 0x02a3

        movlw   0x45
        movwf   0x2a                                        ; reg: 0x02a
        movf    0x50, W                                     ; reg: 0x050
        addlw   0xa0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x2a, W                                     ; reg: 0x02a
        movwf   INDF1                                       ; reg: 0x001
        movlw   0x01
        addwf   0x50, F                                     ; reg: 0x050
        movlw   0x00
        addwfc  0x51, F                                     ; reg: 0x051
        movlw   0x00
        subwf   0x51, W                                     ; reg: 0x051
        movlw   0x20
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x50, W                                     ; reg: 0x050
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_048

label_049                                                   ; address: 0x02b6

        movf    0x4e, W                                     ; reg: 0x04e
        movwf   0x2a                                        ; reg: 0x02a
        movf    0x2a, W                                     ; reg: 0x02a
        movwf   (Common_RAM + 3)                            ; reg: 0x073
        movlw   0x2c
        movlp   0x00
        call    function_000
        return

label_050                                                   ; address: 0x02be

        movlw   0xfc
        movlp   0x05
        call    function_016
        movlb   0x00
        movf    0x2d, W                                     ; reg: 0x02d
        movwf   0x2a                                        ; reg: 0x02a
        movf    0x2a, W                                     ; reg: 0x02a
        movlb   0x01
        movwf   0x20                                        ; reg: 0x0a0
        clrf    0x21                                        ; reg: 0x0a1
        movlw   0x02
        movlb   0x00
        movwf   0x2a                                        ; reg: 0x02a
        movf    0x2a, W                                     ; reg: 0x02a
        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    0x64                                        ; reg: 0x064
        movlw   0x01
        movwf   0x2a                                        ; reg: 0x02a
        movf    0x2a, W                                     ; reg: 0x02a
        movwf   0x65                                        ; reg: 0x065
        return

function_002                                                ; address: 0x02d3

        movlb   0x00
        btfss   PIR1, SSP1IF                                ; reg: 0x011, bit: 3
        return
        movlb   0x04
        btfsc   SSPSTAT, R_NOT_W                            ; reg: 0x214, bit: 2
        goto    label_054
        btfsc   0x14, 0x5                                   ; reg: 0x014
        goto    label_051
        movf    PIR1, W                                     ; reg: 0x011
        movlb   0x00
        movwf   0x52                                        ; reg: 0x052
        movf    0x52, W                                     ; reg: 0x052
        movwf   0x53                                        ; reg: 0x053
        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4

label_051                                                   ; address: 0x02e2

        btfss   0x14, 0x5                                   ; reg: 0x014
        goto    label_054
        btfss   TMR0, 0x7                                   ; reg: 0x015
        goto    label_052
        movf    PIR1, W                                     ; reg: 0x011
        movlb   0x00
        movwf   0x52                                        ; reg: 0x052
        movf    0x52, W                                     ; reg: 0x052
        movwf   0x53                                        ; reg: 0x053
        movlb   0x04
        bcf     SSPCON1, WCOL                               ; reg: 0x215, bit: 7
        goto    label_053

label_052                                                   ; address: 0x02ee

        movlp   0x03
        call    function_003
        movlp   0x02
        movlp   0x01
        call    function_001
        movlp   0x02

label_053                                                   ; address: 0x02f4

        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4

label_054                                                   ; address: 0x02f6

        btfss   0x14, 0x2                                   ; reg: 0x014
        goto    label_063
        btfsc   0x14, 0x5                                   ; reg: 0x014
        goto    label_062
        movlp   0x04
        call    function_006
        movlp   0x02
        movlb   0x00
        movf    0x62, W                                     ; reg: 0x062
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_057
        movf    (Common_RAM + 11), W                        ; reg: 0x07b
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_057
        clrf    0x62                                        ; reg: 0x062
        clrf    0x5e                                        ; reg: 0x05e
        clrf    0x66                                        ; reg: 0x066
        clrf    0x54                                        ; reg: 0x054
        clrf    0x55                                        ; reg: 0x055
        movlw   0x00
        subwf   0x55, W                                     ; reg: 0x055
        movlw   0xff
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x54, W                                     ; reg: 0x054
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_056

label_055                                                   ; address: 0x0310

        movlw   0x01
        addwf   0x54, F                                     ; reg: 0x054
        movlw   0x00
        addwfc  0x55, F                                     ; reg: 0x055
        movlw   0x00
        subwf   0x55, W                                     ; reg: 0x055
        movlw   0xff
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x54, W                                     ; reg: 0x054
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_055

label_056                                                   ; address: 0x031b

        reset

label_057                                                   ; address: 0x031c

        movlb   0x00
        movf    0x5f, W                                     ; reg: 0x05f
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_058
        movf    (Common_RAM + 11), W                        ; reg: 0x07b
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_058
        clrf    0x5f                                        ; reg: 0x05f
        movf    0x5d, W                                     ; reg: 0x05d
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    0x5c, W                                     ; reg: 0x05c
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlw   0xe0
        movwf   0x52                                        ; reg: 0x052
        movf    0x52, W                                     ; reg: 0x052
        movwf   (Common_RAM + 3)                            ; reg: 0x073
        movlp   0x03
        call    function_004
        movlp   0x02
        movlw   0x08
        movlb   0x00
        addwf   0x5c, F                                     ; reg: 0x05c
        movlw   0x00
        addwfc  0x5d, F                                     ; reg: 0x05d

label_058                                                   ; address: 0x0334

        movf    0x60, W                                     ; reg: 0x060
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_059
        movf    (Common_RAM + 11), W                        ; reg: 0x07b
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_059
        clrf    0x60                                        ; reg: 0x060
        movf    0x5d, W                                     ; reg: 0x05d
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    0x5c, W                                     ; reg: 0x05c
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlp   0x04
        call    function_010
        movlp   0x02
        movlw   0x20
        movlb   0x00
        addwf   0x5c, F                                     ; reg: 0x05c
        movlw   0x00
        addwfc  0x5d, F                                     ; reg: 0x05d

label_059                                                   ; address: 0x0347

        movf    0x61, W                                     ; reg: 0x061
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_062
        movf    (Common_RAM + 11), W                        ; reg: 0x07b
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_062
        clrf    0x61                                        ; reg: 0x061
        bcf     PIR1, SSP1IF                                ; reg: 0x011, bit: 3
        movlb   0x04
        bsf     SSPCON1, SSPEN                              ; reg: 0x215, bit: 5
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4
        movlb   0x00
        clrf    0x54                                        ; reg: 0x054
        clrf    0x55                                        ; reg: 0x055
        movlw   0x00
        subwf   0x55, W                                     ; reg: 0x055
        movlw   0xff
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x54, W                                     ; reg: 0x054
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_061

label_060                                                   ; address: 0x035c

        movlw   0x01
        addwf   0x54, F                                     ; reg: 0x054
        movlw   0x00
        addwfc  0x55, F                                     ; reg: 0x055
        movlw   0x00
        subwf   0x55, W                                     ; reg: 0x055
        movlw   0xff
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x54, W                                     ; reg: 0x054
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_060

label_061                                                   ; address: 0x0367

        goto    label_088

label_062                                                   ; address: 0x0368

        movlb   0x04
        btfss   SSPSTAT, D_NOT_A                            ; reg: 0x214, bit: 5
        goto    label_063
        bsf     TMR0, 0x4                                   ; reg: 0x015

label_063                                                   ; address: 0x036c

        movlb   0x00
        bcf     PIR1, SSP1IF                                ; reg: 0x011, bit: 3
        return

function_003                                                ; address: 0x036f

        movlb   0x04
        movf    SSPBUF, W                                   ; reg: 0x211
        movwf   0x71                                        ; reg: 0x271
        movf    0x71, W                                     ; reg: 0x271
        movwf   0x73                                        ; reg: 0x273
        movf    0x7c, W                                     ; reg: 0x27c
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_064
        movlw   0x55
        xorwf   (Common_RAM + 3), W                         ; reg: 0x073
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_065

label_064                                                   ; address: 0x037b

        decf    (Common_RAM + 12), W                        ; reg: 0x07c
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_066
        movlw   0xaa
        xorwf   (Common_RAM + 3), W                         ; reg: 0x073
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_066

label_065                                                   ; address: 0x0382

        clrf    (Common_RAM + 12)                           ; reg: 0x07c
        movlb   0x00
        bcf     T2CON, TMR2ON                               ; reg: 0x01c, bit: 2
        clrf    TMR2                                        ; reg: 0x01a
        clrf    0x66                                        ; reg: 0x066
        goto    label_068

label_066                                                   ; address: 0x0388

        movf    (Common_RAM + 12), W                        ; reg: 0x07c
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_067
        movlb   0x00
        clrf    TMR2                                        ; reg: 0x01a
        bsf     T2CON, TMR2ON                               ; reg: 0x01c, bit: 2

label_067                                                   ; address: 0x038e

        movf    (Common_RAM + 3), W                         ; reg: 0x073
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 12), W                        ; reg: 0x07c
        addlw   0xc0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   INDF1                                       ; reg: 0x001
        movlw   0x01
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        addwf   (Common_RAM + 12), F                        ; reg: 0x07c
        movlw   0x03
        subwf   (Common_RAM + 12), W                        ; reg: 0x07c
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_068
        movlb   0x01
        movf    0x42, W                                     ; reg: 0x0c2
        addlw   0x02
        movwf   0x71                                        ; reg: 0x0f1
        movlw   0x00
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        movlw   0x01
        movwf   0x72                                        ; reg: 0x0f2
        movf    0x7c, W                                     ; reg: 0x0fc
        xorwf   0x71, W                                     ; reg: 0x0f1
        iorwf   0x72, W                                     ; reg: 0x0f2
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_068
        movlb   0x00
        bcf     T2CON, TMR2ON                               ; reg: 0x01c, bit: 2
        clrf    TMR2                                        ; reg: 0x01a
        clrf    0x66                                        ; reg: 0x066
        movlw   0x01
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   0x63                                        ; reg: 0x063

label_068                                                   ; address: 0x03b3

        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4
        return

function_004                                                ; address: 0x03b6

        movlw   0x06
        subwf   (Common_RAM + 2), W                         ; reg: 0x072
        movlw   0x00
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 1), W                         ; reg: 0x071
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_069
        movlw   0x00
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlw   0x06
        movwf   (Common_RAM + 2)                            ; reg: 0x072

label_069                                                   ; address: 0x03c1

        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movlb   0x03
        movwf   PMADRH                                      ; reg: 0x192
        movf    0x71, W                                     ; reg: 0x1f1
        movwf   PMADRL                                      ; reg: 0x191
        bsf     PMCON1, LWLO                                ; reg: 0x195, bit: 5
        bcf     PMCON1, CFGS                                ; reg: 0x195, bit: 6
        bsf     PMCON1, WREN                                ; reg: 0x195, bit: 2
        clrf    0x75                                        ; reg: 0x1f5
        movlw   0x10
        subwf   0x75, W                                     ; reg: 0x1f5
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_072

label_070                                                   ; address: 0x03ce

        movf    (Common_RAM + 5), W                         ; reg: 0x075
        addwf   (Common_RAM + 3), W                         ; reg: 0x073
        movwf   (Common_RAM + 4)                            ; reg: 0x074
        movf    (Common_RAM + 4), W                         ; reg: 0x074
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movlb   0x03
        movwf   PMDATH                                      ; reg: 0x194
        movf    0x75, W                                     ; reg: 0x1f5
        addlw   0x01
        addwf   0x73, W                                     ; reg: 0x1f3
        movwf   0x74                                        ; reg: 0x1f4
        movf    0x74, W                                     ; reg: 0x1f4
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   PMDATL                                      ; reg: 0x193
        movlw   0x0e
        subwf   0x75, W                                     ; reg: 0x1f5
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        bcf     PMCON1, LWLO                                ; reg: 0x195, bit: 5
        movlp   0x05
        call    function_015
        movlp   0x03
        nop
        nop
        movlw   0x0e
        subwf   (Common_RAM + 5), W                         ; reg: 0x075
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_071
        movlw   0x01
        movlb   0x03
        addwf   PMADRL, F                                   ; reg: 0x191
        movlw   0x00
        addwfc  PMADRH, F                                   ; reg: 0x192

label_071                                                   ; address: 0x03f2

        movlw   0x02
        movwf   (Common_RAM + 4)                            ; reg: 0x074
        movf    (Common_RAM + 4), W                         ; reg: 0x074
        addwf   (Common_RAM + 5), F                         ; reg: 0x075
        movlw   0x10
        subwf   (Common_RAM + 5), W                         ; reg: 0x075
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_070

label_072                                                   ; address: 0x03fa

        movlb   0x03
        bcf     PMCON1, WREN                                ; reg: 0x195, bit: 2
        return

function_005                                                ; address: 0x03fd

        clrf    (Common_RAM + 3)                            ; reg: 0x073
        movlb   0x00
        btfss   PIR1, TMR2IF                                ; reg: 0x011, bit: 1
        return
        bcf     PIR1, TMR2IF                                ; reg: 0x011, bit: 1
        clrf    TMR2                                        ; reg: 0x01a
        movlw   0x01
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        addwf   0x66, F                                     ; reg: 0x066
        movlw   0x19
        subwf   0x66, W                                     ; reg: 0x066
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        return
        clrf    (Common_RAM + 12)                           ; reg: 0x07c
        clrf    (Common_RAM + 3)                            ; reg: 0x073
        movlw   0x20
        subwf   (Common_RAM + 3), W                         ; reg: 0x073
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_074

label_073                                                   ; address: 0x0411

        movf    (Common_RAM + 3), W                         ; reg: 0x073
        addlw   0xc0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        clrf    INDF1                                       ; reg: 0x001
        movlw   0x01
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        addwf   (Common_RAM + 3), F                         ; reg: 0x073
        movlw   0x20
        subwf   (Common_RAM + 3), W                         ; reg: 0x073
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_073

label_074                                                   ; address: 0x041e

        movlb   0x00
        bcf     T2CON, TMR2ON                               ; reg: 0x01c, bit: 2
        clrf    0x66                                        ; reg: 0x066
        movlw   0x54
        movlp   0x05
        call    function_016
        movlp   0x03
        movlw   0x49
        movlp   0x05
        call    function_016
        movlp   0x03
        movlw   0x4d
        movlp   0x05
        call    function_016
        movlp   0x03
        movlw   0x45
        movlp   0x05
        call    function_016
        movlp   0x03
        movlw   0x52
        movlp   0x05
        call    function_016
        movlp   0x03
        movlw   0x32
        movlp   0x05
        call    function_016
        return

function_006                                                ; address: 0x0439

        movlb   0x04
        movf    SSPBUF, W                                   ; reg: 0x211
        movwf   0x72                                        ; reg: 0x272
        movf    0x72, W                                     ; reg: 0x272
        movwf   0x73                                        ; reg: 0x273
        movlb   0x00
        movf    0x65, W                                     ; reg: 0x065
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_075
        movf    (Common_RAM + 11), W                        ; reg: 0x07b
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        return
        movf    0x64, W                                     ; reg: 0x064
        addlw   0xa0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movlp   0x05
        call    function_016
        movlp   0x04
        movlb   0x00
        movf    0x64, W                                     ; reg: 0x064
        addlw   0xa0
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movlp   0x05
        call    function_014
        movlw   0x01
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movlb   0x00
        addwf   0x64, F                                     ; reg: 0x064
        movlw   0x01
        subwf   (Common_RAM + 11), F                        ; reg: 0x07b
        movf    (Common_RAM + 11), W                        ; reg: 0x07b
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        clrf    0x65                                        ; reg: 0x065
        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4
        return

label_075                                                   ; address: 0x0462

        movlw   0xff
        movlp   0x05
        call    function_014
        movlp   0x04
        movlw   0xff
        movlp   0x05
        call    function_016
        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4
        return

label_076                                                   ; address: 0x046c

        movlb   0x00
        clrf    0x56                                        ; reg: 0x056
        clrf    0x57                                        ; reg: 0x057
        movlw   0x13
        subwf   0x57, W                                     ; reg: 0x057
        movlw   0x88
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x56, W                                     ; reg: 0x056
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_078

label_077                                                   ; address: 0x0476

        movlw   0x01
        addwf   0x56, F                                     ; reg: 0x056
        movlw   0x00
        addwfc  0x57, F                                     ; reg: 0x057
        movlw   0x13
        subwf   0x57, W                                     ; reg: 0x057
        movlw   0x88
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x56, W                                     ; reg: 0x056
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_077

label_078                                                   ; address: 0x0481

        movlp   0x04
        call    function_008
        movlp   0x04
        movlp   0x05
        call    function_013
        movlp   0x04
        movlp   0x04
        call    function_007
        movlp   0x04
        movlp   0x04
        call    function_009
        movlp   0x04

label_079                                                   ; address: 0x048d

        clrwdt
        movlp   0x02
        call    function_002
        movlp   0x04
        movlp   0x03
        call    function_005
        movlp   0x04
        goto    label_079

function_007                                                ; address: 0x0495

        movlw   0x14
        movlb   0x1d
        movwf   RA1PPS                                      ; reg: 0xe91
        movlb   0x03
        bsf     TXSTA1, BRGH                                ; reg: 0x19e, bit: 2
        bsf     BAUDCON, BRG16                              ; reg: 0x19f, bit: 3
        movlw   0x22
        movwf   SPBRGL                                      ; reg: 0x19b
        clrf    SPBRGH1                                     ; reg: 0x19c
        bcf     TXSTA1, SYNC                                ; reg: 0x19e, bit: 4
        bsf     RCSTA1, SPEN                                ; reg: 0x19d, bit: 7
        bsf     TXSTA1, TXEN                                ; reg: 0x19e, bit: 5
        movlw   0x05
        movlp   0x05
        call    function_011
        movlp   0x04
        movlw   0x55
        movlp   0x05
        call    function_016
        movlp   0x04
        movlw   0x41
        movlp   0x05
        call    function_016
        movlp   0x04
        movlw   0x52
        movlp   0x05
        call    function_016
        movlp   0x04
        movlw   0x54
        movlp   0x05
        call    function_016
        return

function_008                                                ; address: 0x04b5

        movlw   0x7a
        movlb   0x01
        movwf   OSCCON                                      ; reg: 0x099
        movlw   0x04
        movlb   0x03
        movwf   ANSELC                                      ; reg: 0x18e
        movlw   0xfb
        movlb   0x04
        movwf   WPUC                                        ; reg: 0x20e
        movlb   0x00
        clrf    PORTC                                       ; reg: 0x00e
        movlw   0xff
        movlb   0x01
        movwf   TRISC                                       ; reg: 0x08e
        movlb   0x03
        clrf    ANSELA                                      ; reg: 0x18c
        movlb   0x04
        movf    WPUA, W                                     ; reg: 0x20c
        andlw   0x0f
        movwf   WPUA                                        ; reg: 0x20c
        movlb   0x05
        movf    ODCONA, W                                   ; reg: 0x28c
        iorlw   0x30
        movwf   ODCONA                                      ; reg: 0x28c
        movlb   0x00
        clrf    PORTA                                       ; reg: 0x00c
        bcf     PORTA, RA2                                  ; reg: 0x00c, bit: 2
        movlw   0xc9
        movlb   0x01
        movwf   TRISA                                       ; reg: 0x08c
        return

function_009                                                ; address: 0x04d4

        movlw   0x10
        movlb   0x1d
        movwf   RC0PPS                                      ; reg: 0xea0
        movlw   0x11
        movwf   RC1PPS                                      ; reg: 0xea1
        movlb   0x04
        clrf    SSPBUF                                      ; reg: 0x211
        movlb   0x00
        movf    PORTC, W                                    ; reg: 0x00e
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movlw   0x03

label_080                                                   ; address: 0x04df

        lsrf    (Common_RAM + 2), F                         ; reg: 0x072
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_080
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        andlw   0x07
        addwf   WREG, W                                     ; reg: 0x009
        iorlw   0x40
        movlb   0x04
        movwf   SSPADD                                      ; reg: 0x212
        movlw   0x36
        movwf   SSPCON1                                     ; reg: 0x215
        bsf     SSPCON2, SEN                                ; reg: 0x216, bit: 0
        bsf     SSPCON3, BOEN                               ; reg: 0x217, bit: 4
        bsf     SSPCON3, SDAHT                              ; reg: 0x217, bit: 3
        movf    SSPADD, W                                   ; reg: 0x212
        movlp   0x05
        call    function_016
        return

function_010                                                ; address: 0x04f1

        movlw   0x06
        subwf   (Common_RAM + 2), W                         ; reg: 0x072
        movlw   0x00
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 1), W                         ; reg: 0x071
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_081
        movlw   0x00
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlw   0x06
        movwf   (Common_RAM + 2)                            ; reg: 0x072

label_081                                                   ; address: 0x04fc

        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movlb   0x03
        movwf   PMADRH                                      ; reg: 0x192
        movf    0x71, W                                     ; reg: 0x1f1
        movwf   PMADRL                                      ; reg: 0x191
        bcf     PMCON1, CFGS                                ; reg: 0x195, bit: 6
        bsf     PMCON1, FREE                                ; reg: 0x195, bit: 4
        bsf     PMCON1, WREN                                ; reg: 0x195, bit: 2
        movlp   0x05
        call    function_015
        nop
        nop
        movlb   0x03
        bcf     PMCON1, WREN                                ; reg: 0x195, bit: 2
        return

function_011                                                ; address: 0x050b

        movwf   (Common_RAM + 2)                            ; reg: 0x072

label_082                                                   ; address: 0x050c

        movlw   0x04
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   (Common_RAM + 3)                            ; reg: 0x073

label_083                                                   ; address: 0x0510

        movlw   0xfa
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   (Common_RAM + 4)                            ; reg: 0x074

label_084                                                   ; address: 0x0514

        movlw   0x01
        subwf   (Common_RAM + 4), F                         ; reg: 0x074
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_084
        movlw   0x01
        subwf   (Common_RAM + 3), F                         ; reg: 0x073
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_083
        movlw   0x01
        subwf   (Common_RAM + 2), F                         ; reg: 0x072
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        return
        goto    label_082
        movlp   0x00
        goto    label_004
        movlp   0x00
        goto    label_007
        movlp   0x00
        goto    label_010
        movlp   0x01
        goto    label_013
        movlp   0x01
        goto    label_014
        movlp   0x01
        goto    label_015
        movlp   0x01
        goto    label_016
        movlp   0x01
        goto    label_017

function_012                                                ; address: 0x0531

        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movlb   0x03
        movwf   PMADRH                                      ; reg: 0x192
        movf    0x71, W                                     ; reg: 0x1f1
        movwf   PMADRL                                      ; reg: 0x191
        bcf     PMCON1, CFGS                                ; reg: 0x195, bit: 6
        bcf     PMCON1, LWLO                                ; reg: 0x195, bit: 5
        bsf     PMCON1, RD                                  ; reg: 0x195, bit: 0
        nop
        nop
        movlb   0x03
        movf    PMDATH, W                                   ; reg: 0x194
        movwf   0x72                                        ; reg: 0x1f2
        movf    PMDATL, W                                   ; reg: 0x193
        movwf   0x71                                        ; reg: 0x1f1
        return

function_013                                                ; address: 0x0541

        movlw   0x78
        movlb   0x00
        iorwf   T2CON, F                                    ; reg: 0x01c
        movlw   0x03
        iorwf   T2CON, F                                    ; reg: 0x01c
        movlw   0x26
        movwf   PR2                                         ; reg: 0x01b
        movlb   0x01
        bcf     PIE1, TMR2IE                                ; reg: 0x091, bit: 1
        movlb   0x00
        bcf     PIR1, TMR2IF                                ; reg: 0x011, bit: 1
        clrf    0x66                                        ; reg: 0x066
        return

function_014                                                ; address: 0x054e

        movwf   (Common_RAM + 1)                            ; reg: 0x071

label_085                                                   ; address: 0x054f

        movlb   0x04
        bcf     SSPCON1, WCOL                               ; reg: 0x215, bit: 7
        movf    0x71, W                                     ; reg: 0x271
        movwf   SSPBUF                                      ; reg: 0x211
        btfsc   SSPCON1, WCOL                               ; reg: 0x215, bit: 7
        goto    label_085
        bsf     TMR0, 0x4                                   ; reg: 0x015
        return

function_015                                                ; address: 0x0557

        movlw   0x55
        movlb   0x03
        movwf   PMCON2                                      ; reg: 0x196
        movlw   0xaa
        movwf   PMCON2                                      ; reg: 0x196
        bsf     PMCON1, WR                                  ; reg: 0x195, bit: 1
        nop
        nop
        return

function_016                                                ; address: 0x0560

        movwf   (Common_RAM + 1)                            ; reg: 0x071

label_086                                                   ; address: 0x0561

        movlb   0x03
        btfss   TXSTA1, TRMT                                ; reg: 0x19e, bit: 1
        goto    label_086
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   TMR2                                        ; reg: 0x01a
        return

function_017                                                ; address: 0x0567

        clrwdt

label_087                                                   ; address: 0x0568

        clrf    INDF0                                       ; reg: 0x000
        addfsr  FSR0, .1
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_087
        retlw   0x00

        ; code
        org     0x0600

label_088                                                   ; address: 0x0600

        movlp   0x06
        goto    label_089

label_089                                                   ; address: 0x0602

        movlp   0x07
        goto    label_122

function_018                                                ; address: 0x0604

        movlw   0x78
        movlb   0x00
        iorwf   T2CON, F                                    ; reg: 0x01c
        movlw   0x03
        iorwf   T2CON, F                                    ; reg: 0x01c
        movlw   0x26
        movwf   PR2                                         ; reg: 0x01b
        movlb   0x01
        bcf     PIE1, TMR2IE                                ; reg: 0x091, bit: 1
        movlb   0x00
        bcf     PIR1, TMR2IF                                ; reg: 0x011, bit: 1
        movlb   0x01
        clrf    0x39                                        ; reg: 0x0b9
        return

function_019                                                ; address: 0x0612

        movwf   (Common_RAM + 4)                            ; reg: 0x074
        clrf    (Common_RAM + 6)                            ; reg: 0x076

label_090                                                   ; address: 0x0614

        movf    Common_RAM, W                               ; reg: 0x070
        subwf   (Common_RAM + 6), W                         ; reg: 0x076
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        return
        movf    (Common_RAM + 6), W                         ; reg: 0x076
        addwf   (Common_RAM + 4), W                         ; reg: 0x074
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        clrf    INDF1                                       ; reg: 0x001
        movlb   0x01
        bsf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlw   0x08
        movwf   0x71                                        ; reg: 0x0f1
        movf    0x71, W                                     ; reg: 0x0f1
        movwf   0x75                                        ; reg: 0x0f5
        movf    0x75, W                                     ; reg: 0x0f5
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_100

label_091                                                   ; address: 0x0628

        movlw   0x42

label_092                                                   ; address: 0x0629

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_092
        bra     0x062c

label_093                                                   ; address: 0x062c

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        swapf   PORTA, W                                    ; reg: 0x00c
        andlw   0x01
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 5), W                         ; reg: 0x075
        addlw   0xff
        incf    WREG, F                                     ; reg: 0x009
        goto    label_095

label_094                                                   ; address: 0x0635

        lslf    (Common_RAM + 1), F                         ; reg: 0x071

label_095                                                   ; address: 0x0636

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_094
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    (Common_RAM + 6), W                         ; reg: 0x076
        addwf   (Common_RAM + 4), W                         ; reg: 0x074
        movwf   (Common_RAM + 3)                            ; reg: 0x073
        movf    (Common_RAM + 3), W                         ; reg: 0x073
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        iorwf   INDF1, F                                    ; reg: 0x001
        movlw   0x42

label_096                                                   ; address: 0x0643

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_096
        bra     0x0646

label_097                                                   ; address: 0x0646

        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42

label_098                                                   ; address: 0x0649

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_098
        bra     0x064c

label_099                                                   ; address: 0x064c

        movlw   0x01
        subwf   (Common_RAM + 5), F                         ; reg: 0x075
        movf    (Common_RAM + 5), W                         ; reg: 0x075
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_091

label_100                                                   ; address: 0x0651

        movf    (Common_RAM + 6), W                         ; reg: 0x076
        addlw   0x01
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlw   0x00
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        movlw   0x01
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        xorlw   0x80
        movwf   (Common_RAM + 3)                            ; reg: 0x073
        movlw   0x80
        subwf   (Common_RAM + 3), W                         ; reg: 0x073
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_101
        movf    Common_RAM, W                               ; reg: 0x070
        subwf   (Common_RAM + 1), W                         ; reg: 0x071

label_101                                                   ; address: 0x0661

        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_102
        movlp   0x0a
        call    function_026
        movlp   0x06
        goto    label_103

label_102                                                   ; address: 0x0667

        movlp   0x0a
        call    function_025
        movlp   0x06

label_103                                                   ; address: 0x066a

        movlw   0x01
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        addwf   (Common_RAM + 6), F                         ; reg: 0x076
        goto    label_090

label_104                                                   ; address: 0x066f

        movlp   0x09
        call    function_024
        movlp   0x06
        movlp   0x06
        call    function_018
        movlp   0x06
        movlp   0x0a
        call    function_031
        movlp   0x06
        movlp   0x0a
        call    function_030
        movlp   0x06
        movlb   0x00
        bcf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        movlb   0x01
        bcf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlw   0x0b
        movlb   0x00
        movwf   0x6b                                        ; reg: 0x06b
        movlw   0x26
        movwf   0x6a                                        ; reg: 0x06a
        movlw   0x5d

label_105                                                   ; address: 0x0685

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_105
        decfsz  0x6a, F                                     ; reg: 0x06a
        goto    label_105
        decfsz  0x6b, F                                     ; reg: 0x06b
        goto    label_105
        bra     0x068c

label_106                                                   ; address: 0x068c

        movlb   0x00
        bsf     PORTA, RA4                                  ; reg: 0x00c, bit: 4

label_107                                                   ; address: 0x068e

        clrwdt
        btfss   INTCON, T0IF                                ; reg: 0x00b, bit: 2
        goto    label_108
        movlb   0x00
        btfss   PORTA, RA2                                  ; reg: 0x00c, bit: 2
        goto    label_108
        bcf     INTCON, T0IF                                ; reg: 0x00b, bit: 2
        movlw   0x01
        movlb   0x01
        subwf   0x5c, F                                     ; reg: 0x0dc
        movlw   0x00
        subwfb  0x5d, F                                     ; reg: 0x0dd
        incf    0x5c, W                                     ; reg: 0x0dc
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_108
        incf    0x5d, W                                     ; reg: 0x05d
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_108
        movlw   0x3d
        movwf   0x5c                                        ; reg: 0x05c
        movlw   0x00
        movwf   0x5d                                        ; reg: 0x05d
        movf    0x2d, W                                     ; reg: 0x02d
        movlb   0x00
        movwf   0x6b                                        ; reg: 0x06b
        movlb   0x01
        movf    0x2c, W                                     ; reg: 0x0ac
        movlb   0x00
        movwf   0x6a                                        ; reg: 0x06a
        movlb   0x01
        incf    0x2c, F                                     ; reg: 0x0ac
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        incf    0x2d, F                                     ; reg: 0x0ad
        movlw   0x00
        movlb   0x00
        subwf   0x6b, W                                     ; reg: 0x06b
        movlw   0x3d
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x6a, W                                     ; reg: 0x06a
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_108
        bcf     PORTA, RA2                                  ; reg: 0x00c, bit: 2
        movlw   0x43
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x4c
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x4f
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x53
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x45
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x20
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x44
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x43
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x2d
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x44
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x43
        movlp   0x09
        call    function_022
        movlp   0x06
        movlb   0x01
        clrf    0x2c                                        ; reg: 0x0ac
        clrf    0x2d                                        ; reg: 0x0ad
        movlw   0x01
        movlb   0x00
        movwf   0x6a                                        ; reg: 0x06a
        movf    0x6a, W                                     ; reg: 0x06a
        movlb   0x01
        movwf   0x2e                                        ; reg: 0x0ae

label_108                                                   ; address: 0x06ed

        movlp   0x0c
        call    function_042
        movlp   0x06
        movlp   0x0c
        call    function_039
        movlp   0x06
        goto    label_107

function_020                                                ; address: 0x06f4

        movlb   0x00
        clrf    0x61                                        ; reg: 0x061
        clrf    0x62                                        ; reg: 0x062
        clrf    0x65                                        ; reg: 0x065
        clrf    0x66                                        ; reg: 0x066
        clrf    0x63                                        ; reg: 0x063
        clrf    0x64                                        ; reg: 0x064
        movlw   0xa0
        movwf   FSR1L                                       ; reg: 0x006
        movlw   0x01
        movwf   FSR1H                                       ; reg: 0x007
        movlw   0x41
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x00
        movwf   FSR0H                                       ; reg: 0x005
        movlw   0x20
        movwf   0x3f                                        ; reg: 0x03f

label_109                                                   ; address: 0x0705

        moviw   INDF1++
        movwi   INDF0++
        decfsz  0x3f, F                                     ; reg: 0x03f
        goto    label_109
        movlb   0x01
        movf    0x38, W                                     ; reg: 0x0b8
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        return
        clrf    0x38                                        ; reg: 0x0b8
        movlb   0x00
        clrf    0x6d                                        ; reg: 0x06d
        movlb   0x02
        movf    0x22, W                                     ; reg: 0x122
        movlb   0x00
        movwf   0x3f                                        ; reg: 0x03f
        clrf    0x40                                        ; reg: 0x040
        movf    0x3f, W                                     ; reg: 0x03f
        movwf   0x63                                        ; reg: 0x063
        movf    0x40, W                                     ; reg: 0x040
        movwf   0x64                                        ; reg: 0x064
        clrf    0x65                                        ; reg: 0x065
        clrf    0x66                                        ; reg: 0x066

label_110                                                   ; address: 0x071b

        movf    0x64, W                                     ; reg: 0x064
        subwf   0x66, W                                     ; reg: 0x066
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_111
        movf    0x63, W                                     ; reg: 0x063
        subwf   0x65, W                                     ; reg: 0x065

label_111                                                   ; address: 0x0721

        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_112
        movf    0x65, W                                     ; reg: 0x065
        addlw   0x02
        addlw   0x20
        movwf   FSR1L                                       ; reg: 0x006
        movlw   0x01
        movwf   FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x3f                                        ; reg: 0x03f
        movf    0x65, W                                     ; reg: 0x065
        addlw   0x41
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x3f, W                                     ; reg: 0x03f
        movwf   INDF1                                       ; reg: 0x001
        movf    0x65, W                                     ; reg: 0x065
        addlw   0x20
        movwf   FSR1L                                       ; reg: 0x006
        movlw   0x01
        movwf   FSR1H                                       ; reg: 0x007
        clrf    INDF1                                       ; reg: 0x001
        movlw   0x01
        addwf   0x65, F                                     ; reg: 0x065
        movlw   0x00
        addwfc  0x66, F                                     ; reg: 0x066
        goto    label_110

label_112                                                   ; address: 0x073c

        movlb   0x02
        clrf    0x20                                        ; reg: 0x120
        clrf    0x21                                        ; reg: 0x121
        movlw   0x55
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0xaa
        movlp   0x09
        call    function_022
        movlp   0x06
        movlb   0x00
        clrf    0x65                                        ; reg: 0x065
        clrf    0x66                                        ; reg: 0x066

label_113                                                   ; address: 0x074a

        movf    0x64, W                                     ; reg: 0x064
        subwf   0x66, W                                     ; reg: 0x066
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_114
        movf    0x63, W                                     ; reg: 0x063
        subwf   0x65, W                                     ; reg: 0x065

label_114                                                   ; address: 0x0750

        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_115
        movf    0x65, W                                     ; reg: 0x065
        addlw   0x41
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movlp   0x09
        call    function_022
        movlp   0x06
        movlw   0x01
        movlb   0x00
        addwf   0x65, F                                     ; reg: 0x065
        movlw   0x00
        addwfc  0x66, F                                     ; reg: 0x066
        goto    label_113

label_115                                                   ; address: 0x0760

        clrf    0x65                                        ; reg: 0x065
        clrf    0x66                                        ; reg: 0x066

label_116                                                   ; address: 0x0762

        movf    0x63, W                                     ; reg: 0x063
        addlw   0xfe
        movwf   0x3f                                        ; reg: 0x03f
        movlw   0xff
        addwfc  0x64, W                                     ; reg: 0x064
        movwf   0x40                                        ; reg: 0x040
        movf    0x40, W                                     ; reg: 0x040
        subwf   0x66, W                                     ; reg: 0x066
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_117
        movf    0x3f, W                                     ; reg: 0x03f
        subwf   0x65, W                                     ; reg: 0x065

label_117                                                   ; address: 0x076e

        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_118
        movf    0x65, W                                     ; reg: 0x065
        addlw   0x41
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x3f                                        ; reg: 0x03f
        clrf    0x40                                        ; reg: 0x040
        movf    0x3f, W                                     ; reg: 0x03f
        addwf   0x61, F                                     ; reg: 0x061
        movf    0x40, W                                     ; reg: 0x040
        addwfc  0x62, F                                     ; reg: 0x062
        movlw   0x01
        addwf   0x65, F                                     ; reg: 0x065
        movlw   0x00
        addwfc  0x66, F                                     ; reg: 0x066
        goto    label_116

label_118                                                   ; address: 0x0780

        movf    0x63, W                                     ; reg: 0x063
        addlw   0xfe
        addlw   0x41
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x62, W                                     ; reg: 0x062
        movwf   0x40                                        ; reg: 0x040
        movf    0x61, W                                     ; reg: 0x061
        movwf   0x3f                                        ; reg: 0x03f
        movf    0x40, W                                     ; reg: 0x040
        movwf   0x3f                                        ; reg: 0x03f
        clrf    0x40                                        ; reg: 0x040
        movf    0x3f, W                                     ; reg: 0x03f
        xorwf   INDF1, W                                    ; reg: 0x001
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_121
        movf    0x63, W                                     ; reg: 0x063
        addlw   0xff
        addlw   0x41
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        xorwf   0x61, W                                     ; reg: 0x061
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_121
        clrf    0x65                                        ; reg: 0x065
        clrf    0x66                                        ; reg: 0x066
        movlw   0x00
        subwf   0x66, W                                     ; reg: 0x066
        movlw   0x20
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x65, W                                     ; reg: 0x065
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_120

label_119                                                   ; address: 0x07a2

        movlw   0x45
        movwf   0x3f                                        ; reg: 0x03f
        movf    0x65, W                                     ; reg: 0x065
        addlw   0xba
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x3f, W                                     ; reg: 0x03f
        movwf   INDF1                                       ; reg: 0x001
        movlw   0x01
        addwf   0x65, F                                     ; reg: 0x065
        movlw   0x00
        addwfc  0x66, F                                     ; reg: 0x066
        movlw   0x00
        subwf   0x66, W                                     ; reg: 0x066
        movlw   0x20
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x65, W                                     ; reg: 0x065
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_119

label_120                                                   ; address: 0x07b5

        movf    0x63, W                                     ; reg: 0x063
        movwf   0x3f                                        ; reg: 0x03f
        movf    0x3f, W                                     ; reg: 0x03f
        movwf   (Common_RAM + 12)                           ; reg: 0x07c
        movlw   0x41
        movlp   0x0b
        call    function_036
        return

label_121                                                   ; address: 0x07bd

        movlw   0xfc
        movlp   0x09
        call    function_022
        movlb   0x00
        movf    0x42, W                                     ; reg: 0x042
        movwf   0x3f                                        ; reg: 0x03f
        movf    0x3f, W                                     ; reg: 0x03f
        movlb   0x01
        movwf   0x3a                                        ; reg: 0x0ba
        clrf    0x3b                                        ; reg: 0x0bb
        movlw   0x02
        movlb   0x00
        movwf   0x3f                                        ; reg: 0x03f
        movf    0x3f, W                                     ; reg: 0x03f
        movwf   0x6e                                        ; reg: 0x06e
        clrf    0x6c                                        ; reg: 0x06c
        movlw   0x01
        movwf   0x3f                                        ; reg: 0x03f
        movf    0x3f, W                                     ; reg: 0x03f
        movwf   0x6f                                        ; reg: 0x06f
        return

label_122                                                   ; address: 0x07d2

        movlw   0xe3
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x89
        movwf   FSR0H                                       ; reg: 0x005
        movlb   0x01
        moviw   INDF0++
        movwf   0x5a                                        ; reg: 0x0da
        moviw   INDF0++
        movwf   0x5b                                        ; reg: 0x0db
        moviw   INDF0++
        movwf   0x5c                                        ; reg: 0x0dc
        moviw   INDF0++
        movwf   0x5d                                        ; reg: 0x0dd
        moviw   INDF0++
        movwf   0x5e                                        ; reg: 0x0de
        movlb   0x00
        clrf    0x6c                                        ; reg: 0x06c
        clrf    0x6d                                        ; reg: 0x06d
        clrf    0x6e                                        ; reg: 0x06e
        clrf    0x6f                                        ; reg: 0x06f
        movlw   0xa0
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x00
        movwf   FSR0H                                       ; reg: 0x005
        movlw   0x3a
        movlp   0x09
        call    function_021
        movlp   0x07
        movlw   0x20
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x01
        movwf   FSR0H                                       ; reg: 0x005
        movlw   0x34
        movlp   0x09
        call    function_021
        movlp   0x07
        movlw   0xa0
        movwf   FSR0L                                       ; reg: 0x004
        movlw   0x01
        movwf   FSR0H                                       ; reg: 0x005
        movlw   0x40
        movlp   0x09
        call    function_021
        movlb   0x00
        movlp   0x06
        goto    label_104

        ; code
        org     0x09e3

        retlw   0xf4
        retlw   0x01
        retlw   0x3d
        retlw   0x00
        retlw   0xff

function_021                                                ; address: 0x09e8

        clrwdt
        clrf    INDF0                                       ; reg: 0x000
        addfsr  FSR0, .1
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_019
        retlw   0x00

function_022                                                ; address: 0x09ee

        movwf   Common_RAM                                  ; reg: 0x070
        movlb   0x03
        btfss   TXSTA1, TRMT                                ; reg: 0x19e, bit: 1
        goto    label_020
        movf    Common_RAM, W                               ; reg: 0x070
        movwf   TMR2                                        ; reg: 0x01a
        return

function_023                                                ; address: 0x09f5

        movwf   Common_RAM                                  ; reg: 0x070
        movlb   0x04
        bcf     SSPCON1, WCOL                               ; reg: 0x215, bit: 7
        movf    0x70, W                                     ; reg: 0x270
        movwf   SSPBUF                                      ; reg: 0x211
        btfsc   SSPCON1, WCOL                               ; reg: 0x215, bit: 7
        goto    label_021
        bsf     TMR0, 0x4                                   ; reg: 0x015
        return

function_024                                                ; address: 0x09fe

        movlw   0xd0
        movlb   0x01
        movwf   ADCON1                                      ; reg: 0x09e
        movlw   0x01
        movwf   ADCON0                                      ; reg: 0x09d
        movlb   0x00
        bcf     PORTA, RA2                                  ; reg: 0x00c, bit: 2
        movlw   0x07
        movlb   0x01
        movwf   OPTION_REG                                  ; reg: 0x095
        bsf     INTCON, PEIE                                ; reg: 0x00b, bit: 6
        bsf     PIE1, SSP1IE                                ; reg: 0x091, bit: 3
        return

function_025                                                ; address: 0x0a0b

        movlb   0x01
        bcf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlb   0x00
        bcf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_023
        bra     0x0a13

label_123                                                   ; address: 0x0a13

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_024
        bra     0x0a19

label_124                                                   ; address: 0x0a19

        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_025
        bra     0x0a1f

label_125                                                   ; address: 0x0a1f

        return

function_026                                                ; address: 0x0a20

        movlb   0x01
        bcf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlb   0x00
        bsf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_028
        bra     0x0a28

label_126                                                   ; address: 0x0a28

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_029
        bra     0x0a2e

label_127                                                   ; address: 0x0a2e

        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_030
        bra     0x0a34

label_128                                                   ; address: 0x0a34

        return

function_027                                                ; address: 0x0a35

        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlw   0x04
        movwf   Common_RAM                                  ; reg: 0x070
        movf    Common_RAM, W                               ; reg: 0x070
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movlw   0xfa
        movwf   Common_RAM                                  ; reg: 0x070
        movf    Common_RAM, W                               ; reg: 0x070
        movwf   (Common_RAM + 3)                            ; reg: 0x073
        movlw   0x01
        subwf   (Common_RAM + 3), F                         ; reg: 0x073
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_034
        movlw   0x01
        subwf   (Common_RAM + 2), F                         ; reg: 0x072
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_032
        movlw   0x01
        subwf   (Common_RAM + 1), F                         ; reg: 0x071
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        return
        goto    label_031

function_028                                                ; address: 0x0a4b

        movlb   0x00
        bsf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlb   0x01
        bcf     TRISA, TRISA5                               ; reg: 0x08c, bit: 5
        bcf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_037
        bra     0x0a55

label_129                                                   ; address: 0x0a55

        movlb   0x00
        bcf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_038
        bra     0x0a5b

label_130                                                   ; address: 0x0a5b

        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_039
        bra     0x0a61

label_131                                                   ; address: 0x0a61

        return

function_029                                                ; address: 0x0a62

        movlb   0x01
        bcf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlb   0x00
        bcf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_042
        bra     0x0a6a

label_132                                                   ; address: 0x0a6a

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_043
        bra     0x0a70

label_133                                                   ; address: 0x0a70

        movlb   0x00
        bsf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        movlw   0x42
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_045
        bra     0x0a76

label_134                                                   ; address: 0x0a76

        movlb   0x01
        bsf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        bsf     TRISA, TRISA5                               ; reg: 0x08c, bit: 5
        return

function_030                                                ; address: 0x0a7a

        movlw   0x10
        movlb   0x1d
        movwf   RC0PPS                                      ; reg: 0xea0
        movlw   0x11
        movwf   RC1PPS                                      ; reg: 0xea1
        movlb   0x04
        clrf    SSPBUF                                      ; reg: 0x211
        movlb   0x00
        movf    PORTC, W                                    ; reg: 0x00e
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlw   0x03
        lsrf    (Common_RAM + 1), F                         ; reg: 0x071
        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_047
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        andlw   0x07
        addwf   WREG, W                                     ; reg: 0x009
        iorlw   0x40
        movlb   0x04
        movwf   SSPADD                                      ; reg: 0x212
        movlw   0x36
        movwf   SSPCON1                                     ; reg: 0x215
        bsf     SSPCON2, SEN                                ; reg: 0x216, bit: 0
        bsf     SSPCON3, BOEN                               ; reg: 0x217, bit: 4
        bsf     SSPCON3, SDAHT                              ; reg: 0x217, bit: 3
        movf    SSPADD, W                                   ; reg: 0x212
        movlp   0x09
        call    function_022
        return

function_031                                                ; address: 0x0a97

        movlw   0x14
        movlb   0x1d
        movwf   RA1PPS                                      ; reg: 0xe91
        movlb   0x03
        bsf     TXSTA1, BRGH                                ; reg: 0x19e, bit: 2
        bsf     BAUDCON, BRG16                              ; reg: 0x19f, bit: 3
        movlw   0x22
        movwf   SPBRGL                                      ; reg: 0x19b
        clrf    SPBRGH1                                     ; reg: 0x19c
        bcf     TXSTA1, SYNC                                ; reg: 0x19e, bit: 4
        bsf     RCSTA1, SPEN                                ; reg: 0x19d, bit: 7
        bsf     TXSTA1, TXEN                                ; reg: 0x19e, bit: 5
        movlw   0x05
        movlp   0x0a
        call    function_027
        movlp   0x0a
        movlw   0x55
        movlp   0x09
        call    function_022
        movlp   0x0a
        movlw   0x41
        movlp   0x09
        call    function_022
        movlp   0x0a
        movlw   0x52
        movlp   0x09
        call    function_022
        movlp   0x0a
        movlw   0x54
        movlp   0x09
        call    function_022
        return

label_135                                                   ; address: 0x0ab7

        movlb   0x00
        movf    0x38, W                                     ; reg: 0x038
        addlw   0x02
        addwf   0x3c, W                                     ; reg: 0x03c
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_136
        bcf     PORTA, RA2                                  ; reg: 0x00c, bit: 2
        goto    label_137

label_136                                                   ; address: 0x0ac4

        bsf     PORTA, RA2                                  ; reg: 0x00c, bit: 2

label_137                                                   ; address: 0x0ac5

        movlw   0x15
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3a                                        ; reg: 0x0ba
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3b                                        ; reg: 0x0bb
        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6e                                        ; reg: 0x06e
        clrf    0x6c                                        ; reg: 0x06c
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6f                                        ; reg: 0x06f
        return

function_032                                                ; address: 0x0adb

        movlb   0x01
        bsf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlw   0x42

label_138                                                   ; address: 0x0ade

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_138
        bra     0x0ae1

label_139                                                   ; address: 0x0ae1

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x00
        btfsc   PORTA, RA4                                  ; reg: 0x00c, bit: 4
        movlw   0x01
        movwf   Common_RAM                                  ; reg: 0x070
        movlw   0x42

label_140                                                   ; address: 0x0ae8

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_140
        bra     0x0aeb

label_141                                                   ; address: 0x0aeb

        movf    Common_RAM, W                               ; reg: 0x070
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_142
        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        goto    label_145

label_142                                                   ; address: 0x0af1

        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42

label_143                                                   ; address: 0x0af4

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_143
        bra     0x0af7

label_144                                                   ; address: 0x0af7

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5

label_145                                                   ; address: 0x0af9

        movlw   0x42

label_146                                                   ; address: 0x0afa

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_146
        bra     0x0afd

label_147                                                   ; address: 0x0afd

        movf    Common_RAM, W                               ; reg: 0x070
        return

function_033                                                ; address: 0x0aff

        movwf   (Common_RAM + 10)                           ; reg: 0x07a
        movlp   0x0a
        call    function_028
        movlp   0x0a
        lslf    (Common_RAM + 10), W                        ; reg: 0x07a
        movlp   0x0b
        call    function_035
        movlp   0x0a
        movlp   0x0a
        call    function_032
        movlp   0x0a
        xorlw   0x00
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_148
        movlw   0xff
        return

label_148                                                   ; address: 0x0b0f

        movf    (Common_RAM + 8), W                         ; reg: 0x078
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_149
        movf    (Common_RAM + 8), W                         ; reg: 0x078
        movwf   (Common_RAM + 9)                            ; reg: 0x079
        movf    (Common_RAM + 9), W                         ; reg: 0x079
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 7), W                         ; reg: 0x077
        movlp   0x0c
        call    function_041
        movlp   0x0a
        xorlw   0x00
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_149
        movlw   0xff
        return

label_149                                                   ; address: 0x0b1f

        movlp   0x0a
        call    function_029
        movlw   0x00
        return

function_034                                                ; address: 0x0b23

        clrf    (Common_RAM + 2)                            ; reg: 0x072
        movlb   0x01
        bsf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlw   0x08
        movwf   0x70                                        ; reg: 0x0f0
        movf    0x70, W                                     ; reg: 0x0f0
        movwf   0x73                                        ; reg: 0x0f3
        movf    0x73, W                                     ; reg: 0x0f3
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_159

label_150                                                   ; address: 0x0b2d

        movlw   0x42

label_151                                                   ; address: 0x0b2e

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_151
        bra     0x0b31

label_152                                                   ; address: 0x0b31

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        swapf   PORTA, W                                    ; reg: 0x00c
        andlw   0x01
        movwf   Common_RAM                                  ; reg: 0x070
        movf    (Common_RAM + 3), W                         ; reg: 0x073
        addlw   0xff
        incf    WREG, F                                     ; reg: 0x009
        goto    label_154

label_153                                                   ; address: 0x0b3a

        lslf    Common_RAM, F                               ; reg: 0x070

label_154                                                   ; address: 0x0b3b

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_153
        movf    Common_RAM, W                               ; reg: 0x070
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        iorwf   (Common_RAM + 2), F                         ; reg: 0x072
        movlw   0x42

label_155                                                   ; address: 0x0b42

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_155
        bra     0x0b45

label_156                                                   ; address: 0x0b45

        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42

label_157                                                   ; address: 0x0b48

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_157
        bra     0x0b4b

label_158                                                   ; address: 0x0b4b

        movlw   0x01
        subwf   (Common_RAM + 3), F                         ; reg: 0x073
        movf    (Common_RAM + 3), W                         ; reg: 0x073
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_150

label_159                                                   ; address: 0x0b50

        movf    (Common_RAM + 2), W                         ; reg: 0x072
        return

function_035                                                ; address: 0x0b52

        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlb   0x01
        bcf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlw   0x08
        movwf   0x70                                        ; reg: 0x0f0
        movf    0x70, W                                     ; reg: 0x0f0
        movwf   0x72                                        ; reg: 0x0f2

label_160                                                   ; address: 0x0b59

        movf    (Common_RAM + 2), W                         ; reg: 0x072
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        return
        movlw   0x01
        movwf   Common_RAM                                  ; reg: 0x070
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        addlw   0xff
        incf    WREG, F                                     ; reg: 0x009
        goto    label_162

label_161                                                   ; address: 0x0b62

        lslf    Common_RAM, F                               ; reg: 0x070

label_162                                                   ; address: 0x0b63

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_161
        movf    Common_RAM, W                               ; reg: 0x070
        andwf   (Common_RAM + 1), W                         ; reg: 0x071
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_163
        movlb   0x00
        bsf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        goto    label_164

label_163                                                   ; address: 0x0b6c

        movlb   0x00
        bcf     PORTA, RA4                                  ; reg: 0x00c, bit: 4

label_164                                                   ; address: 0x0b6e

        movlw   0x42

label_165                                                   ; address: 0x0b6f

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_165
        bra     0x0b72

label_166                                                   ; address: 0x0b72

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42

label_167                                                   ; address: 0x0b75

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_167
        bra     0x0b78

label_168                                                   ; address: 0x0b78

        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42

label_169                                                   ; address: 0x0b7b

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_169
        bra     0x0b7e

label_170                                                   ; address: 0x0b7e

        movlw   0x01
        subwf   (Common_RAM + 2), F                         ; reg: 0x072
        goto    label_160

function_036                                                ; address: 0x0b81

        movlb   0x00
        movwf   0x3c                                        ; reg: 0x03c
        clrf    0x38                                        ; reg: 0x038
        clrf    0x39                                        ; reg: 0x039
        clrf    0x2e                                        ; reg: 0x02e
        clrf    0x2f                                        ; reg: 0x02f
        clrf    0x3d                                        ; reg: 0x03d
        clrf    0x3e                                        ; reg: 0x03e
        clrf    0x3a                                        ; reg: 0x03a
        clrf    0x3b                                        ; reg: 0x03b
        clrf    0x30                                        ; reg: 0x030
        clrf    0x31                                        ; reg: 0x031
        clrf    0x34                                        ; reg: 0x034
        clrf    0x35                                        ; reg: 0x035
        clrf    0x36                                        ; reg: 0x036
        clrf    0x37                                        ; reg: 0x037
        clrf    0x32                                        ; reg: 0x032
        clrf    0x33                                        ; reg: 0x033
        movlp   0x0f
        goto    label_222

label_171                                                   ; address: 0x0b95

        movlw   0x07
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3a                                        ; reg: 0x0ba
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3b                                        ; reg: 0x0bb
        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6e                                        ; reg: 0x06e
        clrf    0x6c                                        ; reg: 0x06c
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6f                                        ; reg: 0x06f
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x37                                        ; reg: 0x0b7
        return

function_037                                                ; address: 0x0bb0

        movlb   0x04
        movf    SSPBUF, W                                   ; reg: 0x211
        movwf   0x71                                        ; reg: 0x271
        movf    0x71, W                                     ; reg: 0x271
        movwf   0x72                                        ; reg: 0x272
        movlb   0x00
        movf    0x6f, W                                     ; reg: 0x06f
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_172
        movf    0x6e, W                                     ; reg: 0x06e
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        return
        movf    0x6c, W                                     ; reg: 0x06c
        addlw   0xba
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movlp   0x09
        call    function_022
        movlp   0x0b
        movlb   0x00
        movf    0x6c, W                                     ; reg: 0x06c
        addlw   0xba
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movlp   0x09
        call    function_023
        movlw   0x01
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movlb   0x00
        addwf   0x6c, F                                     ; reg: 0x06c
        movlw   0x01
        subwf   0x6e, F                                     ; reg: 0x06e
        movf    0x6e, W                                     ; reg: 0x06e
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        clrf    0x6f                                        ; reg: 0x06f
        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4
        return

label_172                                                   ; address: 0x0bd9

        movlw   0xff
        movlp   0x09
        call    function_023
        movlp   0x0b
        movlw   0xff
        movlp   0x09
        call    function_022
        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4
        return

function_038                                                ; address: 0x0be3

        movwf   (Common_RAM + 11)                           ; reg: 0x07b
        clrf    (Common_RAM + 10)                           ; reg: 0x07a
        movlp   0x0a
        call    function_028
        movlp   0x0b
        bsf     STATUS, C                                   ; reg: 0x003, bit: 0
        rlf     (Common_RAM + 11), W                        ; reg: 0x07b
        movlp   0x0b
        call    function_035
        movlp   0x0b
        movlp   0x0a
        call    function_032
        movlp   0x0b
        xorlw   0x00
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_173
        movlw   0xff
        return

label_173                                                   ; address: 0x0bf5

        movlp   0x0b
        call    function_034
        movlp   0x0b
        movwf   (Common_RAM + 9)                            ; reg: 0x079
        movf    (Common_RAM + 7), W                         ; reg: 0x077
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    (Common_RAM + 9), W                         ; reg: 0x079
        movwf   INDF1                                       ; reg: 0x001
        movf    (Common_RAM + 8), W                         ; reg: 0x078
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        decf    INDF1, W                                    ; reg: 0x001
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_174
        movlp   0x0a
        call    function_026
        movlp   0x0b
        goto    label_175

label_174                                                   ; address: 0x0c08

        movlp   0x0a
        call    function_025
        movlp   0x0b
        movf    (Common_RAM + 8), W                         ; reg: 0x078
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        addlw   0xff
        movwf   (Common_RAM + 9)                            ; reg: 0x079
        movf    (Common_RAM + 9), W                         ; reg: 0x079
        movwf   Common_RAM                                  ; reg: 0x070
        movf    (Common_RAM + 7), W                         ; reg: 0x077
        addlw   0x01
        movlp   0x06
        call    function_019
        movlp   0x0b

label_175                                                   ; address: 0x0c18

        movlp   0x0a
        call    function_029
        movlw   0x00
        return

function_039                                                ; address: 0x0c1c

        clrf    (Common_RAM + 2)                            ; reg: 0x072
        movlb   0x00
        btfss   PIR1, TMR2IF                                ; reg: 0x011, bit: 1
        return
        bcf     PIR1, TMR2IF                                ; reg: 0x011, bit: 1
        clrf    TMR2                                        ; reg: 0x01a
        movlw   0x01
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movlb   0x01
        addwf   0x39, F                                     ; reg: 0x0b9
        movlw   0x19
        subwf   0x39, W                                     ; reg: 0x0b9
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        return
        movlb   0x00
        clrf    0x6d                                        ; reg: 0x06d
        clrf    (Common_RAM + 2)                            ; reg: 0x072
        movlw   0x20
        subwf   (Common_RAM + 2), W                         ; reg: 0x072
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_177

label_176                                                   ; address: 0x0c32

        movf    (Common_RAM + 2), W                         ; reg: 0x072
        addlw   0x20
        movwf   FSR1L                                       ; reg: 0x006
        movlw   0x01
        movwf   FSR1H                                       ; reg: 0x007
        clrf    INDF1                                       ; reg: 0x001
        movlw   0x01
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        addwf   (Common_RAM + 2), F                         ; reg: 0x072
        movlw   0x20
        subwf   (Common_RAM + 2), W                         ; reg: 0x072
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_176

label_177                                                   ; address: 0x0c40

        movlb   0x00
        bcf     T2CON, TMR2ON                               ; reg: 0x01c, bit: 2
        movlb   0x01
        clrf    0x39                                        ; reg: 0x0b9
        movlw   0x54
        movlp   0x09
        call    function_022
        movlp   0x0c
        movlw   0x49
        movlp   0x09
        call    function_022
        movlp   0x0c
        movlw   0x4d
        movlp   0x09
        call    function_022
        movlp   0x0c
        movlw   0x45
        movlp   0x09
        call    function_022
        movlp   0x0c
        movlw   0x52
        movlp   0x09
        call    function_022
        movlp   0x0c
        movlw   0x32
        movlp   0x09
        call    function_022
        return

function_040                                                ; address: 0x0c5c

        movlb   0x04
        movf    SSPBUF, W                                   ; reg: 0x211
        movwf   0x70                                        ; reg: 0x270
        movf    0x70, W                                     ; reg: 0x270
        movwf   0x72                                        ; reg: 0x272
        movlb   0x00
        movf    0x6d, W                                     ; reg: 0x06d
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_178
        movlw   0x55
        xorwf   (Common_RAM + 2), W                         ; reg: 0x072
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_179

label_178                                                   ; address: 0x0c69

        decf    0x6d, W                                     ; reg: 0x06d
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_180
        movlw   0xaa
        xorwf   (Common_RAM + 2), W                         ; reg: 0x072
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_180

label_179                                                   ; address: 0x0c70

        clrf    0x6d                                        ; reg: 0x06d
        bcf     T2CON, TMR2ON                               ; reg: 0x01c, bit: 2
        clrf    TMR2                                        ; reg: 0x01a
        movlb   0x01
        clrf    0x39                                        ; reg: 0x0b9
        goto    label_182

label_180                                                   ; address: 0x0c76

        movlb   0x00
        movf    0x6d, W                                     ; reg: 0x06d
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_181
        clrf    TMR2                                        ; reg: 0x01a
        bsf     T2CON, TMR2ON                               ; reg: 0x01c, bit: 2

label_181                                                   ; address: 0x0c7c

        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movwf   Common_RAM                                  ; reg: 0x070
        movf    0x6d, W                                     ; reg: 0x06d
        addlw   0x20
        movwf   FSR1L                                       ; reg: 0x006
        movlw   0x01
        movwf   FSR1H                                       ; reg: 0x007
        movf    Common_RAM, W                               ; reg: 0x070
        movwf   INDF1                                       ; reg: 0x001
        movlw   0x01
        movwf   Common_RAM                                  ; reg: 0x070
        movf    Common_RAM, W                               ; reg: 0x070
        addwf   0x6d, F                                     ; reg: 0x06d
        movlw   0x03
        subwf   0x6d, W                                     ; reg: 0x06d
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_182
        movlb   0x02
        movf    0x22, W                                     ; reg: 0x122
        addlw   0x02
        movwf   0x70                                        ; reg: 0x170
        movlw   0x00
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        movlw   0x01
        movwf   0x71                                        ; reg: 0x171
        movlb   0x00
        movf    0x6d, W                                     ; reg: 0x06d
        xorwf   Common_RAM, W                               ; reg: 0x070
        iorwf   (Common_RAM + 1), W                         ; reg: 0x071
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_182
        bcf     T2CON, TMR2ON                               ; reg: 0x01c, bit: 2
        clrf    TMR2                                        ; reg: 0x01a
        movlb   0x01
        clrf    0x39                                        ; reg: 0x0b9
        movlw   0x01
        movwf   0x70                                        ; reg: 0x0f0
        movf    0x70, W                                     ; reg: 0x0f0
        movwf   0x38                                        ; reg: 0x0b8

label_182                                                   ; address: 0x0ca3

        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4
        return

function_041                                                ; address: 0x0ca6

        movwf   (Common_RAM + 4)                            ; reg: 0x074
        clrf    (Common_RAM + 5)                            ; reg: 0x075

label_183                                                   ; address: 0x0ca8

        movf    (Common_RAM + 1), W                         ; reg: 0x071
        subwf   (Common_RAM + 5), W                         ; reg: 0x075
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_197
        movlb   0x01
        bcf     TRISA, TRISA4                               ; reg: 0x08c, bit: 4
        movlw   0x08
        movwf   0x72                                        ; reg: 0x0f2
        movf    0x72, W                                     ; reg: 0x0f2
        movwf   0x76                                        ; reg: 0x0f6
        movf    0x76, W                                     ; reg: 0x0f6
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_195

label_184                                                   ; address: 0x0cb5

        movf    (Common_RAM + 5), W                         ; reg: 0x075
        addwf   (Common_RAM + 4), W                         ; reg: 0x074
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movlw   0x01
        movwf   (Common_RAM + 3)                            ; reg: 0x073
        movf    (Common_RAM + 6), W                         ; reg: 0x076
        addlw   0xff
        incf    WREG, F                                     ; reg: 0x009
        goto    label_186

label_185                                                   ; address: 0x0cc1

        lslf    (Common_RAM + 3), F                         ; reg: 0x073

label_186                                                   ; address: 0x0cc2

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_185
        movf    (Common_RAM + 3), W                         ; reg: 0x073
        andwf   INDF1, W                                    ; reg: 0x001
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_187
        movlb   0x00
        bsf     PORTA, RA4                                  ; reg: 0x00c, bit: 4
        goto    label_188

label_187                                                   ; address: 0x0ccb

        movlb   0x00
        bcf     PORTA, RA4                                  ; reg: 0x00c, bit: 4

label_188                                                   ; address: 0x0ccd

        movlw   0x42

label_189                                                   ; address: 0x0cce

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_189
        bra     0x0cd1

label_190                                                   ; address: 0x0cd1

        movlb   0x00
        bsf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42

label_191                                                   ; address: 0x0cd4

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_191
        bra     0x0cd7

label_192                                                   ; address: 0x0cd7

        movlb   0x00
        bcf     PORTA, RA5                                  ; reg: 0x00c, bit: 5
        movlw   0x42

label_193                                                   ; address: 0x0cda

        decfsz  WREG, F                                     ; reg: 0x009
        goto    label_193
        bra     0x0cdd

label_194                                                   ; address: 0x0cdd

        movlw   0x01
        subwf   (Common_RAM + 6), F                         ; reg: 0x076
        movf    (Common_RAM + 6), W                         ; reg: 0x076
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_184

label_195                                                   ; address: 0x0ce2

        movlp   0x0a
        call    function_032
        movlp   0x0c
        xorlw   0x00
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_196
        movlw   0xff
        return

label_196                                                   ; address: 0x0cea

        movlw   0x01
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        addwf   (Common_RAM + 5), F                         ; reg: 0x075
        goto    label_183

label_197                                                   ; address: 0x0cef

        movlw   0x00
        return

function_042                                                ; address: 0x0cf1

        movlb   0x00
        btfss   PIR1, SSP1IF                                ; reg: 0x011, bit: 3
        return
        movlb   0x04
        btfsc   SSPSTAT, R_NOT_W                            ; reg: 0x214, bit: 2
        goto    label_201
        btfsc   0x14, 0x5                                   ; reg: 0x014
        goto    label_198
        movf    PIR1, W                                     ; reg: 0x011
        movwf   (Common_RAM + 13)                           ; reg: 0x07d
        movf    (Common_RAM + 13), W                        ; reg: 0x07d
        movlb   0x00
        movwf   0x67                                        ; reg: 0x067
        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4

label_198                                                   ; address: 0x0d00

        btfss   0x14, 0x5                                   ; reg: 0x014
        goto    label_201
        btfss   TMR0, 0x7                                   ; reg: 0x015
        goto    label_199
        movf    PIR1, W                                     ; reg: 0x011
        movwf   (Common_RAM + 13)                           ; reg: 0x07d
        movf    (Common_RAM + 13), W                        ; reg: 0x07d
        movlb   0x00
        movwf   0x67                                        ; reg: 0x067
        movlb   0x04
        bcf     SSPCON1, WCOL                               ; reg: 0x215, bit: 7
        goto    label_200

label_199                                                   ; address: 0x0d0c

        movlp   0x0c
        call    function_040
        movlp   0x0c
        movlp   0x06
        call    function_020
        movlp   0x0c

label_200                                                   ; address: 0x0d12

        movlb   0x04
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4

label_201                                                   ; address: 0x0d14

        btfss   0x14, 0x2                                   ; reg: 0x014
        goto    label_205
        btfsc   0x14, 0x5                                   ; reg: 0x014
        goto    label_204
        movlp   0x0b
        call    function_037
        movlp   0x0c
        movlb   0x01
        movf    0x37, W                                     ; reg: 0x0b7
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_204
        movlb   0x00
        movf    0x6e, W                                     ; reg: 0x06e
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_204
        movlb   0x01
        clrf    0x37                                        ; reg: 0x0b7
        clrf    0x2e                                        ; reg: 0x0ae
        clrf    0x39                                        ; reg: 0x0b9
        movlb   0x00
        clrf    0x68                                        ; reg: 0x068
        clrf    0x69                                        ; reg: 0x069
        movlw   0x00
        subwf   0x69, W                                     ; reg: 0x069
        movlw   0xff
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x68, W                                     ; reg: 0x068
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_203

label_202                                                   ; address: 0x0d31

        movlw   0x01
        addwf   0x68, F                                     ; reg: 0x068
        movlw   0x00
        addwfc  0x69, F                                     ; reg: 0x069
        movlw   0x00
        subwf   0x69, W                                     ; reg: 0x069
        movlw   0xff
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x68, W                                     ; reg: 0x068
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_202

label_203                                                   ; address: 0x0d3c

        reset

label_204                                                   ; address: 0x0d3d

        movlb   0x04
        btfsc   SSPSTAT, D_NOT_A                            ; reg: 0x214, bit: 5
        bsf     SSPCON1, CKP                                ; reg: 0x215, bit: 4

label_205                                                   ; address: 0x0d40

        movlb   0x00
        bcf     PIR1, SSP1IF                                ; reg: 0x011, bit: 3
        return

function_043                                                ; address: 0x0d43

        movwf   (Common_RAM + 5)                            ; reg: 0x075
        clrf    (Common_RAM + 6)                            ; reg: 0x076
        clrf    (Common_RAM + 7)                            ; reg: 0x077
        movlw   0x01
        movlb   0x01
        movwf   ADCON0                                      ; reg: 0x09d
        movf    0x75, W                                     ; reg: 0x0f5
        movwf   0x73                                        ; reg: 0x0f3
        movlw   0x01

label_206                                                   ; address: 0x0d4c

        lslf    (Common_RAM + 3), F                         ; reg: 0x073
        addlw   0xff
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_206
        lslf    (Common_RAM + 3), W                         ; reg: 0x073
        movwf   (Common_RAM + 4)                            ; reg: 0x074
        movf    (Common_RAM + 4), W                         ; reg: 0x074
        iorwf   0x1d, F                                     ; reg: 0x01d
        nop
        nop
        nop
        movlb   0x01
        bsf     ADCON0, GO                                  ; reg: 0x09d, bit: 1
        nop
        nop
        nop
        clrf    0x76                                        ; reg: 0x0f6
        clrf    0x77                                        ; reg: 0x0f7
        movlw   0x13
        subwf   0x77, W                                     ; reg: 0x0f7
        movlw   0x88
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   0x76, W                                     ; reg: 0x0f6
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_209

label_207                                                   ; address: 0x0d65

        movlb   0x01
        btfsc   ADCON0, GO                                  ; reg: 0x09d, bit: 1
        goto    label_208
        movf    T2CON, W                                    ; reg: 0x01c
        movwf   (Common_RAM + 3)                            ; reg: 0x073
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    (Common_RAM + 3), W                         ; reg: 0x073
        movwf   INDF1                                       ; reg: 0x001
        movf    PR2, W                                      ; reg: 0x01b
        movwf   (Common_RAM + 3)                            ; reg: 0x073
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    (Common_RAM + 3), W                         ; reg: 0x073
        movwf   INDF1                                       ; reg: 0x001
        goto    label_209

label_208                                                   ; address: 0x0d77

        nop
        nop
        nop
        movlw   0x01
        addwf   (Common_RAM + 6), F                         ; reg: 0x076
        movlw   0x00
        addwfc  (Common_RAM + 7), F                         ; reg: 0x077
        movlw   0x13
        subwf   (Common_RAM + 7), W                         ; reg: 0x077
        movlw   0x88
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 6), W                         ; reg: 0x076
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_207

label_209                                                   ; address: 0x0d85

        movlw   0x13
        subwf   (Common_RAM + 7), W                         ; reg: 0x077
        movlw   0x88
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        subwf   (Common_RAM + 6), W                         ; reg: 0x076
        btfss   STATUS, C                                   ; reg: 0x003, bit: 0
        return
        movf    (Common_RAM + 1), W                         ; reg: 0x071
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        clrf    INDF1                                       ; reg: 0x001
        movf    (Common_RAM + 2), W                         ; reg: 0x072
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        clrf    INDF1                                       ; reg: 0x001
        movlw   0xfd
        movlp   0x09
        call    function_022
        return

label_210                                                   ; address: 0x0d98

        movlb   0x01
        clrf    0x5c                                        ; reg: 0x0dc
        clrf    0x5d                                        ; reg: 0x0dd
        clrf    0x2c                                        ; reg: 0x0ac
        clrf    0x2d                                        ; reg: 0x0ad
        movlw   0x06
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3a                                        ; reg: 0x0ba
        movlw   0x16
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3b                                        ; reg: 0x0bb
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3c                                        ; reg: 0x0bc
        movf    0x2e, W                                     ; reg: 0x0ae
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3d                                        ; reg: 0x0bd
        movf    0x3d, W                                     ; reg: 0x0bd
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movlb   0x01
        movf    0x3c, W                                     ; reg: 0x0bc
        movlb   0x00
        movwf   0x22                                        ; reg: 0x022
        clrf    0x23                                        ; reg: 0x023
        movlb   0x01
        movf    0x3a, W                                     ; reg: 0x0ba
        addwf   0x3b, W                                     ; reg: 0x0bb
        movlb   0x00
        movwf   0x24                                        ; reg: 0x024
        clrf    0x25                                        ; reg: 0x025
        rlf     0x25, F                                     ; reg: 0x025
        movf    0x22, W                                     ; reg: 0x022
        addwf   0x24, W                                     ; reg: 0x024
        movwf   0x26                                        ; reg: 0x026
        movf    0x23, W                                     ; reg: 0x023
        addwfc  0x25, W                                     ; reg: 0x025
        movwf   0x27                                        ; reg: 0x027
        movf    0x20, W                                     ; reg: 0x020
        addwf   0x26, W                                     ; reg: 0x026
        movwf   0x28                                        ; reg: 0x028
        movf    0x21, W                                     ; reg: 0x021
        addwfc  0x27, W                                     ; reg: 0x027
        movwf   0x29                                        ; reg: 0x029
        movf    0x28, W                                     ; reg: 0x028
        movwf   0x3d                                        ; reg: 0x03d
        movf    0x29, W                                     ; reg: 0x029
        movwf   0x3e                                        ; reg: 0x03e
        movf    0x3e, W                                     ; reg: 0x03e
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3e                                        ; reg: 0x0be
        movlb   0x00
        movf    0x3d, W                                     ; reg: 0x03d
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3f                                        ; reg: 0x0bf
        movlw   0x06
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6e                                        ; reg: 0x06e
        clrf    0x6c                                        ; reg: 0x06c
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6f                                        ; reg: 0x06f
        return

label_211                                                   ; address: 0x0deb

        movlw   0x05
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3a                                        ; reg: 0x0ba
        movlw   0x17
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3b                                        ; reg: 0x0bb
        movlw   0x89
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3c                                        ; reg: 0x0bc
        movf    0x3c, W                                     ; reg: 0x0bc
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movlb   0x01
        movf    0x3a, W                                     ; reg: 0x0ba
        addwf   0x3b, W                                     ; reg: 0x0bb
        movlb   0x00
        movwf   0x22                                        ; reg: 0x022
        clrf    0x23                                        ; reg: 0x023
        rlf     0x23, F                                     ; reg: 0x023
        movf    0x20, W                                     ; reg: 0x020
        addwf   0x22, W                                     ; reg: 0x022
        movwf   0x24                                        ; reg: 0x024
        movf    0x21, W                                     ; reg: 0x021
        addwfc  0x23, W                                     ; reg: 0x023
        movwf   0x25                                        ; reg: 0x025
        movf    0x24, W                                     ; reg: 0x024
        movwf   0x3d                                        ; reg: 0x03d
        movf    0x25, W                                     ; reg: 0x025
        movwf   0x3e                                        ; reg: 0x03e
        movf    0x3e, W                                     ; reg: 0x03e
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3d                                        ; reg: 0x0bd
        movlb   0x00
        movf    0x3d, W                                     ; reg: 0x03d
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3e                                        ; reg: 0x0be
        movlw   0x05
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6e                                        ; reg: 0x06e
        clrf    0x6c                                        ; reg: 0x06c
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6f                                        ; reg: 0x06f
        return

label_212                                                   ; address: 0x0e27

        movlw   0x07
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3a                                        ; reg: 0x0ba
        movlw   0x3a
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3b                                        ; reg: 0x0bb
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3c                                        ; reg: 0x0bc
        movlw   0xbd
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 1)                            ; reg: 0x071
        movlw   0xbe
        movwf   0x21                                        ; reg: 0x021
        movf    0x21, W                                     ; reg: 0x021
        movwf   (Common_RAM + 2)                            ; reg: 0x072
        movlw   0x06
        movlp   0x0d
        call    function_043
        movlp   0x0d
        movlb   0x01
        movf    0x3e, W                                     ; reg: 0x0be
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movlb   0x01
        movf    0x3d, W                                     ; reg: 0x0bd
        movlb   0x00
        movwf   0x22                                        ; reg: 0x022
        clrf    0x23                                        ; reg: 0x023
        movlb   0x01
        movf    0x3c, W                                     ; reg: 0x0bc
        movlb   0x00
        movwf   0x24                                        ; reg: 0x024
        clrf    0x25                                        ; reg: 0x025
        movlb   0x01
        movf    0x3a, W                                     ; reg: 0x0ba
        addwf   0x3b, W                                     ; reg: 0x0bb
        movlb   0x00
        movwf   0x26                                        ; reg: 0x026
        clrf    0x27                                        ; reg: 0x027
        rlf     0x27, F                                     ; reg: 0x027
        movf    0x24, W                                     ; reg: 0x024
        addwf   0x26, W                                     ; reg: 0x026
        movwf   0x28                                        ; reg: 0x028
        movf    0x25, W                                     ; reg: 0x025
        addwfc  0x27, W                                     ; reg: 0x027
        movwf   0x29                                        ; reg: 0x029
        movf    0x22, W                                     ; reg: 0x022
        addwf   0x28, W                                     ; reg: 0x028
        movwf   0x2a                                        ; reg: 0x02a
        movf    0x23, W                                     ; reg: 0x023
        addwfc  0x29, W                                     ; reg: 0x029
        movwf   0x2b                                        ; reg: 0x02b
        movf    0x20, W                                     ; reg: 0x020
        addwf   0x2a, W                                     ; reg: 0x02a
        movwf   0x2c                                        ; reg: 0x02c
        movf    0x21, W                                     ; reg: 0x021
        addwfc  0x2b, W                                     ; reg: 0x02b
        movwf   0x2d                                        ; reg: 0x02d
        movf    0x2c, W                                     ; reg: 0x02c
        movwf   0x3d                                        ; reg: 0x03d
        movf    0x2d, W                                     ; reg: 0x02d
        movwf   0x3e                                        ; reg: 0x03e
        movf    0x3e, W                                     ; reg: 0x03e
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3f                                        ; reg: 0x0bf
        movlb   0x00
        movf    0x3d, W                                     ; reg: 0x03d
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x40                                        ; reg: 0x0c0
        movlw   0x07
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6e                                        ; reg: 0x06e
        clrf    0x6c                                        ; reg: 0x06c
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6f                                        ; reg: 0x06f
        return

label_213                                                   ; address: 0x0e87

        movf    0x3c, W                                     ; reg: 0x03c
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        addlw   0xfb
        movwf   0x3a                                        ; reg: 0x03a
        movlw   0xff
        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        movlw   0x00
        movwf   0x3b                                        ; reg: 0x03b
        movf    0x3c, W                                     ; reg: 0x03c
        addlw   0x02
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x36                                        ; reg: 0x036
        movf    0x21, W                                     ; reg: 0x021
        movwf   0x37                                        ; reg: 0x037
        movf    0x3c, W                                     ; reg: 0x03c
        addlw   0x03
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x34                                        ; reg: 0x034
        movf    0x21, W                                     ; reg: 0x021
        movwf   0x35                                        ; reg: 0x035
        movlw   0x3b
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3a                                        ; reg: 0x0ba
        movlb   0x00
        movf    0x3c, W                                     ; reg: 0x03c
        addlw   0x03
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 7)                            ; reg: 0x077
        movf    0x3a, W                                     ; reg: 0x03a
        movwf   0x21                                        ; reg: 0x021
        movf    0x21, W                                     ; reg: 0x021
        movwf   (Common_RAM + 8)                            ; reg: 0x078
        movf    0x36, W                                     ; reg: 0x036
        movlp   0x0a
        call    function_033
        movlp   0x0d
        xorlw   0x00
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_214
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3b                                        ; reg: 0x0bb
        goto    label_215

label_214                                                   ; address: 0x0ec4

        movlb   0x01
        clrf    0x3b                                        ; reg: 0x0bb

label_215                                                   ; address: 0x0ec6

        movlw   0x02
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6e                                        ; reg: 0x06e
        clrf    0x6c                                        ; reg: 0x06c
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x32                                        ; reg: 0x0b2
        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6f                                        ; reg: 0x06f
        return

label_216                                                   ; address: 0x0ed7

        movf    0x3c, W                                     ; reg: 0x03c
        addlw   0x03
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x3a                                        ; reg: 0x03a
        movf    0x21, W                                     ; reg: 0x021
        movwf   0x3b                                        ; reg: 0x03b
        movf    0x3c, W                                     ; reg: 0x03c
        addlw   0x02
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x36                                        ; reg: 0x036
        movf    0x21, W                                     ; reg: 0x021
        movwf   0x37                                        ; reg: 0x037
        movf    0x3a, W                                     ; reg: 0x03a
        addlw   0x05
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3a                                        ; reg: 0x0ba
        movlw   0x3c
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3b                                        ; reg: 0x0bb
        movlw   0xbd
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   (Common_RAM + 7)                            ; reg: 0x077
        movlw   0x3a
        movwf   0x21                                        ; reg: 0x021
        movf    0x21, W                                     ; reg: 0x021
        movwf   (Common_RAM + 8)                            ; reg: 0x078
        movf    0x36, W                                     ; reg: 0x036
        movlp   0x0b
        call    function_038
        movlp   0x0d
        xorlw   0x00
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_217
        movlb   0x01
        clrf    0x3c                                        ; reg: 0x0bc
        goto    label_218

label_217                                                   ; address: 0x0f0c

        movlw   0x01
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movlb   0x01
        movwf   0x3c                                        ; reg: 0x0bc

label_218                                                   ; address: 0x0f12

        movf    0x3c, W                                     ; reg: 0x03c
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movlb   0x01
        movf    0x3a, W                                     ; reg: 0x0ba
        addwf   0x3b, W                                     ; reg: 0x0bb
        movlb   0x00
        movwf   0x22                                        ; reg: 0x022
        clrf    0x23                                        ; reg: 0x023
        rlf     0x23, F                                     ; reg: 0x023
        movf    0x20, W                                     ; reg: 0x020
        addwf   0x22, W                                     ; reg: 0x022
        movwf   0x24                                        ; reg: 0x024
        movf    0x21, W                                     ; reg: 0x021
        addwfc  0x23, W                                     ; reg: 0x023
        movwf   0x25                                        ; reg: 0x025
        movf    0x24, W                                     ; reg: 0x024
        movwf   0x3d                                        ; reg: 0x03d
        movf    0x25, W                                     ; reg: 0x025
        movwf   0x3e                                        ; reg: 0x03e
        clrf    0x38                                        ; reg: 0x038
        clrf    0x39                                        ; reg: 0x039

label_219                                                   ; address: 0x0f29

        movf    0x3b, W                                     ; reg: 0x03b
        subwf   0x39, W                                     ; reg: 0x039
        btfss   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_220
        movf    0x3a, W                                     ; reg: 0x03a
        subwf   0x38, W                                     ; reg: 0x038

label_220                                                   ; address: 0x0f2f

        btfsc   STATUS, C                                   ; reg: 0x003, bit: 0
        goto    label_221
        movf    0x38, W                                     ; reg: 0x038
        addlw   0x03
        addlw   0xba
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        movwf   0x20                                        ; reg: 0x020
        clrf    0x21                                        ; reg: 0x021
        movf    0x20, W                                     ; reg: 0x020
        addwf   0x3d, F                                     ; reg: 0x03d
        movf    0x21, W                                     ; reg: 0x021
        addwfc  0x3e, F                                     ; reg: 0x03e
        movlw   0x01
        addwf   0x38, F                                     ; reg: 0x038
        movlw   0x00
        addwfc  0x39, F                                     ; reg: 0x039
        goto    label_219

label_221                                                   ; address: 0x0f42

        movf    0x3e, W                                     ; reg: 0x03e
        movwf   0x20                                        ; reg: 0x020
        movf    0x3a, W                                     ; reg: 0x03a
        addlw   0x03
        addlw   0xba
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x20, W                                     ; reg: 0x020
        movwf   INDF1                                       ; reg: 0x001
        movf    0x3d, W                                     ; reg: 0x03d
        movwf   0x20                                        ; reg: 0x020
        movf    0x3a, W                                     ; reg: 0x03a
        addlw   0x04
        addlw   0xba
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    0x20, W                                     ; reg: 0x020
        movwf   INDF1                                       ; reg: 0x001
        movlb   0x01
        movf    0x3a, W                                     ; reg: 0x0ba
        movlb   0x00
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6e                                        ; reg: 0x06e
        clrf    0x6c                                        ; reg: 0x06c
        movlw   0x01
        movwf   0x20                                        ; reg: 0x020
        movf    0x20, W                                     ; reg: 0x020
        movwf   0x6f                                        ; reg: 0x06f
        return

label_222                                                   ; address: 0x0f60

        incf    0x3c, W                                     ; reg: 0x03c
        movwf   FSR1L                                       ; reg: 0x006
        clrf    FSR1H                                       ; reg: 0x007
        movf    INDF1, W                                    ; reg: 0x001
        xorlw   0x07
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_224
        xorlw   0x12
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_225
        xorlw   0x03
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_210
        xorlw   0x01
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_211
        xorlw   0x2d
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_212
        xorlw   0x01
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_213
        xorlw   0x07
        btfsc   STATUS, Z                                   ; reg: 0x003, bit: 2
        goto    label_216
        goto    label_223

label_223                                                   ; address: 0x0f7a

        return

label_224                                                   ; address: 0x0f7b

        movlp   0x0b
        goto    label_171

label_225                                                   ; address: 0x0f7d

        movlp   0x0a
        goto    label_135
        movwi   -.1[INDF1]

        end
