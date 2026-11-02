/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196588  Symbol: FUN_00196588 */

int FUN_00196588(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar2 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10);
    if (((uVar2 - 9 & 0xff) < 2) || (uVar2 == 0x20)) {
      if ((uVar2 != 0) ||
         (iVar1 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa,(uVar2 - 9) * 0x1000000,0,param_4),
         0 < iVar1)) goto LAB_001965ac;
      FUN_0017c6c4(param_1);
    }
    else {
      if (uVar2 != 0xd) {
        return iVar3;
      }
LAB_001965ac:
      iVar1 = *(int *)(param_1 + 0x24);
      if (**(char **)(iVar1 + 0x10) == '\n') {
        *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = 1;
      }
      else {
        *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 1;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) = iVar1;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') {
        FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa,iVar1,0,param_4);
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


