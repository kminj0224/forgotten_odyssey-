/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d43e0  Symbol: FUN_001d43e0 */

int * FUN_001d43e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char local_38 [4];
  uint local_34;
  undefined auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_001d2644(local_38,param_1,0);
  if (local_38[0] != '\0') {
    local_34 = 0;
    iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
    piVar2 = *(int **)(iVar1 + 0x84);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4358();
    }
    local_1c = 0xffffffff;
    local_20 = 0;
    local_28 = *(undefined4 *)(iVar1 + 0x78);
    local_24 = 0xffffffff;
    (**(code **)(*piVar2 + 0x18))
              (auStack_30,piVar2,local_28,0xffffffff,0,0xffffffff,iVar1,&local_34,param_2);
    if (local_34 != 0) {
      iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
      FUN_001d0d2c(iVar1,local_34 | *(uint *)(iVar1 + 0x14));
    }
  }
  return param_1;
}


