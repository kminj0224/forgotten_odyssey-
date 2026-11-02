/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015761c  Symbol: initWithImageFile */

/* cocos2d::CCImage::initWithImageFile(char const*, cocos2d::CCImage::EImageFormat) */

undefined4 __thiscall
cocos2d::CCImage::initWithImageFile(CCImage *this,char *param_1,EImageFormat param_2)

{
  char *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  ulong local_1c [2];
  
  pcVar1 = (char *)CCFileUtils::fullPathFromRelativePath(param_1);
  local_1c[0] = 0;
  pvVar2 = (void *)CCFileUtils::getFileData(pcVar1,(char *)(DAT_00157674 + 0x15763a),local_1c);
  uVar3 = initWithImageData(this,pvVar2,local_1c[0],param_2,0,0,8);
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  return uVar3;
}


