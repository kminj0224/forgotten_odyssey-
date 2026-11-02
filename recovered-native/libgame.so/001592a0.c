/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001592a0  Symbol: purgeSharedManager */

/* cocos2d::CCScriptEngineManager::purgeSharedManager() */

void cocos2d::CCScriptEngineManager::purgeSharedManager(void)

{
  int iVar1;
  CCScriptEngineManager *this;
  
  iVar1 = DAT_001592c0;
  this = *(CCScriptEngineManager **)(DAT_001592c0 + 0x1592ac);
  if (this != (CCScriptEngineManager *)0x0) {
    ~CCScriptEngineManager(this);
    operator_delete(this);
    *(undefined4 *)(iVar1 + 0x1592ac) = 0;
  }
  return;
}


