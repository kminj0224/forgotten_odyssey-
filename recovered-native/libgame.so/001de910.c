/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001de910  Symbol: FUN_001de910 */

int FUN_001de910(undefined *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                uint param_6,char param_7)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  longlong lVar6;
  
  lVar6 = CONCAT44(param_4,param_3);
  puVar5 = param_1;
  puVar2 = param_1;
  if (param_7 == '\0') {
    if ((param_6 & 0x4a) == 0x40) {
      do {
        uVar3 = param_3 >> 3 | param_4 << 0x1d;
        param_4 = param_4 >> 3;
        puVar5 = puVar5 + -1;
        puVar2[-1] = *(undefined *)(param_5 + (param_3 & 7) + 4);
        puVar2 = puVar2 + -1;
        param_3 = uVar3;
      } while ((uVar3 | param_4) != 0);
    }
    else {
      if ((param_6 & 0x4000) == 0) {
        iVar1 = 4;
      }
      else {
        iVar1 = 0x14;
      }
      do {
        uVar3 = param_3 >> 4 | param_4 << 0x1c;
        param_4 = param_4 >> 4;
        puVar5 = puVar5 + -1;
        puVar2 = puVar2 + -1;
        *puVar2 = *(undefined *)(param_5 + iVar1 + (param_3 & 0xf));
        param_3 = uVar3;
      } while ((uVar3 | param_4) != 0);
    }
  }
  else {
    do {
      uVar4 = (undefined4)((ulonglong)lVar6 >> 0x20);
      iVar1 = 10;
      __aeabi_uldivmod((int)lVar6,uVar4,10,0,param_4);
      puVar5 = puVar5 + -1;
      puVar2[-1] = *(undefined *)(param_5 + iVar1 + 4);
      lVar6 = __aeabi_uldivmod((int)lVar6,uVar4,10,0);
      puVar2 = puVar2 + -1;
    } while (lVar6 != 0);
  }
  return (int)param_1 - (int)puVar5;
}


