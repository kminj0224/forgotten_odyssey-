/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015daf8  Symbol: initXMLFilePath */

/* cocos2d::CCUserDefault::initXMLFilePath() */

undefined8 cocos2d::CCUserDefault::initXMLFilePath(void)

{
  undefined4 in_r0;
  undefined4 in_r1;
  char *pcVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar1 = *(char **)(DAT_0015db3c + 0x15db00);
  uStack_10 = in_r0;
  uStack_c = in_r1;
  if (*pcVar1 == '\0') {
    CCFileUtils::getWriteablePath();
    FUN_001ee80c(&uStack_c,&uStack_10);
    FUN_001ee590(&uStack_c,DAT_0015db40 + 0x15db1c);
    FUN_001ee6cc(*(undefined4 *)(DAT_0015db44 + 0x15db26),&uStack_c);
    FUN_001ed6b8(&uStack_c);
    FUN_001ed6b8(&uStack_10);
    *pcVar1 = '\x01';
  }
  return CONCAT44(uStack_c,uStack_10);
}


