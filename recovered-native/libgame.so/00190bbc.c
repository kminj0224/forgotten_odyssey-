/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190bbc  Symbol: FUN_00190bbc */

int FUN_00190bbc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = 0;
  if (-1 < param_2) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar1 = FUN_0018aa58(*(undefined4 *)(param_1 + 0x10),param_3,param_2);
        if (iVar1 == 0) {
          return param_2;
        }
      }
      else {
        if (*(int *)(param_1 + 0x14) == 0) {
          uVar2 = FUN_00189cd8();
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        iVar1 = FUN_0018aa58(*(undefined4 *)(param_1 + 0x14),param_3,param_2);
        if (iVar1 == 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 4);
          iVar1 = FUN_001a3b7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
          if (-1 < iVar1) {
            *(int *)(param_1 + 0x20) =
                 (iVar3 + *(int *)(param_1 + 0x20)) - *(int *)(*(int *)(param_1 + 0x14) + 4);
            return iVar1;
          }
          FUN_00190594(0x608,0);
          *(undefined4 *)(param_1 + 0x1c) = 0x608;
        }
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}


