/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c2e8  Symbol: get_Item_Name */

/* New_Notice::get_Item_Name(int, int) */

undefined8 New_Notice::get_Item_Name(int param_1,int param_2)

{
  int iVar1;
  int in_r2;
  undefined4 uVar2;
  int in_r3;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = DAT_0011c3c0 + 0x11c2f6;
  *(int *)param_1 = *(int *)(iVar1 + DAT_0011c3c4) + 0xc;
  if (in_r3 == 4) {
    FUN_001ed9dc(param_1,*(undefined4 *)((in_r2 + 0x97) * 0xc + *(int *)(iVar1 + DAT_0011c3dc)));
    *(undefined4 *)(param_2 + 0x120) = 0;
  }
  else if (in_r3 == 0x16) {
    FUN_001ed9dc(param_1,*(undefined4 *)(in_r2 * 0xc + *(int *)(iVar1 + DAT_0011c3dc)));
  }
  else if (in_r3 == 0) {
    piVar5 = *(int **)(iVar1 + DAT_0011c3c8);
    piVar6 = *(int **)(iVar1 + DAT_0011c3cc);
    iVar3 = in_r2 * 0x14;
    iVar4 = *(int *)(*piVar5 + iVar3 + *piVar6 * 2000 + DAT_0011c3d0);
    if (iVar4 == 0xa9) {
      FUN_001ed9dc(param_1,DAT_0011c3d4 + 0x11c33c);
      iVar1 = *piVar5 + iVar3 + *piVar6 * 2000;
      *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(iVar1 + DAT_0011c3d0 + 4);
      uVar2 = *(undefined4 *)(iVar1 + DAT_0011c3d8 + 4);
    }
    else {
      FUN_001ed9dc(param_1,*(undefined4 *)(iVar4 * 0xc + *(int *)(iVar1 + DAT_0011c3dc)));
      iVar1 = *piVar5 + iVar3 + *piVar6 * 2000;
      *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(iVar1 + DAT_0011c3d0 + 4);
      uVar2 = *(undefined4 *)(iVar1 + DAT_0011c3d8);
    }
    *(undefined4 *)(param_2 + 0x124) = uVar2;
  }
  return CONCAT44(param_2,param_1);
}


