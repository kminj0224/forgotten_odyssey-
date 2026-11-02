/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f4f8  Symbol: unzGetFilePos64 */

/* cocos2d::unzGetFilePos64(void*, cocos2d::unz64_file_pos_s*) */

int cocos2d::unzGetFilePos64(void *param_1,unz64_file_pos_s *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == (unz64_file_pos_s *)0x0) || (param_1 == (void *)0x0)) {
    iVar1 = 0x66;
  }
  else {
    if ((*(uint *)((int)param_1 + 0x60) | *(uint *)((int)param_1 + 100)) != 0) {
      uVar2 = *(undefined4 *)((int)param_1 + 0x5c);
      *(undefined4 *)param_2 = *(undefined4 *)((int)param_1 + 0x58);
      *(undefined4 *)(param_2 + 4) = uVar2;
      uVar2 = *(undefined4 *)((int)param_1 + 0x54);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)((int)param_1 + 0x50);
      *(undefined4 *)(param_2 + 0xc) = uVar2;
      return 0;
    }
    iVar1 = 100;
  }
  return -iVar1;
}


