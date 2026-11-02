/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e8620  Symbol: FUN_001e8620 */

void FUN_001e8620(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x7c);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4358();
  }
  if (*(char *)(piVar2 + 7) == '\0') {
    FUN_00204560(piVar2,param_2);
    uVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,10);
  }
  else {
    uVar1 = (uint)*(byte *)((int)piVar2 + 0x27);
  }
  FUN_001e835c(param_1,uVar1);
  FUN_001e7d14();
  return;
}


