/***********************************************************************/
/*                                                                     */
/*  FILE        :dbsct.c                                               */
/*  DATE        :Wed, Sep 12, 2018                                     */
/*  DESCRIPTION :Setting of B,R Section                                */
/*  CPU TYPE    :SH7286                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.19).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/***********************************************************************/
                  


#include "typedefine.h"

#pragma section $DSEC
static const struct {
    _UBYTE *rom_s;       /* 初期化データセクションのROM 上の先頭アドレス */
    _UBYTE *rom_e;       /* 初期化データセクションのROM 上の最終アドレス */
    _UBYTE *ram_s;       /* 初期化データセクションのRAM 上の先頭アドレス */
}   DTBL[] = {
    { __sectop("D"), __secend("D"), __sectop("R") }
};
#pragma section $BSEC
static const struct {
    _UBYTE *b_s;         /* 未初期化データセクションの先頭アドレス */
    _UBYTE *b_e;         /* 未初期化データセクションの最終アドレス */
}   BTBL[] = {
    { __sectop("B"), __secend("B") }
};
