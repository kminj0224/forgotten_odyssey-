/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001591f4  Symbol: sharedManager */

/* cocos2d::CCScriptEngineManager::sharedManager() */

undefined4 cocos2d::CCScriptEngineManager::sharedManager(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00159214;
  if (*(int *)(DAT_00159214 + 0x159200) == 0) {
    puVar2 = (undefined4 *)operator_new(4);
    *puVar2 = 0;
    *(undefined4 **)(iVar1 + 0x159200) = puVar2;
  }
  return *(undefined4 *)((int)&DAT_00159214 + DAT_00159218);
}


