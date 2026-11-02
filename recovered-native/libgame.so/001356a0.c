/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001356a0  Symbol: initWithScriptHandler */

/* cocos2d::CCTimer::initWithScriptHandler(int, float) */

undefined4 __thiscall
cocos2d::CCTimer::initWithScriptHandler(CCTimer *this,int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 in_r2;
  
  uVar1 = DAT_001356ac;
  *(int *)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x1c) = in_r2;
  *(undefined4 *)(this + 0x24) = uVar1;
  return 1;
}


