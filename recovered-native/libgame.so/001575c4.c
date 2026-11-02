/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001575c4  Symbol: initWithImageFileThreadSafe */

/* cocos2d::CCImage::initWithImageFileThreadSafe(char const*, cocos2d::CCImage::EImageFormat) */

undefined4 __thiscall
cocos2d::CCImage::initWithImageFileThreadSafe(CCImage *this,char *param_1,EImageFormat param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  ulong local_1c [2];
  
  local_1c[0] = 0;
  pvVar1 = (void *)CCFileUtils::getFileData(param_1,(char *)(DAT_00157618 + 0x1575d4),local_1c);
  uVar2 = initWithImageData(this,pvVar1,local_1c[0],param_2,0,0,8);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return uVar2;
}


