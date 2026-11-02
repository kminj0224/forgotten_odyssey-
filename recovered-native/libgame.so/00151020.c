/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151020  Symbol: saveBuffer */

/* cocos2d::CCRenderTexture::saveBuffer(int, char const*, int, int, int, int) */

CCImage * __thiscall
cocos2d::CCRenderTexture::saveBuffer
          (CCRenderTexture *this,int param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  CCImage *this_00;
  CCImage *pCVar1;
  char *local_20;
  undefined auStack_1c [8];
  
  this_00 = (CCImage *)operator_new(0x14);
  CCImage::CCImage(this_00);
  pCVar1 = this_00;
  if (this_00 != (CCImage *)0x0) {
    pCVar1 = (CCImage *)getUIImageFromBuffer(this,this_00,param_3,param_4,param_5,param_6);
    if (pCVar1 != (CCImage *)0x0) {
      CCFileUtils::getWriteablePath();
      FUN_001ee80c(&local_20,auStack_1c);
      FUN_001ee590(&local_20,param_2);
      FUN_001ed6b8(auStack_1c);
      pCVar1 = (CCImage *)CCImage::saveToFile(this_00,local_20,true);
      FUN_001ed6b8(&local_20);
    }
    CCImage::~CCImage(this_00);
    operator_delete(this_00);
  }
  return pCVar1;
}


