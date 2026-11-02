/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab27c  Symbol: jpeg_resync_to_restart */

undefined4 jpeg_resync_to_restart(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x6d];
  *(undefined4 *)(*param_1 + 0x14) = 0x7c;
  *(int *)(*param_1 + 0x18) = iVar1;
  *(int *)(*param_1 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  if (0xbf < iVar1) goto LAB_001ab2f0;
  while( true ) {
    do {
      *(undefined4 *)(*param_1 + 0x14) = 99;
      *(int *)(*param_1 + 0x18) = iVar1;
      *(undefined4 *)(*param_1 + 0x1c) = 2;
      (**(code **)(*param_1 + 4))(param_1,4);
      iVar1 = FUN_001ab134(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = param_1[0x6d];
    } while (iVar1 < 0xc0);
LAB_001ab2f0:
    if (((7 < iVar1 - 0xd0U) || ((param_2 + 1U & 7) + 0xd0 == iVar1)) ||
       ((param_2 + 2U & 7) + 0xd0 == iVar1)) break;
    if (((param_2 - 1U & 7) + 0xd0 != iVar1) && ((param_2 - 2U & 7) + 0xd0 != iVar1)) {
      *(undefined4 *)(*param_1 + 0x14) = 99;
      *(int *)(*param_1 + 0x18) = iVar1;
      *(undefined4 *)(*param_1 + 0x1c) = 1;
      (**(code **)(*param_1 + 4))(param_1,4);
      param_1[0x6d] = 0;
      return 1;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 99;
  *(int *)(*param_1 + 0x18) = iVar1;
  *(undefined4 *)(*param_1 + 0x1c) = 3;
  (**(code **)(*param_1 + 4))(param_1,4);
  return 1;
}


