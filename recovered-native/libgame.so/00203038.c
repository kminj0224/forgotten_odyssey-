/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00203038  Symbol: __cxa_guard_acquire */

undefined4 __cxa_guard_acquire(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*param_1 & 1) == 0) {
    while (iVar1 = FUN_00211c24(param_1,0,0x100), iVar1 != 0) {
      while( true ) {
        if (iVar1 == 1) goto LAB_002030d0;
        if ((iVar1 == 0x100) &&
           (iVar3 = FUN_00211c24(param_1,0x100,DAT_002030dc), iVar1 = DAT_002030dc, iVar3 != 0x100))
        break;
        syscall(0xf0,param_1,0,iVar1,0);
        iVar1 = FUN_00211c24(param_1,0,0x100);
        if (iVar1 == 0) goto LAB_002030a8;
      }
    }
LAB_002030a8:
    uVar2 = 1;
  }
  else {
LAB_002030d0:
    uVar2 = 0;
  }
  return uVar2;
}


