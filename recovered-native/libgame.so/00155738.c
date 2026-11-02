/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155738  Symbol: setResourcePath */

/* cocos2d::CCFileUtils::setResourcePath(char const*) */

undefined8 __thiscall cocos2d::CCFileUtils::setResourcePath(CCFileUtils *this,char *param_1)

{
  int iVar1;
  CCFileUtils *pCStack_10;
  char *pcStack_c;
  
  pCStack_10 = this;
  pcStack_c = param_1;
  FUN_001eed40(&pcStack_c,this,&pCStack_10);
  if ((this != (CCFileUtils *)0x0) &&
     (iVar1 = FUN_001ece40(&pcStack_c,DAT_0015576c + 0x155754,0), iVar1 != -1)) {
    FUN_001ed9dc(DAT_00155770 + 0x155762,this);
  }
  FUN_001ed6b8(&pcStack_c);
  return CONCAT44(pcStack_c,pCStack_10);
}


