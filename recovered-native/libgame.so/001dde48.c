/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dde48  Symbol: FUN_001dde48 */

int FUN_001dde48(undefined *param_1,uint param_2,int param_3,uint param_4,char param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = DAT_001ddf00;
  puVar2 = param_1;
  puVar5 = param_1;
  if (param_5 == '\0') {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        uVar4 = param_2 & 7;
        param_2 = param_2 >> 3;
        puVar5 = puVar5 + -1;
        puVar2[-1] = *(undefined *)(param_3 + uVar4 + 4);
        puVar2 = puVar2 + -1;
      } while (param_2 != 0);
    }
    else {
      if ((param_4 & 0x4000) == 0) {
        iVar3 = 4;
      }
      else {
        iVar3 = 0x14;
      }
      do {
        uVar4 = param_2 & 0xf;
        param_2 = param_2 >> 4;
        puVar5 = puVar5 + -1;
        puVar2 = puVar2 + -1;
        *puVar2 = *(undefined *)(param_3 + iVar3 + uVar4);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      puVar5 = puVar5 + -1;
      uVar1 = (uint)((ulonglong)param_2 * (ulonglong)uVar4 >> 0x23);
      puVar2[-1] = *(undefined *)(param_3 + param_2 + uVar1 * -10 + 4);
      param_2 = uVar1;
      puVar2 = puVar2 + -1;
    } while (uVar1 != 0);
  }
  return (int)param_1 - (int)puVar5;
}


