/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ffe4  Symbol: FUN_0018ffe4 */

undefined4 FUN_0018ffe4(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  stat sStack_70;
  
  if ((param_1 == (char *)0x0) || (iVar1 = stat(param_1,&sStack_70), iVar1 == -1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if ((sStack_70.st_mode & 0xf000) == 0x4000) {
      uVar2 = 2;
    }
  }
  return uVar2;
}


