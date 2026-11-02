/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b544  Symbol: FUN_0018b544 */

undefined4 FUN_0018b544(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined local_1c;
  undefined local_1b;
  
  iVar1 = DAT_0018b600;
  iVar5 = DAT_0018b5fc + 0x18b550;
  uVar4 = 0;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(param_2 + 4) - 3U < 2) {
        uVar3 = *(undefined4 *)(param_2 + 0x28);
        if (param_3 == 0) {
          iVar2 = FUN_001a1f80(param_1);
LAB_0018b598:
          if (iVar2 != 0) {
            uVar4 = FUN_0019c9a0(uVar4,iVar2);
            (***(code ***)(iVar5 + iVar1))(iVar2);
          }
        }
        else {
LAB_0018b5b6:
          uVar4 = FUN_0019c9a0(uVar4,uVar3);
        }
      }
      else if (*(int *)(param_2 + 4) == 5) {
        if (param_3 != 0) {
          iVar2 = FUN_001a2628(param_1,*(undefined4 *)(param_2 + 8));
          if (iVar2 == 0) {
            uVar3 = *(undefined4 *)(param_2 + 0x28);
            goto LAB_0018b5b6;
          }
          iVar2 = FUN_0018b544(param_1,*(undefined4 *)(iVar2 + 0xc),1);
          goto LAB_0018b598;
        }
        local_1c = 0x26;
        local_1b = 0;
        uVar4 = FUN_0019c920(uVar4,&local_1c,1);
        uVar4 = FUN_0019c9a0(uVar4,*(undefined4 *)(param_2 + 8));
        local_1c = 0x3b;
        local_1b = 0;
        uVar4 = FUN_0019c920(uVar4,&local_1c,1);
      }
      param_2 = *(int *)(param_2 + 0x18);
    } while (param_2 != 0);
  }
  return uVar4;
}


