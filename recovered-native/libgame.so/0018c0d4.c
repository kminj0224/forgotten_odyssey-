/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c0d4  Symbol: FUN_0018c0d4 */

void FUN_0018c0d4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  if (((param_1 != 0) && (0 < param_3)) && (uVar5 = *(uint *)(param_1 + 4), uVar5 < 0xd)) {
    uVar1 = 1 << (uVar5 & 0xff);
    if ((uVar1 & DAT_0018c16c) == 0) {
      if ((uVar1 & DAT_0018c170) != 0) {
        iVar6 = *(int *)(param_1 + 0x10);
        iVar2 = FUN_0018afbc(param_2,param_3,DAT_0018c16c,uVar5,param_4);
        if (((iVar2 != 0) && (iVar3 = FUN_0018c194(param_1,iVar2), iVar3 == iVar2)) &&
           ((iVar6 != 0 && (*(int *)(iVar6 + 0x18) == iVar3)))) {
          FUN_0018c098(iVar6);
        }
      }
    }
    else if (param_2 != 0) {
      if ((*(int *)(param_1 + 0x28) == param_1 + 0x2c) ||
         (((*(int *)(param_1 + 0x20) != 0 && (*(int *)(*(int *)(param_1 + 0x20) + 0x50) != 0)) &&
          (iVar2 = FUN_0019ccb4(), iVar2 != 0)))) {
        uVar4 = FUN_0019c9c4(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
        *(undefined4 *)(param_1 + 0x28) = uVar4;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        uVar4 = FUN_0019c920(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
        *(undefined4 *)(param_1 + 0x28) = uVar4;
      }
    }
  }
  return;
}


