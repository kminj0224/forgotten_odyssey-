/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157a7c  Symbol: saveToFile */

/* cocos2d::CCImage::saveToFile(char const*, bool) */

undefined4 __thiscall cocos2d::CCImage::saveToFile(CCImage *this,char *param_1,bool param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined auStack_24 [4];
  int local_20;
  int local_1c [2];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  FUN_001eed40(&local_20,param_1,auStack_24);
  if (*(uint *)(local_20 + -0xc) < 5) goto LAB_00157b2e;
  FUN_001ee80c(local_1c,&local_20);
  for (uVar3 = 0; uVar3 < *(uint *)(local_1c[0] + -0xc); uVar3 = uVar3 + 1) {
    FUN_001edfbc(local_1c);
    puVar2 = (undefined *)(local_1c[0] + uVar3);
    FUN_001edfbc(&local_20);
    *puVar2 = (char)*(undefined2 *)
                     (**(int **)(DAT_00157b3c + 0x157acc) + (*(byte *)(local_20 + uVar3) + 1) * 2);
  }
  iVar1 = FUN_001ece40(local_1c,DAT_00157b40 + 0x157aea,0);
  if (iVar1 == -1) {
    iVar1 = FUN_001ece40(local_1c,DAT_00157b44 + 0x157b06,0);
    if (iVar1 != -1) {
      iVar1 = _saveImageToJPG(this,param_1);
      goto LAB_00157b14;
    }
  }
  else {
    iVar1 = _saveImageToPNG(this,param_1,param_2);
LAB_00157b14:
    if (iVar1 != 0) {
      FUN_001ed6b8(local_1c);
      FUN_001ed6b8(&local_20);
      return 1;
    }
  }
  FUN_001ed6b8(local_1c);
LAB_00157b2e:
  FUN_001ed6b8(&local_20);
  return 0;
}


