/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ec9c  Symbol: FUN_0018ec9c */

undefined4
FUN_0018ec9c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (int *)0x0) && (param_3 != 0)) {
    iVar1 = FUN_0018e89c(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    puVar2 = (undefined4 *)(*param_1 + iVar1 * 0x18);
    if (puVar2[5] != 0) {
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
        iVar1 = FUN_0019c334(param_2,param_3,puVar2[1]);
        if (((iVar1 != 0) && (iVar1 = FUN_0019c334(param_4,param_5,puVar2[2]), iVar1 != 0)) &&
           (iVar1 = FUN_0019c334(param_6,param_7,puVar2[3]), iVar1 != 0)) {
          return puVar2[4];
        }
      }
    }
  }
  return 0;
}


