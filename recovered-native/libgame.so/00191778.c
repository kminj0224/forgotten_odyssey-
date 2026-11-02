/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191778  Symbol: FUN_00191778 */

bool FUN_00191778(byte **param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = *param_1;
  bVar1 = *pbVar3;
  if ((((0x19 < (byte)(bVar1 + 0xbf)) && (0x19 < (byte)(bVar1 + 0x9f))) &&
      (9 < (byte)(bVar1 - 0x30))) &&
     (((bVar1 != 0x2d && (bVar1 != 0x2e)) && ((bVar1 != 0x5f && (bVar1 != 0x7e)))))) {
    if (bVar1 == 0x25) {
      bVar1 = pbVar3[1];
      if (((((byte)(bVar1 + 0x9f) < 6) || ((byte)(bVar1 - 0x30) < 10)) || ((byte)(bVar1 + 0xbf) < 6)
          ) && (((bVar1 = pbVar3[2], (byte)(bVar1 + 0x9f) < 6 || ((byte)(bVar1 - 0x30) < 10)) ||
                ((byte)(bVar1 + 0xbf) < 6)))) goto LAB_00191840;
    }
    else if ((((bVar1 == 0x24) || (bVar1 == 0x21)) ||
             ((((bVar1 == 0x26 || (((bVar1 == 0x28 || (bVar1 == 0x29)) || (bVar1 == 0x2a)))) ||
               (((bVar1 == 0x2b || (bVar1 == 0x2c)) || (bVar1 == 0x3b)))) ||
              ((bVar1 == 0x3d || (bVar1 == 0x3a)))))) || (bVar1 == 0x40)) goto LAB_00191840;
    return param_3 == 0;
  }
LAB_00191840:
  do {
    uVar2 = (uint)*pbVar3;
    if (((0x19 < (uVar2 - 0x41 & 0xff)) && (0x19 < (uVar2 - 0x61 & 0xff))) &&
       ((9 < (uVar2 - 0x30 & 0xff) &&
        ((((uVar2 != 0x2d && (uVar2 != 0x2e)) && (uVar2 != 0x5f)) && (uVar2 != 0x7e)))))) {
      if (uVar2 == 0x25) {
        bVar1 = pbVar3[1];
        if ((((5 < (byte)(bVar1 + 0x9f)) && (9 < (byte)(bVar1 - 0x30))) &&
            (5 < (byte)(bVar1 + 0xbf))) ||
           (((bVar1 = pbVar3[2], 5 < (byte)(bVar1 + 0x9f) && (9 < (byte)(bVar1 - 0x30))) &&
            (5 < (byte)(bVar1 + 0xbf))))) goto LAB_001918f8;
      }
      else if ((((uVar2 != 0x24) && (uVar2 != 0x21)) &&
               ((uVar2 != 0x26 && ((uVar2 != 0x28 && (uVar2 != 0x29)))))) &&
              ((uVar2 != 0x2a &&
               ((((uVar2 != 0x2b && (uVar2 != 0x2c)) && (uVar2 != 0x3b)) &&
                (((uVar2 != 0x3d && (uVar2 != 0x3a)) && (uVar2 != 0x40)))))))) {
LAB_001918f8:
        *param_1 = pbVar3;
        return false;
      }
    }
    if (uVar2 == param_2) goto LAB_001918f8;
    if (uVar2 == 0x25) {
      pbVar3 = pbVar3 + 3;
    }
    else {
      pbVar3 = pbVar3 + 1;
    }
  } while( true );
}


