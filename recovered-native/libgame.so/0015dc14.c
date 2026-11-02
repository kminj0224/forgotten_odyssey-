/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015dc14  Symbol: flush */

/* cocos2d::CCUserDefault::flush() */

void cocos2d::CCUserDefault::flush(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0015dc34 + 0x15dc1c);
  if (*piVar2 != 0) {
    sharedUserDefault();
    puVar1 = (undefined4 *)getXMLFilePath();
    FUN_001a1490(*puVar1,*piVar2);
  }
  return;
}


