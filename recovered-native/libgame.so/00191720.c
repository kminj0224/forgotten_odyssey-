/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191720  Symbol: FUN_00191720 */

undefined4 FUN_00191720(char **param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = *param_1;
  cVar1 = *pcVar5;
  if ((byte)(cVar1 - 0x30U) < 10) {
    bVar2 = pcVar5[1];
    pcVar4 = pcVar5 + 1;
    if ((byte)(bVar2 - 0x30) < 10) {
      if (cVar1 == '0') goto LAB_00191772;
      pcVar4 = pcVar5 + 2;
      if ((byte)(pcVar5[2] - 0x30U) < 10) {
        if ((cVar1 != '1') &&
           ((cVar1 != '2' || ((0x34 < bVar2 && ((bVar2 != 0x35 || ((byte)pcVar5[2] < 0x30))))))))
        goto LAB_00191772;
        pcVar4 = pcVar5 + 3;
      }
    }
    *param_1 = pcVar4;
    uVar3 = 0;
  }
  else {
LAB_00191772:
    uVar3 = 1;
  }
  return uVar3;
}


